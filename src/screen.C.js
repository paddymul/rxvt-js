/*---------------------------------------------------------------------------*
 * File:        screen.C 
 *---------------------------------------------------------------------------* 
 *
 * Copyright (c) 1997-2001 Geoff Wing <gcw@pobox.com> 
 * Copyright (c) 2003-2007 Marc Lehmann <pcg@goof.com> 
 *
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 2 of the License, or 
 * (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. 
 *--------------------------------------------------------------------------*
(fset 'paddy-inline-CMNT
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([134217830 134217826 1 19 94 124 13 134217830 134217826 11 14 32 47 47 25 32 32 32 32 32 32 32 16 1 134217830 6 67108896 19 94 124 13 2 2 2 24 11 14 5 35 35 35 32 25 16 1 11 11 14] 0 "%d")) arg)))
(fset 'paddy-next-pointer
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("piointer" 0 "%d")) arg)))
(fset 'un_cmnt
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([1 5 1 19 94 124 13 11 return 25 16 1 11 11 14 11 11 16 tab 14] 0 "%d")) arg)))

;; my regex finds any instance of "int" and removes it, even in cases such as print which become pr -- this is bad, so here is a macro to find such occasions
(fset 'paddy-next-unwarranted-c-keyword-int
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("\223c_keyword.*int" 0 "%d")) arg)))
(fset 'paddy-next-c_keyword
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("c_keyword" 0 "%d")) arg)))
(fset 'paddy-next-unwarranted-c-keyword-char
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("\223c_keyword.*char" 0 "%d")) arg)))
(fset 'paddy-insert-var
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([134217848 112 97 100 100 32 105 110 32 32 return 16 tab 118 97 114 32 5 32 105 110 115 101 114 116 101 100 95 118 97 114 14] 0 "%d")) arg)))
(fset 'paddy-next-empty-cast
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("()" 0 "%d")) arg)))
(fset 'paddy-next-possible_pointer
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("possible_pointer" 0 "%d")) arg)))

(fset 'paddy-inline-CMNT2
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([1 19 94 124 13 11 14 5 32 32 47 47 25 32 32 35 35 35 16 5 1 134217830 6 67108896 19 94 2 2 24 11 25 14 5 32 25 32 1 16 11 11] 0 "%d")) arg)))
(fset 'paddy-next-CMNT
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("CMNT" 0 "%d")) arg)))
(local-set-key (kbd "H-C-n") 'paddy-next-CMNT)
  (modify-syntax-entry ?\_ "w"  c-mode-syntax-table)
  (set-syntax-table c-mode-syntax-table)



tilde is bitwise ( COMPLEMENT) or (NOT) operator
&= is directly equivalent in js

when does c++/c use the dot operator when does it use the -> operator
dot access a member, as in a class member
-> is a pointer to a member
in js both will be dots


      ::swap (pix_colors[Color_fg], pix_colors[Color_bg]);

clamp_it is defined in background.C, it is a template, not quite sure what it does

template<typename T, typename U, typename V> static inline T clamp (T v, U a, V b) { return v < (T)a ? a : v >(T)b ? b : v; }
template<typename T, typename U, typename V> static inline void clamp_it (T &v, U a, V b) { v = v < (T)a ? a : v >(T)b ? b : v; }


*/
/*
 * This file handles _all_ screen updates and selections 
 */

#include "../config.h"          /* NECESSARY */
#include "rxvt.h"               /* NECESSARY */
#include "rxvtperl.h"           /* NECESSARY */

#include <inttypes.h> 

#include "salloc.C" // HACK, should be a seperate compile!

//CMNT: c_keyword possible_pointer ^|       static inline void fill_text (text_t *start, text_t value, int len){ 
 inline fill_text (text_t  s tart, text_t value,  len){
  while (len--)
//CMNT: possible_pointer ^|           *start++ = value; 
     s tart++ = value;
}

/* ------------------------------------------------------------------------- */
#define PROP_SIZE               256*1024 
#define PASTE_SIZE		32768
#define TABSIZE                 8       /* default tab size */

/* ------------------------------------------------------------------------- *
 *             GENERAL SCREEN AND SELECTION UPDATE ROUTINES                  * 
 * ------------------------------------------------------------------------- */ 
#define ZERO_SCROLLBACK()                                              \
    if (option (Opt_scrollTtyOutput))                                  \
        view_start = 0
#define CLEAR_SELECTION()                                              \
    selection.beg.row = selection.beg.col                              \
        = selection.end.row = selection.end.col = 0
#define CLEAR_ALL_SELECTION()                                          \
    selection.beg.row = selection.beg.col                              \
        = selection.mark.row = selection.mark.col                      \
        = selection.end.row = selection.end.col = 0

#define ROW_AND_COL_IS_AFTER(A, B, C, D)                               \
    (((A) > (C)) || (((A) == (C)) && ((B) > (D))))
#define ROW_AND_COL_IS_BEFORE(A, B, C, D)                              \
    (((A) < (C)) || (((A) == (C)) && ((B) < (D))))
#define ROW_AND_COL_IN_ROW_AFTER(A, B, C, D)                           \
    (((A) == (C)) && ((B) > (D)))
#define ROW_AND_COL_IN_ROW_AT_OR_AFTER(A, B, C, D)                     \
    (((A) == (C)) && ((B) >= (D)))
#define ROW_AND_COL_IN_ROW_BEFORE(A, B, C, D)                          \
    (((A) == (C)) && ((B) < (D)))
#define ROW_AND_COL_IN_ROW_AT_OR_BEFORE(A, B, C, D)                    \
    (((A) == (C)) && ((B) <= (D)))

/* these must be row_col_t */
#define ROWCOL_IS_AFTER(X, Y)                                          \
    ROW_AND_COL_IS_AFTER ((X).row, (X).col, (Y).row, (Y).col)
#define ROWCOL_IS_BEFORE(X, Y)                                         \
    ROW_AND_COL_IS_BEFORE ((X).row, (X).col, (Y).row, (Y).col)
#define ROWCOL_IN_ROW_AFTER(X, Y)                                      \
    ROW_AND_COL_IN_ROW_AFTER ((X).row, (X).col, (Y).row, (Y).col)
#define ROWCOL_IN_ROW_BEFORE(X, Y)                                     \
    ROW_AND_COL_IN_ROW_BEFORE ((X).row, (X).col, (Y).row, (Y).col)
#define ROWCOL_IN_ROW_AT_OR_AFTER(X, Y)                                \
    ROW_AND_COL_IN_ROW_AT_OR_AFTER ((X).row, (X).col, (Y).row, (Y).col)
#define ROWCOL_IN_ROW_AT_OR_BEFORE(X, Y)                               \
    ROW_AND_COL_IN_ROW_AT_OR_BEFORE ((X).row, (X).col, (Y).row, (Y).col)

/*
 * CLEAR_CHARS: clear <num> chars starting from pixel position <x,y> 
 */
#define CLEAR_CHARS(x, y, num)                                         \
    if (mapped)                                                        \
        XClearArea (dpy, vt, x, y,                                     \
//CMNT: c_keyword ^|                           (unsigned int)Width2Pixel (num),                   \ 
                    ( )Width2Pixel (num),                   \
//CMNT: c_keyword ^|                           (unsigned int)Height2Pixel (1), False) 
                    ( )Height2Pixel (1), False)

/* ------------------------------------------------------------------------- *
 *                        SCREEN `COMMON' ROUTINES                           * 
 * ------------------------------------------------------------------------- */ 

/* Fill part/all of a line with blanks. */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs){ 
rxvt_term.scr_blank_line =function(l,   col,   width,  efs){ 
  if (!l.t){
      lalloc (l);
      col = 0;
      width = ncol;  //FIXME where does NCOL come from?
    }

  l.touch ();

  efs &= ~RS_baseattrMask; // remove italic etc. fontstyles

  efs = SET_FONT (efs, FONTSET (efs).find_font (' '));  //  efs = SET_FONT (efs, FONTSET (efs)->find_font (' '));
  //  efs = (((efs) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (' ')) << 24));
  // the above line is the macro expansion of SET_FONT FONTSET 


  var et_i = col;  //         text_t *et = l.t + col;   ###  possible_pointer FIXME where is l.t an array, what should  I use for an indice of et??
  var er_i = col;  //         rend_t *er = l.r + col;   ###  c_keyword possible_pointer 

  while (width--){
      l.t[et_i++] = ' ';  //             *et++ = ' ';   ###  possible_pointer 
      l.r[er_i++] = efs;  //             *er++ = efs;   ###  possible_pointer 
    }
}

/* ------------------------------------------------------------------------- */
/* Fill a full line with blanks - make sure it is allocated first */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_blank_screen_mem (line_t &l, rend_t efs){ 
rxvt_term.scr_blank_screen_mem =function(line_t &l,  efs){ 
  scr_blank_line (l, 0, ncol, efs);

  l.l = 0;
  l.f = 0;
}

// nuke a single wide character at the given column 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_kill_char (line_t &l, int col){ 
rxvt_term.scr_kill_char =function(line_t &l,  col){ 
  // find begin
  while (col > 0 && l.t[col] == NOCHAR)
    col--;

  var rend= l.r[col] & ~RS_baseattrMask;   //         rend_t rend = l.r[col] & ~RS_baseattrMask;   ###  js_style_variables 
  //FIXME is this a cast, how does the -> interact with the FONTSET macro???
  rend = SET_FONT (rend, FONTSET (rend).find_font (' ')); //  FIXME check macroexpansion rend = SET_FONT (rend, FONTSET (rend)->find_font (' '));  

  // found start, nuke
  do {
    l.t[col] = ' ';
    l.r[col] = rend;
    col++;
  } while (col < ncol && l.t[col] == NOCHAR);
}

/* ------------------------------------------------------------------------- *
 *                          SCREEN INITIALISATION                            * 
 * ------------------------------------------------------------------------- */ 

my_alloc = function(num, obj){

  var ptr = [], ptr_i = 0;
  for(;ptr_i < num; ptr_i++){
    ptr[ptr_i]=new obj();
  }
  return ptr;
}
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_reset (){ 
rxvt_term.scr_reset =function(){ 
  view_start = 0;  // I think these are global variables ???
  num_scr = 0;

  if (ncol == 0)
    ncol = 80;

  if (nrow == 0)
    nrow = 24;

  if (ncol == prev_ncol && nrow == prev_nrow)
    return;

  // we need at least two lines for wrapping to work correctly
  while (nrow + saveLines < 2){
      //TODO//FIXME
      saveLines++;
      prev_nrow--;
      top_row--;
    }

  want_refresh = 1;

  var prev_total_rows= prev_nrow + saveLines;   //         int prev_total_rows = prev_nrow + saveLines;   ###  js_style_variables 
  total_rows = nrow + saveLines;

  screen.tscroll = 0;
  screen.bscroll = nrow - 1;

  if (!row_buf){
      /*
       * first time called so just malloc everything: don't rely on realloc 
       */
      top_row    = 0;
      term_start = 0;


      //this code basically sets up the rendering area, alloc has no special signficance to worry about
      // I don't understand the calls to rxvt_salloc, talloc and ralloc are never used
      // ahh rxvt_salloc is used from lalloc

        //   talloc = new rxvt_salloc (ncol * sizeof (text_t));   ###  possible_pointer   FIXME what to do with allocs?
        //    ralloc = new rxvt_salloc (ncol * sizeof (rend_t));   ###  possible_pointer remove_casts 

      row_buf   = my_alloc (total_rows + nrow, line_t), row_buf_i=0;  //     row_buf   = (line_t *)rxvt_calloc (total_rows + nrow, sizeof (line_t));   ###  possible_pointer 
      drawn_buf = my_alloc(nrow, line_t), drawn_buf_i=0;  //   drawn_buf = (line_t *)rxvt_calloc (nrow             , sizeof (line_t));   ###  possible_pointer 
      swap_buf  = my_alloc (nrow, line_t), swap_buf_i=0;  //             swap_buf  = (line_t *)rxvt_calloc (nrow             , sizeof (line_t));   ###  possible_pointer 

       for (var row = nrow; row--; ){  //             for (int row = nrow; row--; ){   ### js_style_variables  c_keyword 
          scr_blank_screen_mem (ROW (row), DEFAULT_RSTYLE);
          scr_blank_screen_mem (swap_buf [row], DEFAULT_RSTYLE);
          scr_blank_screen_mem (drawn_buf[row], DEFAULT_RSTYLE);
        }


      charsets= memset (charsets, 'B', charsets.length);   //memset (charsets, 'B', sizeof (charsets)); 
      rstyle = DEFAULT_RSTYLE;
      screen.flags = Screen_DefaultFlags;
      screen.cur.row = screen.cur.col = 0;
      screen.charset = 0; 
      current_screen = PRIMARY;
      scr_cursor (SAVE);

#if NSCREENS
      swap.flags = Screen_DefaultFlags;
      swap.cur.row = swap.cur.col = 0;
      swap.charset = 0; 
      current_screen = SECONDARY;
      scr_cursor (SAVE);
      current_screen = PRIMARY;
#endif

      selection.text = NULL;
      selection.len = 0;
      selection.op = SELECTION_CLEAR;
      selection.screen = PRIMARY;
      selection.clicks = 0;
    }
  else{
      /*
       * add or delete rows as appropriate 
       */
    /*
      rxvt_salloc *old_ta = talloc; talloc = new rxvt_salloc (ncol * sizeof (text_t)); 
      rxvt_salloc *old_ra = ralloc; ralloc = new rxvt_salloc (ncol * sizeof (rend_t)); 
    */
#if 0
      if (nrow < prev_nrow){
        for ( var row = nrow; row < prev_nrow; row++){  //                 for (int row = nrow; row < prev_nrow; row++){   ###  c_keyword 
          delete (swap_buf [row]);  //              lfree (swap_buf [row]);
          delete (drawn_buf[row]);  //              lfree (drawn_buf[row]);
            }
        }
#endif

//FIXED: possible_pointer ^|             drawn_buf = (line_t *)rxvt_realloc (drawn_buf, nrow * sizeof (line_t)); 
//FIXED: possible_pointer ^|             swap_buf  = (line_t *)rxvt_realloc (swap_buf , nrow * sizeof (line_t)); 
      drawn_buf = my_alloc(nrow, line_t);
      swap_buf  = my_alloc(nrow, line_t);



      for (var row = min (nrow, prev_nrow); row--; ){  //             for (int row = min (nrow, prev_nrow); row--; ){   ###  c_keyword 
        lresize (drawn_buf[row]);  //          lresize (drawn_buf[row]);
        lresize (swap_buf [row]);  //          lresize (swap_buf [row]);
        }

      for ( row = prev_nrow; row < nrow; row++){  //             for (int row = prev_nrow; row < nrow; row++){   ###  c_keyword 
          swap_buf [row].clear (); scr_blank_screen_mem (swap_buf [row], DEFAULT_RSTYLE);
          drawn_buf[row].clear (); scr_blank_screen_mem (drawn_buf[row], DEFAULT_RSTYLE);
        }

      var  old_buf = row_buf, old_buf_i=row_buf_i;  //             line_t *old_buf = row_buf;     ###  possible_pointer 
      row_buf   = my_alloc (total_rows + nrow, line_t), row_buf_i=0;     //  row_buf = (line_t *)rxvt_calloc (total_rows + nrow, sizeof (line_t));   ###  possible_pointer 

      var p= MOD (term_start + prev_nrow, prev_total_rows);  // previous row   //             int p    = MOD (term_start + prev_nrow, prev_total_rows);  // previous row   ###  js_style_variables 
      var pend= MOD (term_start + top_row  , prev_total_rows);   //             int pend = MOD (term_start + top_row  , prev_total_rows);   ###  js_style_variables 
 var q= total_rows; // rewrapped row   //             int q    = total_rows; // rewrapped row   ###  js_style_variables 

      if (top_row){
          // Re-wrap lines. This is rather ugly, possibly because I am too dumb
          // to come up with a lean and mean algorithm.
          // TODO: maybe optimise when width didn't change

         var  ocur = screen.cur;  //          row_col_t ocur = screen.cur;
          ocur.row = MOD (term_start + ocur.row, prev_total_rows);

          do
            {
              p = MOD (p - 1, prev_total_rows);
#ifdef DEBUG_STRICT
              assert (old_buf [MOD (p, prev_total_rows)].t);
#endif
              var plines= 1;   //                     int plines = 1;   ###  js_style_variables 
              var llen= old_buf [MOD (p, prev_total_rows)].l;   //                     int llen = old_buf [MOD (p, prev_total_rows)].l;   ###  js_style_variables 

              while (p != pend && old_buf [MOD (p - 1, prev_total_rows)].is_longer ()){
                  p = MOD (p - 1, prev_total_rows);

                  plines++;
                  llen += prev_ncol;
                }

              var qlines= max (0, (llen - 1) / ncol) + 1;   //FIXME floor division   int qlines = max (0, (llen - 1) / ncol) + 1;   ###  js_style_variables 

              // drop partial lines completely
              if (q < qlines)
                break;

              q -= qlines;

              var lofs= 0;   //                     int lofs = 0;   ###  js_style_variables 
              var  qline = [], qline_i=0;  //                     line_t *qline;   ###  possible_pointer 

              // re-assemble the full line by destination lines
              for ( var qrow = q; qlines--; qrow++){  //                     for (int qrow = q; qlines--; qrow++){   ###  c_keyword 
                  qline_i = row_buf_i + qrow;
                  qline[qline_i]=new line_t();  //                         lalloc (*qline);   ###  possible_pointer 
                  qline.l = ncol;
                  qline.is_longer (1);

                  var qcol= 0;   //                         int qcol = 0;   ###  js_style_variables 

                  // see below for cursor adjustment rationale
                  if (p == ocur.row)
                    screen.cur.row = q - (total_rows - nrow);

                  // fill a single destination line
                  while (lofs < llen && qcol < ncol){
                    var prow= lofs / prev_ncol;   // FIXME floor division      int prow = lofs / prev_ncol;   ###  js_style_variables 
                    var pcol= lofs % prev_ncol;   //   int pcol = lofs % prev_ncol;   ###  js_style_variables 

                      prow = MOD (p + prow, prev_total_rows);

                      // we only adjust the cursor _row_ and put it into 
                      // the topmost line of "long line" it was in, as
                      // this seems to upset applications/shells/readline
                      // least.
                      if (prow == ocur.row)
                        screen.cur.row = q - (total_rows - nrow);

                      line_t &pline = old_buf [prow]; //FIXME

                      var len= min (min (prev_ncol - pcol, ncol - qcol), llen - lofs);   //   int len = min (min (prev_ncol - pcol, ncol - qcol), llen - lofs);   ###  js_style_variables 

                      qline.t = memcpy(qline.t, qline.t_i +qcol, pline.t, pline.t_i +pcol, len);  //                             memcpy (qline->t + qcol, pline.t + pcol, len * sizeof (text_t));   ###  possible_pointer 
                      qline.t = memcpy(qline.r, qline.r_i +qcol, pline.r, pline.r_i +pcol, len);  //                             memcpy (qline->r + qcol, pline.r + pcol, len * sizeof (rend_t));   ###  possible_pointer remove_casts 

                      lofs += len;
                      qcol += len;
                    }
                }

              qline->l = llen ? MOD (llen - 1, ncol) + 1 : 0;
              qline->is_longer (0);
//CMNT: possible_pointer ^|                     scr_blank_line (*qline, qline->l, ncol - qline->l, DEFAULT_RSTYLE); 
              scr_blank_line ( qline, qline.l, ncol - qline.l, DEFAULT_RSTYLE);
            }
          while (p != pend && q > 0);

          term_start = total_rows - nrow;
          top_row = q - term_start;

          // make sure all terminal lines exist
          while (top_row > 0)
            scr_blank_screen_mem (ROW (--top_row), DEFAULT_RSTYLE);
        }
      else{
          // if no scrollback exists (yet), wing, instead of wrap

         for (var row = min (nrow, prev_nrow); row--; ){  //                 for (int row = min (nrow, prev_nrow); row--; ){   ### js_style_variables  c_keyword 
              line_t &pline = old_buf [MOD (term_start + row, prev_total_rows)];
              line_t &qline = row_buf [row];

              qline = pline;
              lresize (qline);
            }

           for (var  row = prev_nrow; row < nrow; row++){  //                 for (int row = prev_nrow; row < nrow; row++){   ### js_style_variables  c_keyword 
              row_buf [row].clear (); scr_blank_screen_mem (row_buf [row], DEFAULT_RSTYLE);
            }

          term_start = 0;
        }

      free (old_buf);
      delete old_ta;
      delete old_ra;

      clamp_it (screen.cur.row, 0, nrow - 1);
      clamp_it (screen.cur.col, 0, ncol - 1);
    }

  free (tabs);
  tabs = [], tabs_i=0;  //         tabs = (char *)rxvt_malloc (ncol);   ###  c_keyword possible_pointer 

   for ( var col = ncol; --col; +)  //         for (int col = ncol; --col; )   ### js_style_variables  c_keyword 
    tabs [col] = col % TABSIZE == 0;

  CLEAR_ALL_SELECTION ();

  prev_nrow = nrow;
  prev_ncol = ncol;

  tt_winch ();

  HOOK_INVOKE ((this, HOOK_RESET, DT_END));
}

/* ------------------------------------------------------------------------- */
/*
 * Free everything.  That way malloc debugging can find leakage. 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_release (){ 
rxvt_term.scr_release =function(){ 
  if (row_buf){
      /*
      delete talloc; talloc = 0;  //FIXME what to do with allocs?
      delete ralloc; ralloc = 0;
      free (row_buf);
      free (swap_buf);
      free (drawn_buf);
      row_buf = 0; // signal that we freed all the arrays above

      free (tabs);
      tabs = 0;

       */
      row_buff="",  swap_buf="",drawn_buf="", row_buff=0, tabs=0
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Hard/Soft reset 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_poweron (){ 
rxvt_term.scr_poweron =function(){ 
  scr_release ();
  prev_nrow = prev_ncol = 0;
  rvideo_mode = false;
  scr_soft_reset ();
  scr_reset ();

  scr_clear (true);
  scr_refresh ();
}

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_soft_reset (){ 
rxvt_term.scr_soft_reset =function(){ 
  /* only affects modes, nothing drastic such as clearing the screen */
#if ENABLE_OVERLAY
  scr_overlay_off ();
#endif

  if (current_screen != PRIMARY)
    scr_swap_screen ();

  scr_scroll_region (0, MAX_ROWS - 1);
  scr_rendition (0, ~RS_None);
  scr_insert_mode (0);
}

/* ------------------------------------------------------------------------- *
 *                         PROCESS SCREEN COMMANDS                           * 
 * ------------------------------------------------------------------------- */ 
/*
 * Save and Restore cursor 
 * XTERM_SEQ: Save cursor   : ESC 7 
 * XTERM_SEQ: Restore cursor: ESC 8 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_cursor (cursor_mode mode){ 
rxvt_term.scr_cursor =function(mode){ 

    /*
    var s ;  //         screen_t *s;   ### js_style_variables  possible_pointer 
  switch (mode){
      case SAVE:
        s->s_cur.row = screen.cur.row;
        s->s_cur.col = screen.cur.col;
        s->s_rstyle = rstyle;
        s->s_charset = screen.charset; 
        s->s_charset_char = charsets[screen.charset]; 
        break;

      case RESTORE:
        want_refresh = 1;
        screen.cur.row = s->s_cur.row;
        screen.cur.col = s->s_cur.col;
        screen.flags &= ~Screen_WrapNext;
        rstyle = s->s_rstyle;
        screen.charset = s->s_charset; 
        charsets[screen.charset] = s->s_charset_char; 
        set_font_style ();
        break;
    }

    // boundary check in case screen size changed between SAVE and RESTORE 
  min_it (s->cur.row, nrow - 1);
  min_it (s->cur.col, ncol - 1);
#ifdef DEBUG_STRICT
  assert (s->cur.row >= 0);
  assert (s->cur.col >= 0);
#endif
*/
    var s ;  //         screen_t *s;   ### js_style_variables  possible_pointer 
#if NSCREENS && !defined(NO_SECONDARY_SCREEN_CURSOR)
  if (current_screen == SECONDARY)
    s = swap;
  else
#endif
    s = screen;  //    s = &screen;  ### pointer reference

  switch (mode){
      case SAVE:
        s.s_cur.row = screen.cur.row;
        s.s_cur.col = screen.cur.col;
        s.s_rstyle = rstyle;
        s.s_charset = screen.charset; 
        s.s_charset_char = charsets[screen.charset]; 
        break;

      case RESTORE:
        want_refresh = 1;
        screen.cur.row = s.s_cur.row;
        screen.cur.col = s.s_cur.col;
        screen.flags &= ~Screen_WrapNext;
        rstyle = s.s_rstyle;
        screen.charset = s.s_charset; 
        charsets[screen.charset] = s.s_charset_char; 
        set_font_style ();
        break;
    }

  /* boundary check in case screen size changed between SAVE and RESTORE */
  min_it (s.cur.row, nrow - 1);
  min_it (s.cur.col, ncol - 1);
#ifdef DEBUG_STRICT
  assert (s.cur.row >= 0);
  assert (s.cur.col >= 0);
#endif

}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_swap_screen (){ 
rxvt_term.scr_swap_screen =function(){ 
  if (!option (Opt_secondaryScreen))
    return;

   for (var i = prev_nrow; i--; )  //         for (int i = prev_nrow; i--; )   ### js_style_variables  c_keyword 
    ::swap (ROW(i), swap_buf [i]);

  ::swap (screen.cur, swap.cur);

  screen.cur.row = clamp (screen.cur.row, 0, prev_nrow - 1);
  screen.cur.col = clamp (screen.cur.col, 0, prev_ncol - 1);
}

/* ------------------------------------------------------------------------- */
/*
 * Swap between primary and secondary screens 
 * XTERM_SEQ: Primary screen  : ESC [ ? 4 7 h 
 * XTERM_SEQ: Secondary screen: ESC [ ? 4 7 l 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_change_screen (int scrn){ 
rxvt_term.scr_change_screen =function( scrn){ 
  if (scrn == current_screen)
    return;

  want_refresh = 1;
  view_start = 0;

  selection_check (2);        /* check for boundary cross */

  var i= current_screen; current_screen  = scrn; scrn = i;  //         int i = current_screen; current_screen = scrn; scrn = i;   ###  js_style_variables 

#if NSCREENS
  if (option (Opt_secondaryScreen)){
      num_scr = 0;

      scr_swap_screen ();

      ::swap (screen.charset, swap.charset); 
      ::swap (screen.flags,   swap.flags);
      screen.flags |= Screen_VisibleCursor;
      swap.flags   |= Screen_VisibleCursor;
    }
  else
#endif
    if (option (Opt_secondaryScroll))
      scr_scroll_text (0, prev_nrow - 1, prev_nrow);
}

// clear WrapNext indicator, solidifying position on next line
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_do_wrap (){ 
rxvt_term.scr_do_wrap =function(){ 
  if (!(screen.flags & Screen_WrapNext))
    return;

  screen.flags &= ~Screen_WrapNext;

  screen.cur.col = 0;

  if (screen.cur.row == screen.bscroll)
    scr_scroll_text (screen.tscroll, screen.bscroll, 1);
  else if (screen.cur.row < nrow - 1)
    screen.cur.row++;
}

/* ------------------------------------------------------------------------- */
/*
 * Change the colour for following text 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_color (unsigned int color, int fgbg){ 
rxvt_term.scr_color =function(  color,  fgbg){ 
  if (!IN_RANGE_INC (color, minCOLOR, maxTermCOLOR))
    color = fgbg;

  if (fgbg == Color_fg)
    rstyle = SET_FGCOLOR (rstyle, color);
  else
    rstyle = SET_BGCOLOR (rstyle, color);
}

/* ------------------------------------------------------------------------- */
/*
 * Change the rendition style for following text 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_rendition (int set, int style){ 
rxvt_term.scr_rendition =function( set,  style){ 
  if (set)
    rstyle |= style;
  else if (style == ~RS_None)
    rstyle = DEFAULT_RSTYLE;
  else
    rstyle &= ~style;
}

/* ------------------------------------------------------------------------- */
/*
 * Scroll text between <row1> and <row2> inclusive, by <count> lines 
 * count positive ==> scroll up 
 * count negative ==> scroll down 
 */
//CMNT: js_style_functions c_keyword ^|       int rxvt_term::scr_scroll_text (int row1, int row2, int count){ 
rxvt_term.scr_scroll_text =function( row1,  row2,  count){ 
  if (count == 0 || (row1 > row2))
    return 0;

  want_refresh = 1;
  num_scr += count;

  if (count > 0
      && row1 == 0
      && (current_screen == PRIMARY || option (Opt_secondaryScroll))){
      top_row = max (top_row - count, -saveLines);

      // scroll everything up 'count' lines
      term_start = (term_start + count) % total_rows;

      // sever bottommost line
      {
        line_t &l = ROW(row2 - count);
        l.is_longer (0);
        l.touch ();
      }

      // erase newly scrolled-in lines
//CMNT: c_keyword ^|             for (int i = count; i--; ){ 
      for ( i = count; i--; ){
          line_t &l = ROW(nrow - 1 - i);

          // optimize if already cleared, can be significant on slow machines
          // could be rolled into scr_blank_screen_mem 
          if (l.r && l.l < ncol - 1 && !((l.r[l.l + 1] ^ rstyle) & (RS_fgMask | RS_bgMask))){
              scr_blank_line (l, 0, l.l, rstyle);
              l.l = 0;
              l.f = 0;
            }
          else
            scr_blank_screen_mem (l, rstyle);
        }

      // now copy lines below the scroll region bottom to the
      // bottom of the screen again, so they look as if they
      // hadn't moved.
//CMNT: c_keyword ^|             for (int i = nrow; --i > row2; ){ 
      for ( i = nrow; --i > row2; ){
          line_t &l1 = ROW(i - count);
          line_t &l2 = ROW(i);

          ::swap (l1, l2);
          l2.touch ();
        }

      // move and/or clear selection, if any
      if (selection.op && current_screen == selection.screen){
          selection.beg.row  -= count;
          selection.end.row  -= count;
          selection.mark.row -= count;

          if (selection.beg.row < top_row
              || selection.end.row < top_row
              || selection.mark.row < top_row){
              CLEAR_ALL_SELECTION ();
              selection.op = SELECTION_CLEAR;
            }
        }

      // finally move the view window, if desired
      if (option (Opt_scrollWithBuffer)
          && view_start != 0
          && view_start != -saveLines)
        scr_page (UP, count);

      if (SHOULD_INVOKE (HOOK_SCROLL_BACK))
        HOOK_INVOKE ((this, HOOK_SCROLL_BACK, DT_INT, count, DT_INT, top_row, DT_END));
    }
  else{
      if (selection.op && current_screen == selection.screen){
          if ((selection.beg.row < row1 && selection.end.row > row1)
              || (selection.beg.row < row2 && selection.end.row > row2)
              || (selection.beg.row - count < row1 && selection.beg.row >= row1)
              || (selection.beg.row - count > row2 && selection.beg.row <= row2)
              || (selection.end.row - count < row1 && selection.end.row >= row1)
              || (selection.end.row - count > row2 && selection.end.row <= row2)){
              CLEAR_ALL_SELECTION ();
              selection.op = SELECTION_CLEAR;
            }
          else if (selection.end.row >= row1 && selection.end.row <= row2){
              /* move selected region too */
              selection.beg.row  -= count;
              selection.end.row  -= count;
              selection.mark.row -= count;

              selection_check (0);
            }
        }

      // use a simple and robust scrolling algorithm, this
      // part of scr_scroll_text is not time-critical.

       var rows= row2 - row1 + 1;   //             int rows = row2 - row1 + 1;   ### js_style_variables  js_style_variables 

      min_it (count, rows);

//CMNT: possible_pointer ^|             line_t *temp_buf = row_buf + total_rows; 
      line_t  t emp_buf = row_buf + total_rows;

       for (var row = 0; row < rows; row++){  //             for (int row = 0; row < rows; row++){   ### js_style_variables  c_keyword 
          temp_buf [row] = ROW(row1 + (row + count + rows) % rows);

          if (!IN_RANGE_EXC (row + count, 0, rows))
            scr_blank_screen_mem (temp_buf [row], rstyle);
        }

       for (var row = 0; row < rows; row++)  //             for (int row = 0; row < rows; row++)   ### js_style_variables  c_keyword 
        ROW(row1 + row) = temp_buf [row];
    }

  return count;
}

/* ------------------------------------------------------------------------- */
/*
 * Add text given in <str> of length <len> to screen struct 
 */
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::scr_add_lines (const wchar_t *str, int len, int minlines){ 
rxvt_term.scr_add_lines =function(   str,  len,  minlines){ 
    var str_i = 0;
  if (len <= 0)               /* sanity */
    return;

  var checksel;  //         unsigned char checksel;   ### js_style_variables  c_keyword 
  var c;  //         unicode_t c;   ### js_style_variables  c_keyword 
   var ncol= this.ncol;   //         int ncol = this->ncol;   ### js_style_variables   FIXME does "this" mean something different in c++?
  var strend = str, strend_i = len;  //         const wchar_t *strend = str + len;   ###  c_keyword possible_pointer 

  want_refresh = 1;
  ZERO_SCROLLBACK ();

  if (minlines > 0){
      minlines += screen.cur.row - screen.bscroll;
      min_it (minlines, screen.cur.row - top_row);

      if (minlines > 0
          && screen.tscroll == 0
          && screen.bscroll == nrow - 1){
          /* _atleast_ this many lines need to be scrolled */
          var str_i = 0;
          scr_scroll_text (screen.tscroll, screen.bscroll minlines);
          screen.cur.row -= minlines;
        }
    }

#ifdef DEBUG_STRICT
  assert (screen.cur.col < ncol);
  assert (screen.cur.row < nrow
          && screen.cur.row >= top_row);
#endif
    var row= screen.cur.row;   //         int row = screen.cur.row;   ###  js_style_variables 

  checksel = selection.op && current_screen == selection.screen ? 1 : 0;

    var  line = &ROW(row);  //         line_t *line = &ROW(row);   ###  possible_pointer  FIXME memory reference

  while (str_i < strend_i){  //  while (str < strend){    ### 
      c =  str[str_i++]; // convert to rxvt-unicodes representation  //             c = (unicode_t)*str++; // convert to rxvt-unicodes representation   ###  possible_pointer remove_casts 

      if (expect_false (c < 0x20))
        if (c == C0_LF){
            max_it (line->l, screen.cur.col);

            screen.flags &= ~Screen_WrapNext;

            if (screen.cur.row == screen.bscroll)
              scr_scroll_text (screen.tscroll, screen.bscroll, 1);
            else if (screen.cur.row < (nrow - 1))
              row = ++screen.cur.row;

            line = &ROW(row);  /* _must_ refresh */
            continue;
          }
        else if (c == C0_CR){
            max_it (line->l, screen.cur.col);  //            max_it (line->l, screen.cur.col);    ### 

            screen.flags &= ~Screen_WrapNext;  //            screen.flags &= ~Screen_WrapNext;    ### 
            screen.cur.col = 0;
            continue;
          }
        else if (c == C0_HT){
            scr_tab (1, true);
            continue;
          }

      if (expect_false (
            checksel            /* see if we're writing within selection */
            && !ROWCOL_IS_BEFORE (screen.cur, selection.beg)
            && ROWCOL_IS_BEFORE (screen.cur, selection.end)
         )){
          checksel = 0;
          /*
           * If we wrote anywhere in the selected area, kill the selection 
           * XXX: should we kill the mark too?  Possibly, but maybe that 
           *      should be a similar check. 
           */
          CLEAR_SELECTION ();
        }

      if (expect_false (screen.flags & Screen_WrapNext)){
          scr_do_wrap ();

          line->l = ncol;
          line->is_longer (1);

          row = screen.cur.row;
          line = &ROW(row);   /* _must_ refresh */
        }

      // some utf-8 decoders "decode" surrogate characters: let's fix this. 
      if (expect_false (IN_RANGE_INC (c, 0xd800, 0xdfff)))
        c = 0xfffd;

      // rely on wcwidth to tell us the character width, do wcwidth before 
      // further replacements, as wcwidth might return -1 for the line
      // drawing characters below as they might be invalid in the current 
      // locale.
      var width= WCWIDTH (c);   //             int width = WCWIDTH (c);   ###  js_style_variables 

 if (expect_false (charsets [screen.charset] == '0')) // DEC SPECIAL 
        {
          // vt100 special graphics and line drawing
          // 5f-7e standard vt100
          // 40-5e rxvt extension for extra curses acs chars 
          static uint16_t vt100_0[62] = { // 41 .. 7e 
                    0x2191, 0x2193, 0x2192, 0x2190, 0x2588, 0x259a, 0x2603, // 41-47 hi mr. snowman!
                 0,      0,      0,      0,      0,      0,      0,      0, // 48-4f
                 0,      0,      0,      0,      0,      0,      0,      0, // 50-57
                 0,      0,      0,      0,      0,      0,      0, 0x0020, // 58-5f
            0x25c6, 0x2592, 0x2409, 0x240c, 0x240d, 0x240a, 0x00b0, 0x00b1, // 60-67
            0x2424, 0x240b, 0x2518, 0x2510, 0x250c, 0x2514, 0x253c, 0x23ba, // 68-6f
            0x23bb, 0x2500, 0x23bc, 0x23bd, 0x251c, 0x2524, 0x2534, 0x252c, // 70-77
            0x2502, 0x2264, 0x2265, 0x03c0, 0x2260, 0x00a3, 0x00b7,         // 78-7e
          };

          if (c >= 0x41 && c <= 0x7e && vt100_0[c - 0x41]){
              c = vt100_0[c - 0x41];
              width = 1; // vt100 line drawing characters are always single-width 
            }
        }

      if (expect_false (screen.flags & Screen_Insert))
        scr_insdel_chars (width, INSERT); 

      if (width != 0){
#if !UNICODE_3
        // trim characters we can't store directly :( 
          if (c >= 0x10000)
# if ENABLE_COMBINING
            c = rxvt_composite.compose (c); // map to lower 16 bits
# else
            c = 0xfffd;
# endif
#endif

            // nuke the character at this position, if required 
          if (expect_false (
                line->t[screen.cur.col] == NOCHAR
                || (screen.cur.col < ncol - 1
                    && line->t[screen.cur.col + 1] == NOCHAR)
             ))
//CMNT: c_keyword possible_pointer ^|                   scr_kill_char (*line, screen.cur.col); 
            scr_kill_char ( l ine, screen.cur.col);

          var rend= SET_FONT (rstyle, FONTSET (rstyle).find_font (c));   //                 rend_t rend = SET_FONT (rstyle, FONTSET (rstyle)->find_font (c));   ###  js_style_variables 

 // if the character doesn't fit into the remaining columns... 
          if (expect_false (screen.cur.col > ncol - width && ncol >= width)){
              // ... artificially enlargen the previous one
              c = NOCHAR;
              // and try the same character next loop iteration 
              --str_i;
            }

          line->touch ();

          do
            {
              line->t[screen.cur.col] = c;
              line->r[screen.cur.col] = rend;

              if (expect_true (screen.cur.col < ncol - 1))
                screen.cur.col++;
              else{
                  line->l = ncol;
                  if (screen.flags & Screen_Autowrap)
                    screen.flags |= Screen_WrapNext;
                  break;
                }

              c = NOCHAR;
            }
          while (expect_false (--width > 0));

          // pad with spaces when overwriting wide character with smaller one 
          if (expect_false (!width)){
              line->touch ();

               for (var  c = screen.cur.col; c < ncol && line.t[c] == NOCHAR; c++){  //                     for (int c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++){   ### js_style_variables  c_keyword 
                  line->t[c] = ' ';
                  line->r[c] = rend;
                }
            }
        }
#if ENABLE_COMBINING
      else // width == 0
        {
          if (c != 0xfeff) // ignore BOM
            {
              // handle combining characters 
              // we just tag the accent on the previous on-screen character. 
              // this is arguably not correct, but also arguably not wrong.
              // we don't handle double-width characters nicely yet. 
//CMNT: possible_pointer ^|                     line_t *linep; 
              line_t  linep;
//CMNT: possible_pointer ^|                     text_t *tp; 
              text_t  tp;
//CMNT: c_keyword possible_pointer ^|                     rend_t *rp; 
                r p;

              if (screen.cur.col > 0){
                  linep = line;
                  tp = line->t + screen.cur.col - 1;
                  rp = line->r + screen.cur.col - 1;
                }
              else if (screen.cur.row > 0
                       && ROW(screen.cur.row - 1).is_longer ()){
                  linep = &ROW(screen.cur.row - 1);
                  tp = line->t + ncol - 1;
                  rp = line->r + ncol - 1;
                }
              else
                continue;

              linep->touch ();

//CMNT: possible_pointer ^|                     while (*tp == NOCHAR && tp > linep->t) 
              while ( t p == NOCHAR && tp > linep->t)
                tp--, rp--;

              // first try to find a precomposed character 
//CMNT: js_style_variables possible_pointer ^|                     unicode_t n = rxvt_compose (*tp, c); 
 var n= rxvt_compose ( t p, c); 
              if (n == NOCHAR)
//CMNT: possible_pointer ^|                       n = rxvt_composite.compose (*tp, c); 
                n = rxvt_composite.compose ( t p, c);

//CMNT: possible_pointer ^|                     *tp = n; 
               t p = n;
//CMNT: possible_pointer ^|                     *rp = SET_FONT (*rp, FONTSET (*rp)->find_font (*tp)); 
               r p = SET_FONT ( r p, FONTSET ( r p)->find_font ( t p));
            }
        }
#endif
    }

  max_it (line->l, screen.cur.col);

#ifdef DEBUG_STRICT
  assert (screen.cur.row >= 0);
#endif
}

/* ------------------------------------------------------------------------- */
/*
 * Process Backspace.  Move back the cursor back a position, wrap if have to 
 * XTERM_SEQ: CTRL-H 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_backspace (){ 
rxvt_term.scr_backspace =function(){ 
  if (screen.cur.col == 0){
      if (screen.cur.row > 0){
#ifdef TERMCAP_HAS_BW
          screen.cur.col = ncol - 1;
          --screen.cur.row;

          want_refresh = 1;
#endif
        }
    }
  else
    scr_gotorc (0, -1, RELATIVE);
}

/* ------------------------------------------------------------------------- */
/*
 * Process Horizontal Tab 
 * count: +ve = forward; -ve = backwards 
 * XTERM_SEQ: CTRL-I 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_tab (int count, bool ht){ 
rxvt_term.scr_tab =function( count, bool ht){ 
    var i, x; //int i, x;        ###  js_style_variables c_keyword

  want_refresh = 1;
  i = x = screen.cur.col;

  if (count == 0)
    return;
  else if (count > 0){
      line_t &l = ROW(screen.cur.row);
      var base_rend= l.r[i];  //rend_t base_rend = l.r[i];        ###  js_style_variables
      ht &= l.t[i] == ' ';

      for (; ++i < ncol; )
        if (tabs[i]){
            x = i;

            if (!--count)
              break;
          }
        else
          ht &= l.t[i] == ' '
                && RS_SAME (l.r[i], base_rend);

      if (count)
        x = ncol - 1;

      // store horizontal tab commands as characters inside the text 
      // buffer so they can be selected and pasted.
      if (ht && option (Opt_pastableTabs)){
          base_rend = SET_FONT (base_rend, 0);

          l.touch (x);

          i = screen.cur.col;

          l.t[i] = '\t';
          l.r[i] = base_rend;

          while (++i < x){
              l.t[i] = NOCHAR;
              l.r[i] = base_rend;
            }
        }
    }
  else /* if (count < 0) */
    {
      for (; --i >= 0; )
        if (tabs[i]){
            x = i;
            if (!++count)
              break;
          }

      if (count)
        x = 0;
    }

  if (x != screen.cur.col)
    scr_gotorc (0, x, R_RELATIVE);
}

/* ------------------------------------------------------------------------- */
/*
 * Process DEC Back Index 
 * XTERM_SEQ: ESC 6 
 * Move cursor left in row.  If we're at the left boundary, shift everything 
 * in that row right.  Clear left column. 
 */
#if !ENABLE_MINIMAL
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_backindex (){ 
rxvt_term.scr_backindex =function(){ 
  if (screen.cur.col > 0)
    scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
  else
    scr_insdel_chars (1, INSERT); 
}
#endif
/* ------------------------------------------------------------------------- */
/*
 * Process DEC Forward Index 
 * XTERM_SEQ: ESC 9 
 * Move cursor right in row.  If we're at the right boundary, shift everything 
 * in that row left.  Clear right column. 
 */
#if !ENABLE_MINIMAL
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_forwardindex (){ 
rxvt_term.scr_forwardindex =function(){ 
  if (screen.cur.col < ncol - 1)
    scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
  else{
      line_t &l = ROW(screen.cur.row);

      l.touch ();
      l.is_longer (0);

      scr_gotorc (0, 0, R_RELATIVE);
      scr_insdel_chars (1, DELETE); 
      scr_gotorc (0, ncol - 1, R_RELATIVE);
    }
}
#endif

/* ------------------------------------------------------------------------- */
/*
 * Goto Row/Column 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_gotorc (int row, int col, int relative){   
    rxvt_term.scr_gotorc =function( row,  col,  relative){  //I'm suspsicious
  want_refresh = 1;
  ZERO_SCROLLBACK ();

  screen.cur.col = relative & C_RELATIVE ? screen.cur.col + col : col;
  clamp_it (screen.cur.col, 0, ncol - 1);

  screen.flags &= ~Screen_WrapNext;

  if (relative & R_RELATIVE){
      if (row > 0){
          if (screen.cur.row <= screen.bscroll
              && (screen.cur.row + row) > screen.bscroll)
            screen.cur.row = screen.bscroll;
          else
            screen.cur.row += row;
        }
      else if (row < 0){
          if (screen.cur.row >= screen.tscroll
              && (screen.cur.row + row) < screen.tscroll)
            screen.cur.row = screen.tscroll;
          else
            screen.cur.row += row;
        }
    }
  else{
      if (screen.flags & Screen_Relative){
          /* relative origin mode */
          screen.cur.row = row + screen.tscroll;
          min_it (screen.cur.row, screen.bscroll);
        }
      else
        screen.cur.row = row;
    }

  clamp_it (screen.cur.row, 0, nrow - 1);
}

/* ------------------------------------------------------------------------- */
/*
 * direction should be UP or DN 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_index (enum page_dirn direction){ 
rxvt_term.scr_index =function(direction){ 
    var dirn;                       //         int dirn;   ###  c_keyword 

  want_refresh = 1;
  ZERO_SCROLLBACK ();

  dirn = ((direction == UP) ? 1 : -1);

  screen.flags &= ~Screen_WrapNext;

  if ((screen.cur.row == screen.bscroll && direction == UP)
      || (screen.cur.row == screen.tscroll && direction == DN))
    scr_scroll_text (screen.tscroll, screen.bscroll, dirn);
  else
    screen.cur.row += dirn;

  clamp_it (screen.cur.row, 0, nrow - 1);
  selection_check (0);
}

/* ------------------------------------------------------------------------- */
/*
 * Erase part or whole of a line 
 * XTERM_SEQ: Clear line to right: ESC [ 0 K 
 * XTERM_SEQ: Clear line to left : ESC [ 1 K 
 * XTERM_SEQ: Clear whole line   : ESC [ 2 K 
 * extension: clear to right unless wrapped: ESC [ 3 K 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_erase_line (int mode){ 
rxvt_term.scr_erase_line =function( mode){ 
 var    col, num;  //         unsigned int col, num;   ###  c_keyword js_style_variables

  want_refresh = 1;
  ZERO_SCROLLBACK ();

  selection_check (1);

  line_t &line = ROW(screen.cur.row);

  line.touch ();
  line.is_longer (0);

  switch (mode){
      case 3:
        if (screen.flags & Screen_WrapNext)
          return;

        /* fall through */

      case 0:                     /* erase to end of line */
        col = screen.cur.col;
        num = ncol - col;
        min_it (line.l, col);

        if (ROWCOL_IN_ROW_AT_OR_AFTER (selection.beg, screen.cur)
            || ROWCOL_IN_ROW_AT_OR_AFTER (selection.end, screen.cur))
          CLEAR_SELECTION ();
        break;

      case 1:                     /* erase to beginning of line */
        col = 0;
        num = screen.cur.col + 1;

        if (ROWCOL_IN_ROW_AT_OR_BEFORE (selection.beg, screen.cur)
            || ROWCOL_IN_ROW_AT_OR_BEFORE (selection.end, screen.cur))
          CLEAR_SELECTION ();
        break;

      case 2:                     /* erase whole line */
        col = 0;
        num = ncol;
        line.l = 0;
        if (selection.beg.row <= screen.cur.row
            && selection.end.row >= screen.cur.row)
          CLEAR_SELECTION ();
        break;
      default:
        return;
    }

  scr_blank_line (line, col, num, rstyle);
}

/* ------------------------------------------------------------------------- */
/*
 * Erase part of whole of the screen 
 * XTERM_SEQ: Clear screen after cursor : ESC [ 0 J 
 * XTERM_SEQ: Clear screen before cursor: ESC [ 1 J 
 * XTERM_SEQ: Clear whole screen        : ESC [ 2 J 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_erase_screen (int mode){ 
rxvt_term.scr_erase_screen =function( mode){ 
 var    num;  //         int num;   ###  c_keyword  js_style_variables
 var   row;  //         int32_t row;   ###  c_keyword js_style_variables
 var  ren;  //         rend_t ren;   ###  c_keyword js_style_variables
 var  gcvalue;//   XGCValues gcvalue;  ###  js_style_variables

  want_refresh = 1;
  ZERO_SCROLLBACK ();

  switch (mode){
      case 0:                     /* erase to end of screen */
        selection_check (1);
        scr_erase_line (0);
        row = screen.cur.row + 1;    /* possible OOB */
        num = nrow - row;
        break;
      case 1:                     /* erase to beginning of screen */
        selection_check (3);
        scr_erase_line (1);
        row = 0;
        num = screen.cur.row;
        break;
      case 2:                     /* erase whole screen */
        selection_check (3);
        row = 0;
        num = nrow;
        break;
      default:
        return;
    }

  if (selection.op && current_screen == selection.screen
      && ((selection.beg.row >= row && selection.beg.row <= row + num)
          || (selection.end.row >= row
              && selection.end.row <= row + num)))
    CLEAR_SELECTION ();

  if (row >= nrow) /* Out Of Bounds */
    return;

  min_it (num, nrow - row);

  // TODO: the code below does not work when view_start != 0
  // the workaround is to disable the clear and use a normal refresh
  // when view_start != 0. mysterious.
  if (rstyle & (RS_RVid | RS_Uline))
    ren =  ~RS_None;  //           ren = (rend_t) ~RS_None;   ###  remove_casts 
  else if (GET_BASEBG (rstyle) == Color_bg){
      ren = DEFAULT_RSTYLE;

      if (mapped && !view_start)
        XClearArea (dpy, vt, 0,
                    Row2Pixel (row - view_start), width,  //                           Row2Pixel (row - view_start), (unsigned int)width,   ###  c_keyword c_cast
                    Height2Pixel (num), False);  //                           (unsigned int)Height2Pixel (num), False);   ###  c_keyword  c_cast
    }
  else{
      ren = rstyle & (RS_fgMask | RS_bgMask);

      if (mapped && !view_start){
          gcvalue.foreground = pix_colors[bgcolor_of (rstyle)];
          XChangeGC (dpy, gc, GCForeground, &gcvalue);
          XFillRectangle (dpy, vt, gc,
                          0, Row2Pixel (row - view_start),
                          width,  //                                 (unsigned int)width,   ###  c_keyword c_cast
                          Height2Pixel (num));  //                                 (unsigned int)Height2Pixel (num));   ###  c_keyword c_cast
          gcvalue.foreground = pix_colors[Color_fg];
          XChangeGC (dpy, gc, GCForeground, &gcvalue);
        }
    }

  for (; num--; row++){
      scr_blank_screen_mem (ROW(row), rstyle);

      if (!view_start)
        scr_blank_line (drawn_buf [row], 0, ncol, ren);
    }
}

#if !ENABLE_MINIMAL
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_erase_savelines (){ 
rxvt_term.scr_erase_savelines =function(){ 
  want_refresh = 1;
  ZERO_SCROLLBACK ();

  top_row = 0;
}
#endif

/* ------------------------------------------------------------------------- */
/*
 * Fill the screen with `E's 
 * XTERM_SEQ: Screen Alignment Test: ESC # 8 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_E (){ 
rxvt_term.scr_E =function(){ 
 var    fs;  //         rend_t fs;   ###  c_keyword js_style_variables

  want_refresh = 1;
  ZERO_SCROLLBACK ();

  num_scr_allow = 0;
  selection_check (3);

  fs = SET_FONT (rstyle, FONTSET (rstyle)->find_font ('E'));
 for (var row = nrow; row--; ){  //         for (int row = nrow; row--; ){   ###  c_keyword 
     var line = ROW(row); //       line_t &line = ROW(row); ### c_memory_ref js_style_variables FIXME

      fill_text (line.t, 'E', ncol);
      var r1 = line.r, r1_i =0;  //             rend_t *r1 = line.r;   ###  c_keyword possible_pointer js_style_variables, pointer_fix

      for (var j = ncol; j--; )  //             for (int j = ncol; j--; )   ###  c_keyword 
          line.r[r1_i++] = fs;  //               *r1++ = fs;   ###  possible_pointer pointer_fix

      line.is_longer (0);
      line.touch (ncol);
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Insert/Delete <count> lines 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_insdel_lines (int count, int insdel){ 
rxvt_term.scr_insdel_lines =function( count,  insdel){ 
    var end;  //         int end;   ###  c_keyword js_style_variables

  ZERO_SCROLLBACK ();

  selection_check (1);

  if (screen.cur.row > screen.bscroll)
    return;

  end = screen.bscroll - screen.cur.row + 1;
  if (count > end){
      if (insdel == DELETE)
        return;
      else if (insdel == INSERT)
        count = end;
    }

  scr_do_wrap ();

//CMNT: possible_pointer ^|         scr_scroll_text (screen.cur.row, screen.bscroll, insdel * count); 
    scr_scroll_text (screen.cur.row, screen.bscroll, count);  //FIXME why do we create a pointer just to send to this function ??
}

/* ------------------------------------------------------------------------- */
/*
 * Insert/Delete <count> characters from the current position 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_insdel_chars (int count, int insdel){ 
rxvt_term.scr_insdel_chars =function( count,  insdel){ 
  want_refresh = 1;
  ZERO_SCROLLBACK ();

  if (count <= 0)
    return;

  scr_do_wrap ();

  selection_check (1);
  min_it (count, ncol - screen.cur.col);

  var row= screen.cur.row;   //         int row = screen.cur.row;   ###  js_style_variables 

    line = &ROW(row);  //         line_t *line = &ROW(row);   ###  possible_pointer  FIXME

  line->touch ();
  line->is_longer (0);

  // nuke wide spanning the start
  if (line->t[screen.cur.col] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|           scr_kill_char (*line, screen.cur.col); 
    scr_kill_char ( line, screen.cur.col);

  switch (insdel){
      case INSERT:
        line->l = min (line->l + count, ncol);

        if (line->t[screen.cur.col] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col); 
          scr_kill_char ( l ine, screen.cur.col);

         for (var col = ncol - 1; (col - count) >= screen.cur.col; col--){  //               for (int col = ncol - 1; (col - count) >= screen.cur.col; col--){   ### js_style_variables  c_keyword 
            line->t[col] = line->t[col - count];
            line->r[col] = line->r[col - count];
          }

        if (selection.op && current_screen == selection.screen
            && ROWCOL_IN_ROW_AT_OR_AFTER (selection.beg, screen.cur)){
            if (selection.end.row != screen.cur.row
                || (selection.end.col + count >= ncol))
              CLEAR_SELECTION ();
            else{
                /* shift selection */
                selection.beg.col  += count;
                selection.mark.col += count; /* XXX: yes? */
                selection.end.col  += count;
              }
          }

//CMNT: possible_pointer ^|               scr_blank_line (*line, screen.cur.col, count, rstyle); 
        scr_blank_line ( line, screen.cur.col, count, rstyle);
        break;

      case ERASE:
        screen.cur.col += count;     /* don't worry if > ncol */
        selection_check (1);
        screen.cur.col -= count;

        // nuke wide char after the end 
        if (screen.cur.col + count < ncol && line->t[screen.cur.col + count] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col + count); 
          scr_kill_char ( line, screen.cur.col + count);

//CMNT: possible_pointer ^|               scr_blank_line (*line, screen.cur.col, count, rstyle); 
        scr_blank_line ( line, screen.cur.col, count, rstyle);
        break;

      case DELETE:
        line->l = max (line->l - count, 0);

        // nuke wide char spanning the end 
        if (screen.cur.col + count < ncol && line->t[screen.cur.col + count] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col + count); 
          scr_kill_char ( line, screen.cur.col + count);

         for (var col = screen.cur.col; (col + count) < ncol; col++){  //               for (int col = screen.cur.col; (col + count) < ncol; col++){   ### js_style_variables  c_keyword 
            line->t[col] = line->t[col + count];
            line->r[col] = line->r[col + count];
          }

//CMNT: possible_pointer ^|               scr_blank_line (*line, ncol - count, count, rstyle); 
        scr_blank_line ( l ine, ncol - count, count, rstyle);

        if (selection.op && current_screen == selection.screen
            && ROWCOL_IN_ROW_AT_OR_AFTER (selection.beg, screen.cur)){
            if (selection.end.row != screen.cur.row
                || (screen.cur.col >= selection.beg.col - count)
                || selection.end.col >= ncol)
              CLEAR_SELECTION ();
            else{
                /* shift selection */
                selection.beg.col  -= count;
                selection.mark.col -= count; /* XXX: yes? */
                selection.end.col  -= count;
              }
          }

        break;
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Set the scrolling region 
 * XTERM_SEQ: Set region <top> - <bot> inclusive: ESC [ <top> ; <bot> r 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_scroll_region (int top, int bot){ 
rxvt_term.scr_scroll_region =function( top,  bot){ 
  max_it (top, 0);
  min_it (bot, nrow - 1);

  if (top > bot)
    return;

  screen.tscroll = top;
  screen.bscroll = bot;
  scr_gotorc (0, 0, 0);
}

/* ------------------------------------------------------------------------- */
/*
 * Make the cursor visible/invisible 
 * XTERM_SEQ: Make cursor visible  : ESC [ ? 25 h 
 * XTERM_SEQ: Make cursor invisible: ESC [ ? 25 l 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_cursor_visible (int mode){ 
rxvt_term.scr_cursor_visible =function( mode){ 
  want_refresh = 1;

  if (mode)
    screen.flags |= Screen_VisibleCursor;
  else
    screen.flags &= ~Screen_VisibleCursor;
}

/* ------------------------------------------------------------------------- */
/*
 * Set/unset automatic wrapping 
 * XTERM_SEQ: Set Wraparound  : ESC [ ? 7 h 
 * XTERM_SEQ: Unset Wraparound: ESC [ ? 7 l 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_autowrap (int mode){ 
rxvt_term.scr_autowrap =function( mode){ 
  if (mode)
    screen.flags |= Screen_Autowrap;
  else
    screen.flags &= ~(Screen_Autowrap | Screen_WrapNext);
}

/* ------------------------------------------------------------------------- */
/*
 * Set/unset margin origin mode 
 * Absolute mode: line numbers are counted relative to top margin of screen 
 *      and the cursor can be moved outside the scrolling region. 
 * Relative mode: line numbers are relative to top margin of scrolling region 
 *      and the cursor cannot be moved outside. 
 * XTERM_SEQ: Set Absolute: ESC [ ? 6 h 
 * XTERM_SEQ: Set Relative: ESC [ ? 6 l 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_relative_origin (int mode){ 
rxvt_term.scr_relative_origin =function( mode){ 
  if (mode)
    screen.flags |= Screen_Relative;
  else
    screen.flags &= ~Screen_Relative;

  scr_gotorc (0, 0, 0);
}

/* ------------------------------------------------------------------------- */
/*
 * Set insert/replace mode 
 * XTERM_SEQ: Set Insert mode : ESC [ ? 4 h 
 * XTERM_SEQ: Set Replace mode: ESC [ ? 4 l 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_insert_mode (int mode){ 
rxvt_term.scr_insert_mode =function( mode){ 
  if (mode)
    screen.flags |= Screen_Insert;
  else
    screen.flags &= ~Screen_Insert;
}

/* ------------------------------------------------------------------------- */
/*
 * Set/Unset tabs 
 * XTERM_SEQ: Set tab at current column  : ESC H 
 * XTERM_SEQ: Clear tab at current column: ESC [ 0 g 
 * XTERM_SEQ: Clear all tabs             : ESC [ 3 g 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_set_tab (int mode){ 
rxvt_term.scr_set_tab =function( mode){ 
  if (mode < 0)
    memset (tabs, 0, ncol);
  else if (screen.cur.col < ncol)
      tabs [screen.cur.col] = !!mode; //FIXME what does !! mean?
}

/* ------------------------------------------------------------------------- */
/*
 * Set reverse/normal video 
 * XTERM_SEQ: Reverse video: ESC [ ? 5 h 
 * XTERM_SEQ: Normal video : ESC [ ? 5 l 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_rvideo_mode (bool on){ 
rxvt_term.scr_rvideo_mode =function(on){ 
  rvideo_mode = on;

#ifndef NO_BELL
  on ^= rvideo_bell;
#endif

  if (rvideo_state != on){
      rvideo_state = on;

      ::swap (pix_colors[Color_fg], pix_colors[Color_bg]);
#ifdef HAVE_BG_PIXMAP
      if (bgPixmap.pixmap == None)
#endif
          XSetWindowBackground (dpy, vt, pix_colors[Color_bg]);

      XGCValues gcvalue;
      gcvalue.foreground = pix_colors[Color_fg];
      gcvalue.background = pix_colors[Color_bg];
      XChangeGC (dpy, gc, GCBackground | GCForeground, &gcvalue);

      scr_clear ();
      scr_touch (true);
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Report current cursor position 
 * XTERM_SEQ: Report position: ESC [ 6 n 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_report_position (){ 
rxvt_term.scr_report_position =function(){ 
  tt_printf ("\033[%d;%dR", screen.cur.row + 1, screen.cur.col + 1); 
}

/* ------------------------------------------------------------------------- *
 *                                  FONTS                                    * 
 * ------------------------------------------------------------------------- */ 

/*
 * Set font style 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::set_font_style (){ 
rxvt_term.set_font_style =function(){ 
#if 0
  switch (charsets [screen.charset]){ 
      case '0':                   /* DEC Special Character & Line Drawing Set */
        break;
      case 'A':                   /* United Kingdom (UK) */
        break;
      case 'B':                   /* United States (USASCII) */
        break;
  case '<':                   /* Multinational character set */ 
        break;
  case '5':                   /* Finnish character set */ 
        break;
  case 'C':                   /* Finnish character set */ 
        break;
  case 'K':                   /* German character set */ 
        break;
    }
#endif
}

/* ------------------------------------------------------------------------- */
/*
 * Choose a font 
 * XTERM_SEQ: Invoke G0 character set: CTRL-O 
 * XTERM_SEQ: Invoke G1 character set: CTRL-N 
 * XTERM_SEQ: Invoke G2 character set: ESC N 
 * XTERM_SEQ: Invoke G3 character set: ESC O 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_charset_choose (int set){ 
rxvt_term.scr_charset_choose =function( set){ 
  screen.charset = set; 
  set_font_style ();
}

/* ------------------------------------------------------------------------- */
/*
 * Set a font 
 * XTERM_SEQ: Set G0 character set: ESC ( <C> 
 * XTERM_SEQ: Set G1 character set: ESC ) <C> 
 * XTERM_SEQ: Set G2 character set: ESC * <C> 
 * XTERM_SEQ: Set G3 character set: ESC + <C> 
 * See set_font_style for possible values for <C> 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_charset_set (int set, unsigned int ch){ 
rxvt_term.scr_charset_set =function( set,   ch){ 
   charsets[set] = ch;  //         charsets[set] = (unsigned char)ch;   ###  c_keyword  c_cast
  set_font_style ();
}


/* ------------------------------------------------------------------------- *
 *                        MAJOR SCREEN MANIPULATION                          * 
 * ------------------------------------------------------------------------- */ 

/*
 * refresh matching text. 
 */
//FIXED: js_style_functions c_keyword ^|       bool rxvt_term::scr_refresh_rend (rend_t mask, rend_t value){ 
rxvt_term.scr_refresh_rend =function( mask,  value){ 
  var found = false;

  for (var i = 0; i < nrow; i++){  //         for (int i = 0; i < nrow; i++){   ### js_style_variables  c_keyword 
        //             rend_t *drp = drawn_buf[i].r;   ###   c_keyword possible_pointer 

       for ( var col = 0; col < ncol; col++, drp++)  //             for (int col = 0; col < ncol; col++, drp++)   ### js_style_variables  c_keyword 
           if (( drawn_buf[i].r & mask) == value){  //               if ((*drp & mask) == value){   ###  possible_pointer 
            found = true;
            drawn_buf[i].r  = ~value;  //                   *drp = ~value;   ###  possible_pointer 
          }
    }

  return found;
}

/*
 * Refresh an area 
 */
//CMNT: c_enum  ^|   enum {
enum {
  PART_BEG = 0,
  PART_END,
  RC_COUNT
};

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_expose (int x, int y, int ewidth, int eheight, bool refresh){ 
rxvt_term.scr_expose =function( x,  y,  ewidth,  eheight, bool refresh){ 
    var i;  //         int i;   ### js_style_variables  c_keyword 
  row_col_t rc[RC_COUNT];

  if (!drawn_buf)  /* sanity check */
    return;

#ifndef NO_SLOW_LINK_SUPPORT
  if (refresh_type == FAST_REFRESH && !display.is_local){
      y = 0;
      eheight = height;
    }
#endif

  /* round down */
  rc[PART_BEG].col = Pixel2Col (x);
  rc[PART_BEG].row = Pixel2Row (y);
  /* round up */
  rc[PART_END].col = Pixel2Width (x + ewidth  + fwidth  - 1);
  rc[PART_END].row = Pixel2Row   (y + eheight + fheight - 1);

  /* sanity checks */
  for (i = PART_BEG; i < RC_COUNT; i++){
      min_it (rc[i].col, ncol - 1);
      min_it (rc[i].row, nrow - 1);
    }
// TODO: this line somehow causes segfault if scr_expose() is called just after resize
  for (i = rc[PART_BEG].row; i <= rc[PART_END].row; i++)
    fill_text (&drawn_buf[i].t[rc[PART_BEG].col], 0, rc[PART_END].col - rc[PART_BEG].col + 1);

  num_scr_allow = 0;

  if (refresh)
    scr_refresh ();
}

/* ------------------------------------------------------------------------- */
/*
 * Refresh the entire screen 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_touch (bool refresh){ 
rxvt_term.scr_touch =function(refresh){ 
  scr_expose (0, 0, width, height, refresh);
}

/* ------------------------------------------------------------------------- */
/*
 * Move the display so that the line represented by scrollbar value Y is at 
 * the top of the screen 
 */
//fixed: js_style_functions c_keyword ^|       void rxvt_term::scr_move_to (int y, int len){ 
rxvt_term.scr_move_to =function( y,  len){ 
    scr_changeview ((top_row - nrow) * (len - y) / len + (nrow - 1)); 
}

/* ------------------------------------------------------------------------- */
/*
 * Page the screen up/down nlines 
 * direction should be UP or DN 
 */
//CMNT: js_style_functions c_keyword ^|       bool rxvt_term::scr_page (enum page_dirn direction, int nlines){ 
rxvt_term.scr_page =function( direction,  nlines){ 
    var new_view_start=   //         int new_view_start =   ###  js_style_variables 
    direction == UP ? view_start - nlines  //FIXME enum
                    : view_start + nlines;

  return scr_changeview (new_view_start);
}

//FIXED: js_style_functions c_keyword ^|       bool rxvt_term::scr_changeview (int new_view_start){ 
rxvt_term.scr_changeview =function( new_view_start){ 
  clamp_it (new_view_start, top_row, 0);

  if (new_view_start == view_start)
    return false;

  num_scr += new_view_start - view_start;
  view_start = new_view_start;
  want_refresh = 1;

  HOOK_INVOKE ((this, HOOK_VIEW_CHANGE, DT_INT, view_start, DT_END));

  return true;
}

#ifndef NO_BELL
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::bell_cb (ev::timer &w, int revents){ 
rxvt_term.bell_cb =function(ev::timer &w,  revents){ 
  rvideo_bell = false;
  scr_rvideo_mode (rvideo_mode);
  refresh_check ();
}
#endif

/* ------------------------------------------------------------------------- */
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_bell (){ 
rxvt_term.scr_bell =function(){ 
#ifndef NO_BELL

# ifndef NO_MAPALERT
#  ifdef MAPALERT_OPTION
  if (option (Opt_mapAlert))
#  endif
    XMapWindow (dpy, parent[0]);
# endif

# if ENABLE_FRILLS
  if (option (Opt_urgentOnBell))
    set_urgency (1);
# endif

  if (option (Opt_visualBell)){
      rvideo_bell = true;
      scr_rvideo_mode (rvideo_mode);
      flush ();

      bell_ev.start (VISUAL_BELL_DURATION);
    }
  else
    XBell (dpy, 0);
#endif
}

/* ------------------------------------------------------------------------- */
/* ARGSUSED */ //FIXME what does argused mean?
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_printscreen (int fullhist){ 
rxvt_term.scr_printscreen =function( fullhist){ 

}

/* ------------------------------------------------------------------------- */
/*
 * Refresh the screen 
 * drawn_text/drawn_rend contain the screen information before the update. 
 * screen.text/screen.rend contain what the screen will change to. 
 */
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_refresh (){ 
rxvt_term.scr_refresh =function(){ 
  var  col, row ;//         int16_t col, row,   /* column/row we're processing               */   ### js_style_variables  c_keyword 
  var ocrow;      /* old cursor row                            */ 
  var i;      //         int i;              /* tmp                                       */   ### js_style_variables  c_keyword 
#ifndef NO_CURSORCOLOR
  var cc1;         /* store colours at cursor position (s)      */  //         rend_t cc1;         /* store colours at cursor position (s)      */   ### js_style_variables  c_keyword 
#endif
//CMNT: c_keyword possible_pointer ^|
         rend_t *crp;        // cursor rendition pointer 
    c rp;        // cursor rendition poer
  var ccol1;  //         rend_t ccol1,  /* Cursor colour       */   ### js_style_variables  c_keyword 
  var ccol2;  /* Cursor colour2      */

  want_refresh = 0;        /* screen is current */

  if (refresh_type == NO_REFRESH || !mapped)
    return;

  /*
   * A: set up vars 
   */
  refresh_count = 0;

  old_screen_flags = screen.flags;  //         unsigned int old_screen_flags = screen.flags;   ###  c_keyword 
  var have_bg= 0;   //         char have_bg = 0;   ###  js_style_variables 
#ifdef HAVE_BG_PIXMAP
  have_bg = bgPixmap.pixmap != None;
#endif
  ocrow = oldcursor.row; /* is there an old outline cursor on screen? */

  /*
   * B: reverse any characters which are selected 
   */
  scr_reverse_selection ();

  HOOK_INVOKE ((this, HOOK_REFRESH_BEGIN, DT_END));
#if ENABLE_OVERLAY
  scr_swap_overlay ();
#endif

  var showcursor= screen.flags & Screen_VisibleCursor;   //         char showcursor = screen.flags & Screen_VisibleCursor;   ###  js_style_variables 

  /*
   * C: set the cursor character (s) 
   */
  {
    setoldcursor;  //           unsigned char setoldcursor;   ###  c_keyword 

#ifdef CURSOR_BLINK
    if (hidden_cursor)
      showcursor = 0;
#endif

    if (showcursor){
      var col= screen.cur.col;   //               int col = screen.cur.col;   ###  js_style_variables 

        while (col && ROW(screen.cur.row).t[col] == NOCHAR)
          col--;

        crp = &ROW(screen.cur.row).r[col];

#ifndef NO_CURSORCOLOR
//CMNT: possible_pointer ^|               cc1 = *crp & (RS_fgMask | RS_bgMask); 
        cc1 =  c rp & (RS_fgMask | RS_bgMask);
        if (ISSET_PIXCOLOR (Color_cursor))
          ccol1 = Color_cursor;
        else
#endif
#ifdef CURSOR_COLOR_IS_RENDITION_COLOR
          ccol1 = fgcolor_of (rstyle);
#else
          ccol1 = Color_fg;
#endif

#ifndef NO_CURSORCOLOR
        if (ISSET_PIXCOLOR (Color_cursor2))
          ccol2 = Color_cursor2;
        else
#endif
#ifdef CURSOR_COLOR_IS_RENDITION_COLOR
          ccol2 = bgcolor_of (rstyle);
#else
          ccol2 = Color_bg;
#endif

        if (showcursor && focus){
            if (option (Opt_cursorUnderline))
//CMNT: possible_pointer ^|                     *crp ^= RS_Uline; 
               c rp ^= RS_Uline;
            else{
//CMNT: possible_pointer ^|                       *crp ^= RS_RVid; 
                 c rp ^= RS_RVid;
//CMNT: possible_pointer ^|                       *crp = SET_FGCOLOR (*crp, ccol1); 
                 c rp = SET_FGCOLOR ( c rp, ccol1);
//CMNT: possible_pointer ^|                       *crp = SET_BGCOLOR (*crp, ccol2); 
                 c rp = SET_BGCOLOR ( c rp, ccol2);
              }
          }
      }

    /* make sure no outline cursor is left around */
    setoldcursor = 0;
    if (ocrow != -1){
        if (screen.cur.row - view_start != ocrow
            || screen.cur.col != oldcursor.col){
            if (ocrow < nrow
                && oldcursor.col < ncol)
              drawn_buf[ocrow].r[oldcursor.col] ^= (RS_RVid | RS_Uline);

            if (focus || !showcursor)
              oldcursor.row = -1;
            else
              setoldcursor = 1;
          }
      }
    else if (!focus)
      setoldcursor = 1;

    if (setoldcursor){
        if (screen.cur.row - view_start >= nrow)
          oldcursor.row = -1;
        else{
            oldcursor.row = screen.cur.row - view_start;
            oldcursor.col = screen.cur.col;
          }
      }
  }

#ifndef NO_SLOW_LINK_SUPPORT
  /*
   * D: CopyArea pass - very useful for slower links 
   *    This has been deliberately kept simple. 
   */
  if (!display->is_local
      && refresh_type == FAST_REFRESH && num_scr_allow && num_scr
      && abs (num_scr) < nrow && !have_bg){
    var nits;  //             int16_t nits;   ### js_style_variables  c_keyword 
    var i= num_scr;   //             int i = num_scr;   ###  js_style_variables 
    var j;  //             int j;   ### js_style_variables  c_keyword 
    var len, wlen;  //             int len, wlen;   ### js_style_variables  c_keyword 
//CMNT: c_keyword ^|             dLocal (int, num_scr); FIXME macro
      dLocal (, num_scr);

      j = nrow;
      wlen = len = -1;
      row = i > 0 ? 0 : j - 1;

      for (; j-- >= 0; row += (i > 0 ? 1 : -1)){
          if (row + i >= 0 && row + i < nrow && row + i != ocrow){
              line_t s  = ROW(view_start + row);
              line_t d  = drawn_buf[row];
              line_t d2 = drawn_buf[row + i];

              for (nits = 0, col = ncol; col--; )
                if (s.t[col] != d2.t[col] || s.r[col] != d2.r[col])
                  nits--;
                else if (s.t[col] != d.t[col] || s.r[col] != d.r[col])
                  nits++;

              if (nits > 8) /* XXX: arbitrary choice */
                {
                  for (col = ncol; col--; ){
//CMNT: possible_pointer ^|                             *d.t++ = *d2.t++; 
                       d .t++ =  d 2.t++;
//CMNT: possible_pointer ^|                             *d.r++ = *d2.r++; 
                       d .r++ =  d 2.r++;
                    }

                  if (len == -1)
                    len = row;

                  wlen = row;
                  continue;
                }
            }

          if (len >= 0){
              /* also comes here at end if needed because of >= above */
              if (wlen < len)
                ::swap (wlen, len);

              XGCValues gcv;

              gcv.graphics_exposures = 1; XChangeGC (dpy, gc, GCGraphicsExposures, &gcv);
              XCopyArea (dpy, vt, vt,
                         gc, 0, Row2Pixel (len + i),
                         this.width,  //                                (unsigned int)this->width,   ###  c_keyword c_cast
                         Height2Pixel (wlen - len + 1),  //                                (unsigned int)Height2Pixel (wlen - len + 1),   ###  c_keyword c_cast
                         0, Row2Pixel (len));
              gcv.graphics_exposures = 0; XChangeGC (dpy, gc, GCGraphicsExposures, &gcv);

              len = -1;
            }
        }
    }
#endif

  /*
   * E: main pass across every character 
   */
  for (row = 0; row < nrow; row++){
//CMNT: possible_pointer ^|             text_t *stp = ROW(view_start + row).t; 
      text_t  s tp = ROW(view_start + row).t;
//CMNT: c_keyword possible_pointer ^|             rend_t *srp = ROW(view_start + row).r; 
        s rp = ROW(view_start + row).r;
//CMNT: possible_pointer ^|             text_t *dtp = drawn_buf[row].t; 
      text_t  d tp = drawn_buf[row].t;
//CMNT: c_keyword possible_pointer ^|             rend_t *drp = drawn_buf[row].r; 
        d rp = drawn_buf[row].r;

      /*
       * E2: OK, now the real pass 
       */
//CMNT: js_style_variables remove_casts ^|             int ypixel = (int)Row2Pixel (row); 
 var ypixel= Row2Pixel (row); 

      for (col = 0; col < ncol; col++){
          /* compare new text with old - if exactly the same then continue */
        if (stp[col] == dtp[col]    /* Must match characters to skip. */ 
              && (RS_SAME (srp[col], drp[col])    /* Either rendition the same or   */
                  || (stp[col] == ' ' /* space w/ no background change  */
                      && GET_BGATTR (srp[col]) == GET_BGATTR (drp[col]))))
            continue;

        // redraw one or more characters 
        // seek to the beginning of wide characters 
          while (expect_false (stp[col] == NOCHAR && col > 0))
            --col;

          var rend= srp[col];      //      rend_t rend = srp[col];     /* screen rendition (target rendtion) */   ###  js_style_variables 
//CMNT: possible_pointer ^|                 text_t *text = stp + col; 
          text_t  t ext = stp + col;
          var count= 1;   //                 int count = 1;   ###  js_style_variables 

          dtp[col] = stp[col];
          drp[col] = rend;

          var xpixel= Col2Pixel (col);   //                 int xpixel = Col2Pixel (col);   ###  js_style_variables 

          for (i = 0; ++col < ncol; ){
              if (stp[col] == NOCHAR){
                  dtp[col] = stp[col];
                  drp[col] = rend;
                  count++;
                  i++;

                  continue;
                }

              if (!RS_SAME (rend, srp[col]))
                break;

              count++;

              if (stp[col] != dtp[col]
                  || !RS_SAME (srp[col], drp[col])){
                  if (have_bg && (i++ > count / 2))
                    break;

                  dtp[col] = stp[col];
                  drp[col] = rend;
                  i = 0;
                }
              else if (have_bg || (stp[col] != ' ' && ++i >= 16))
                break;
            }

          col--;      /* went one too far.  move back */
          count -= i; /* dump any matching trailing chars */ 

          // sometimes we optimize away the trailing NOCHAR's, add them back
          while (expect_false (i && text[count] == NOCHAR))
            count++, i--;

          /*
           * Determine the attributes for the string 
           */
 var fore= fgcolor_of (rend);    //                 int fore = fgcolor_of (rend); // desired foreground   ###  js_style_variables 
 var back= bgcolor_of (rend);   //                 int back = bgcolor_of (rend); // desired background   ###  js_style_variables 

          // only do special processing if any attributes are set, which is unlikely
          if (expect_false (rend & (RS_Bold | RS_Italic | RS_Uline | RS_RVid | RS_Blink | RS_Careful))){
              bool invert = rend & RS_RVid;

#ifndef NO_BOLD_UNDERLINE_REVERSE
              if (rend & RS_Bold && fore == Color_fg){
                  if (ISSET_PIXCOLOR (Color_BD))
                    fore = Color_BD;
# if !ENABLE_STYLES
                  else
                    invert = !invert;
# endif
                }

              if (rend & RS_Italic && fore == Color_fg){
                  if (ISSET_PIXCOLOR (Color_IT))
                    fore = Color_IT;
# if !ENABLE_STYLES
                  else
                    invert = !invert;
# endif
                }

              if (rend & RS_Uline && fore == Color_fg && ISSET_PIXCOLOR (Color_UL))
                fore = Color_UL;
#endif

              if (invert){
#ifdef OPTION_HC
                  if ((showcursor && row == screen.cur.row && text - stp == screen.cur.col)
                      || !ISSET_PIXCOLOR (Color_HC))
#endif
                    /* invert the column if no highlightColor is set or it is the
                     * current cursor column */ 
                    ::swap (fore, back);
#ifdef OPTION_HC
                  else if (ISSET_PIXCOLOR (Color_HC))
                    back = Color_HC;
#endif

#ifndef NO_BOLD_UNDERLINE_REVERSE
# ifndef OPTION_HC
                  if (ISSET_PIXCOLOR (Color_RV))
                    back = Color_RV;
# endif
                  if (fore == back){
                      fore = Color_bg;
                      back = Color_fg;
                    }
#endif
                }

#ifdef TEXT_BLINK
              if (rend & RS_Blink && (back == Color_bg || fore == Color_bg)){
                  if (!text_blink_ev.is_active ()){
                      text_blink_ev.again ();
                      hidden_text = 0;
                    }
                  else if (hidden_text)
                    fore = back;
                }
#endif

#if ENABLE_STYLES
              // NOTE shouldn't need this,  html handles character rendering
              // "careful" (too wide) character handling 
              // include previous careful character(s) if possible, looks nicer (best effort...) 
              while (text > stp
                  && srp[text - stp - 1] & RS_Careful
                  && RS_SAME (rend, srp[text - stp - 1]))
                text--, count++, xpixel -= fwidth;

              // force redraw after "careful" characters to avoid pixel droppings 
               for ( var i = 0; srp[col + i] & RS_Careful && col + i < ncol - 1; i++)  //                     for (int i = 0; srp[col + i] & RS_Careful && col + i < ncol - 1; i++)   ### js_style_variables  c_keyword 
                drp[col + i + 1] = srp[col + i + 1] ^ RS_redraw;

              // force redraw before "careful" characters to avoid pixel droppings 
               for (var i = 0; srp[text - stp - i] & RS_Careful && text - i > stp; i++)  //                     for (int i = 0; srp[text - stp - i] & RS_Careful && text - i > stp; i++)   ###  c_keyword 
                drp[text - stp - i - 1] = srp[text - stp - i - 1] ^ RS_redraw;
#endif
            }

          /*
           * Actually do the drawing of the string here 
           */
//CMNT: possible_pointer ^|                 rxvt_font *font = (*fontset[GET_STYLE (rend)])[GET_FONT (rend)]; 
          rxvt_font  f ont = ( f ontset[GET_STYLE (rend)])[GET_FONT (rend)];

          if (expect_true (have_bg && back == Color_bg)){
//CMNT: c_keyword ^|                     // this is very ugly, maybe push it into ->draw? 
              // this is very ugly, maybe push it o ->draw?

              for (i = 0; i < count; i++) /* don't draw empty strings */
                if (text[i] != ' '){
//CMNT: possible_pointer ^|                           font->draw (*drawable, xpixel, ypixel, text, count, fore, Color_transparent); 
                    font->draw ( d rawable, xpixel, ypixel, text, count, fore, Color_transparent);
                    goto did_clear;
                  }

              CLEAR_CHARS (xpixel, ypixel, count);
              did_clear: ;
            }
          else
//CMNT: possible_pointer ^|                   font->draw (*drawable, xpixel, ypixel, text, count, fore, back); 
            font->draw ( d rawable, xpixel, ypixel, text, count, fore, back);

          if (expect_false (rend & RS_Uline && font->descent > 1 && fore != back)){
#if ENABLE_FRILLS
              if (ISSET_PIXCOLOR (Color_underline))
                XSetForeground (dpy, gc, pix_colors[Color_underline]);
              else
#endif
                XSetForeground (dpy, gc, pix_colors[fore]);

              XDrawLine (dpy, vt, gc,
                         xpixel, ypixel + font->ascent + 1,
                         xpixel + Width2Pixel (count) - 1, ypixel + font->ascent + 1);
            }
        }                     /* for (col....) */
    }                         /* for (row....) */

  /*
//CMNT: possible_pointer ^|          * G: cleanup cursor and display outline cursor if necessary 
      G: cleanup cursor and display outline cursor if necessary
   */
  if (showcursor){
      if (focus){
          if (option (Opt_cursorUnderline))
//CMNT: possible_pointer ^|                   *crp ^= RS_Uline; 
             c rp ^= RS_Uline;
          else{
//CMNT: possible_pointer ^|                     *crp ^= RS_RVid; 
               c rp ^= RS_RVid;
#ifndef NO_CURSORCOLOR
//CMNT: possible_pointer ^|                     *crp = (*crp & ~ (RS_fgMask | RS_bgMask)) | cc1; 
               c rp = ( c rp & ~ (RS_fgMask | RS_bgMask)) | cc1;
#endif
            }
        }
      else if (oldcursor.row >= 0){
        var cursorwidth= 1;   //                 int cursorwidth = 1;   ###  js_style_variables 
        var col= oldcursor.col;   //                 int col = oldcursor.col;   ###  js_style_variables 

          while (col && ROW(screen.cur.row).t[col] == NOCHAR)
            col--;

          while (col + cursorwidth < ncol
                 && drawn_buf[oldcursor.row].t[col + cursorwidth] == NOCHAR)
            cursorwidth++;

#ifndef NO_CURSORCOLOR
          if (ISSET_PIXCOLOR (Color_cursor))
            XSetForeground (dpy, gc, pix_colors[Color_cursor]);
          else
#endif
            XSetForeground (dpy, gc, pix_colors[ccol1]);

          XDrawRectangle (dpy, vt, gc,
                          Col2Pixel (col),
                          Row2Pixel (oldcursor.row),
                          (Width2Pixel (cursorwidth) - 1),  //                                 (unsigned int) (Width2Pixel (cursorwidth) - 1),   ###  c_keyword c_cast
                          (Height2Pixel (1) - lineSpace - 1));  //                                 (unsigned int) (Height2Pixel (1) - lineSpace - 1));   ###  c_keyword c_cast
        }
    }

  /*
   * H: cleanup selection 
   */
#if ENABLE_OVERLAY
  scr_swap_overlay ();
#endif
  HOOK_INVOKE ((this, HOOK_REFRESH_END, DT_END));

  scr_reverse_selection ();

  screen.flags = old_screen_flags;
  num_scr = 0;
  num_scr_allow = 1;
}

//FIXME overloaded_function
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_remap_chars (line_t &l){ 
rxvt_term.scr_remap_chars =function(line_t &l){ 
  if (!l.t)
    return;

  l.touch (); // maybe a bit of an overkill, but it's not performance-relevant

   for (var i = ncol; i--; )  //         for (int i = ncol; i--; )   ### js_style_variables  c_keyword 
    l.r[i] = SET_FONT (l.r[i], FONTSET (l.r[i])->find_font (l.t[i]));
}

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_remap_chars (){ 
rxvt_term.scr_remap_chars =function(){ 
   for ( var  i = total_rows; i--; )  //         for (int i = total_rows; i--; )   ### js_style_variables  c_keyword 
    scr_remap_chars (row_buf [i]); 

   for (var i = nrow; i--; ){  //         for (int i = nrow; i--; ){   ### js_style_variables  c_keyword 
    scr_remap_chars (drawn_buf [i]); 
      scr_remap_chars (swap_buf [i]); 
    }
}

//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_recolour (){ 
rxvt_term.scr_recolour =function(){ 
#ifdef HAVE_BG_PIXMAP
  bgPixmap.apply ();
#else

  XSetWindowBackground (dpy, parent[0], pix_colors[Color_border]);
  XClearWindow (dpy, parent[0]);
  XSetWindowBackground (dpy, vt, pix_colors[Color_bg]);

  if (scrollBar.win){
     XSetWindowBackground (dpy, scrollBar.win, pix_colors[Color_border]);
     scrollBar.state = STATE_IDLE;
     scrollBar.show (0);
   }

#endif

  /* bgPixmap.apply () does not do the following : */
  scr_clear ();
  scr_touch (true);
  want_refresh = 1;
}

/* ------------------------------------------------------------------------- */
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_clear (bool really){ 
rxvt_term.scr_clear =function( really){ 
  if (!mapped)
    return;

  num_scr_allow = 0;
  want_refresh = 1;

  if (really)
    XClearWindow (dpy, vt);
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2){ 
rxvt_term.scr_xor_rect =function( beg_row,  beg_col,  end_row,  end_col,  rstyle1,  rstyle2){ 
  var view_end= view_start + nrow;   //         int view_end = view_start + nrow;   ###  js_style_variables 
  var row, col;  //         int row, col;   ### js_style_variables  c_keyword 

  for (row = max (beg_row, view_start); row <= min (end_row, view_end); row++){
//CMNT: possible_pointer ^|             text_t *stp = ROW(row).t; 
      text_t  s tp = ROW(row).t;
//CMNT: c_keyword possible_pointer ^|             rend_t *srp = ROW(row).r; 
        s rp = ROW(row).r;

      for (col = beg_col; col < end_col; col++)
        srp[col] ^= rstyle1;

      while (col-- > beg_col && (stp[col] == NOCHAR || unicode::is_space (stp[col])))  //FIXME C++ stuff
        srp[col] ^= rstyle2;

      if (++col < end_col)
        srp[col] ^= rstyle2;
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle){ 
rxvt_term.scr_xor_span =function( beg_row,  beg_col,  end_row,  end_col,  rstyle){ 
  var view_end= view_start + nrow;   //         int view_end = view_start + nrow;   ###  js_style_variables 
  var row, col;  //         int row, col;   ### js_style_variables  c_keyword 

  if (beg_row >= view_start){
      col = beg_col;
      row = beg_row;
    }
  else{
      col = 0;
      row = view_start;
    }

  for (; row < min (end_row, view_end); row++, col = 0)
//CMNT: c_keyword possible_pointer ^|           for (rend_t *srp = ROW(row).r; col < ncol; col++) 
    for (  s rp = ROW(row).r; col < ncol; col++)
      srp[col] ^= rstyle;

  if (row == end_row)
//CMNT: c_keyword possible_pointer ^|           for (rend_t *srp = ROW(row).r; col < end_col; col++) 
    for (  s rp = ROW(row).r; col < end_col; col++)
      srp[col] ^= rstyle;
}

/* ------------------------------------------------------------------------- */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_reverse_selection (){ 
rxvt_term.scr_reverse_selection =function(){ 
  if (selection.op
      && current_screen == selection.screen
      && selection.end.row >= view_start){
#if !ENABLE_MINIMAL
      if (selection.rect)
        scr_xor_rect (selection.beg.row, selection.beg.col,
                      selection.end.row, selection.end.col,
                      RS_RVid, RS_RVid | RS_Uline);
      else
#endif
        scr_xor_span (selection.beg.row, selection.beg.col,
                      selection.end.row, selection.end.col,
                      RS_RVid);
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Dump the whole scrollback and screen to the passed filedescriptor.  The 
 * invoking routine must close the fd. 
 * Paddy: I don't think I need this function right now, at some point it might be useful for debugging
 */
#if 0
//POSTPONED: js_style_functions c_keyword ^|       void rxvt_term::scr_dump (int fd){ 
/*
rxvt_term.scr_dump =function( fd){ 
//POSTPONED: c_keyword ^|         int             row, wrote; 
               row, wrote;
//POSTPONED: c_keyword ^|         unsigned int    width, towrite; 
       width, towrite;
//POSTPONED: c_keyword ^|         char            r1[] = "\n"; 
              r1[] = "\n";

  for (row = saveLines + top_row;
       row < saveLines + nrow - 1; row++){
      width = row_buf[row].l >= 0 ? row_buf[row].l
              : ncol;
      for (towrite = width; towrite; towrite -= wrote){
          wrote = write (fd, & (row_buf[row].t[width - towrite]),
                        towrite);
          if (wrote < 0)
              return;         // XXX: death, no report 
        }
      if (row_buf[row].l >= 0)
        if (write (fd, r1, 1) <= 0)
            return; //XXX: death, no report 
    }
}
*/
#endif

/* ------------------------------------------------------------------------- *
 *                           CHARACTER SELECTION                             * 
 * ------------------------------------------------------------------------- */ 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_check (int check_more){ 
/* Paste a selection direct to the command fd  */
//REMOVED: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::paste (char *data, unsigned int len){ 
/* Respond to a notification that a primary selection has been sent 
 * EXT: SelectionNotify 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_paste (Window win, Atom prop, bool delete_prop){ 

//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::incr_cb (ev::timer &w, int revents){ 

//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_property (Window win, Atom prop){ 

/* ------------------------------------------------------------------------- */
/*
 * Request the current selection: 
 * Order: > internal selection if available 
 *        > PRIMARY, SECONDARY, CLIPBOARD if ownership is claimed (+) 
 *        > CUT_BUFFER0 
 * (+) if ownership is claimed but property is empty, rxvt_selection_paste () 
 *     will auto fallback to CUT_BUFFER0 
 * EXT: button 2 release 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_request (Time tm, int selnum){ 

//REMOVED: js_style_functions c_keyword ^|       int rxvt_term::selection_request_other (Atom target, int selnum){ 

/* ------------------------------------------------------------------------- */
/*
 * Clear all selected text 
 * EXT: SelectionClear 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_clear (){ 

/* ------------------------------------------------------------------------- */
/*
 * Copy a selection into the cut buffer 
 * EXT: button 1 or 3 release 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_make (Time tm){ 

//REMOVED: js_style_functions ^|       bool rxvt_term::selection_grab (Time tm){ 

/* ------------------------------------------------------------------------- */
/*
 * Mark or select text based upon number of clicks: 1, 2, or 3 
 * EXT: button 1 press 
 */
//REMOVED js_style_functions void rxvt_term::selection_click (int clicks, int x, int y){ 

/* ------------------------------------------------------------------------- */
/*
 * Mark a selection at the specified col/row 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_start_colrow (int col, int row){ 

/* ------------------------------------------------------------------------- */
/*
 * Word select: select text for 2 clicks 
 * We now only find out the boundary in one direction 
 */

/* what do we want: spaces/tabs are delimiters or cutchars or non-cutchars */ 
//#define DELIMIT_TEXT(x)                                               \
//REMOVED: js_style_functions c_keyword ^|           (unicode::is_space (x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cutchars], (x))) 
//    (unicode.is_space =function(x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cuts], (x))) 
//#define DELIMIT_REND(x)        1

//REMOVED: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret){ 

/* ------------------------------------------------------------------------- */
/*
 * Extend the selection to the specified x/y pixel location 
 * EXT: button 3 press; button 1 or 3 drag 
 * flag == 0 ==> button 1 
 * flag == 1 ==> button 3 press 
 * flag == 2 ==> button 3 motion 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_extend (int x, int y, int flag){ 

/* ------------------------------------------------------------------------- */
/*
 * Extend the selection to the specified col/row 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange){ 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_remove_trailing_spaces (){ 

/* ------------------------------------------------------------------------- */
/*
 * Double click on button 3 when already selected 
 * EXT: button 3 double click 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_rotate (int x, int y){ 

/* ------------------------------------------------------------------------- */
/*
 * Respond to a request for our current selection 
 * EXT: SelectionRequest 
 */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::selection_send (const XSelectionRequestEvent &rq){ 

/* ------------------------------------------------------------------------- */
#ifdef USE_XIM
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::im_set_position (XPoint &pos){ 
#endif

#if ENABLE_OVERLAY
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_overlay_new (int x, int y, int w, int h){ 
rxvt_term.scr_overlay_new =function( x,  y,  w,  h){ 
  if (nrow < 1 || ncol < 1)
    return;

  want_refresh = 1;

  scr_overlay_off ();

  if (x < 0) x = ncol - w;
  if (y < 0) y = nrow - h;

  // make space for border
  w += 2; min_it (w, ncol);
  h += 2; min_it (h, nrow);

  x -= 1; clamp_it (x, 0, ncol - w);
  y -= 1; clamp_it (y, 0, nrow - h);

  ov.x = x; ov.y = y;
  ov.w = w; ov.h = h;

//CMNT: possible_pointer ^|         ov.text = new text_t *[h]; 
  ov.text = new text_t  [ h];
//CMNT: c_keyword possible_pointer ^|         ov.rend = new rend_t *[h]; 
  ov.rend = new   [ h];

  for (y = 0; y < h; y++){
//CMNT: possible_pointer ^|             text_t *tp = ov.text[y] = new text_t[w]; 
      text_t  t p = ov.text[y] = new text_t[w];
//CMNT: c_keyword possible_pointer ^|             rend_t *rp = ov.rend[y] = new rend_t[w]; 
        r p = ov.rend[y] = new [w];

      text_t t0, t1, t2;
//CMNT: js_style_variables ^|             rend_t r = OVERLAY_RSTYLE; 
 var r= OVERLAY_RSTYLE; 

      if (y == 0)
        t0 = 0x2554, t1 = 0x2550, t2 = 0x2557;
      else if (y < h - 1)
        t0 = 0x2551, t1 = 0x0020, t2 = 0x2551;
      else
        t0 = 0x255a, t1 = 0x2550, t2 = 0x255d;

//CMNT: possible_pointer ^|             *tp++ = t0; 
       t p++ = t0;
//CMNT: possible_pointer ^|             *rp++ = r; 
       r p++ = r;

      for (x = w - 2; x > 0; --x){
//CMNT: possible_pointer ^|                 *tp++ = t1; 
           t p++ = t1;
//CMNT: possible_pointer ^|                 *rp++ = r; 
           r p++ = r;
        }

//CMNT: possible_pointer ^|             *tp = t2; 
       t p = t2;
//CMNT: possible_pointer ^|             *rp = r; 
       r p = r;
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_overlay_off (){ 
rxvt_term.scr_overlay_off =function(){ 
  if (!ov.text)
    return;

  want_refresh = 1;

   for (var y = 0; y < ov.h; y++){  //         for (int y = 0; y < ov.h; y++){   ### js_style_variables  c_keyword 
      delete [] ov.text[y];
      delete [] ov.rend[y];
    }

  delete [] ov.text; ov.text = 0;
  delete [] ov.rend; ov.rend = 0;
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_overlay_set (int x, int y, text_t text, rend_t rend){ 
rxvt_term.scr_overlay_set =function( x,  y,  text,  rend){ 
  if (!ov.text || x >= ov.w - 2 || y >= ov.h - 2)
    return;

  x++, y++;

  ov.text[y][x] = text;
  ov.rend[y][x] = rend;
}

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::scr_overlay_set (int x, int y, const char *s){ 
rxvt_term.scr_overlay_set =function( x,  y,    s ){ 
//CMNT: possible_pointer ^|         while (*s) 
  while ( s )
//CMNT: possible_pointer ^|           scr_overlay_set (x++, y, *s++); 
    scr_overlay_set (x++, y,  s ++);
}

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::scr_overlay_set (int x, int y, const wchar_t *s){ 
rxvt_term.scr_overlay_set =function( x,  y,    s ){ 
//CMNT: possible_pointer ^|         while (*s){ 
  while ( s ){
//CMNT: possible_pointer ^|             text_t t = *s++; 
      text_t t =  s ++;
      var width= WCWIDTH (t);   //             int width = WCWIDTH (t);   ###  js_style_variables 

      while (width--){
          scr_overlay_set (x++, y, t);
          t = NOCHAR;
        }
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_swap_overlay (){ 
rxvt_term.scr_swap_overlay =function(){ 
  if (!ov.text)
    return;

  // hide cursor if it is within the overlay area
  if (IN_RANGE_EXC (screen.cur.col - ov.x, 0, ov.w)
      && IN_RANGE_EXC (screen.cur.row - ov.y, 0, ov.h))
    screen.flags &= ~Screen_VisibleCursor;

  // swap screen mem with overlay
//CMNT: c_keyword ^|         for (int y = ov.h; y--; ){ 
  for ( y = ov.h; y--; ){
//CMNT: possible_pointer ^|             text_t *t1 = ov.text[y]; 
      text_t  t 1 = ov.text[y];
//CMNT: c_keyword possible_pointer ^|             rend_t *r1 = ov.rend[y]; 
        r 1 = ov.rend[y];

//CMNT: possible_pointer ^|             text_t *t2 = ROW(y + ov.y + view_start).t + ov.x; 
      text_t  t 2 = ROW(y + ov.y + view_start).t + ov.x;
//CMNT: c_keyword possible_pointer ^|             rend_t *r2 = ROW(y + ov.y + view_start).r + ov.x; 
        r 2 = ROW(y + ov.y + view_start).r + ov.x;

//CMNT: c_keyword ^|             for (int x = ov.w; x--; ){ 
      for ( x = ov.w; x--; ){
//CMNT: possible_pointer ^|                 text_t t = *t1; *t1++ = *t2; *t2++ = t; 
          text_t t =  t 1;  t 1++ =  t 2;  t 2++ = t;
//CMNT: js_style_variables possible_pointer ^|                 rend_t r = *r1; *r1++ = *r2; *r2++ = SET_FONT (r, FONTSET (r)->find_font (t)); 
 var r=  r 1;  r 1++  =  r 2;  r 2++ = SET_FONT (r, FONTSET (r)->find_font (t));
        }
    }
}

#endif
/* ------------------------------------------------------------------------- */
