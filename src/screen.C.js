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


paddyaoue:          what does this line mean?
paddyaoue:              line_t &qline = row_buf [row];
dstillz: The address of the line_t qline is assigned to be row_buf[row].

(fset 'case_debug
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([134217747 99 97 115 101 46 42 58 13 67108896 18 99 97 115 101 13 24 11 25 14 1 return 16 tab 67 65 83 69 95 68 69 66 85 71 40 34 89 backspace 25 34 41] 0 "%d")) arg)))
(fset 'js-insert-function-debug
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ([19 112 114 111 116 111 116 121 112 101 46 13 67108896 19 32 127 61 13 2 24 11 25 5 return tab 70 85 78 67 84 73 79 78 95 68 69 66 85 71 40 34 25 134217820 34 41] 0 "%d")) arg)))
(local-set-key (kbd "H-C-c") 'case_debug)

*/
/*
 * This file handles _all_ screen updates and selections 
 */
#include "rxvt.h.js"

/* ------------------------------------------------------------------------- *
 *                        SCREEN `COMMON' ROUTINES                           * 
 * ------------------------------------------------------------------------- */ 

/* Fill part/all of a line with blanks. */
//void rxvt_term::scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs){ 
rxvt_term.prototype.scr_blank_line =function(l, col, width, efs){ 
  //FUNCTION_DEBUG("scr_blank_line")
  /*  if (!l.t){
      lalloc (l);
      col = 0;
      width =  this.ncol;  //FIXME where does NCOL come from?
    }

  l.touch ();
  */

  efs &= ~RS_baseattrMask; //remove italic etc. fontstyles
  //FIXME efs = SET_FONT (efs, FONTSET (efs).find_font (' '));
  //efs = (((efs) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (' ')) << 24));
  //the above line is the macro expansion of SET_FONT FONTSET 

  //l = new line_t();
  //l.t=[];
  //l.r=[];
  //FIXME where is l.t an array, what should  I use for an indice of et??
  var et_i = col;  //text_t *et = l.t + col; 
  var er_i = col;  //rend_t *er = l.r + col; 
  //console.log("width");
  //console.log(width);
  while (width--){
      l.t[et_i++] = ' ';  //   *et++ = ' '; 
      l.r[er_i++] = efs;  // *er++ = efs; 
    }
  //console.log(l.t);
  return l;
}

/* ------------------------------------------------------------------------- */
/* Fill a full line with blanks - make sure it is allocated first */
//void rxvt_term::scr_blank_screen_mem (line_t &l, rend_t efs) 
rxvt_term.prototype.scr_blank_screen_mem =function(l,  efs){ 
    //    FUNCTION_DEBUG("scr_blank_screen_mem")
  l = this.scr_blank_line (l, 0,  this.ncol, efs);

  l.l = 0;
  l.f = 0;
  return l;
}

//nuke a single wide character at the given column 
//void rxvt_term::scr_kill_char (line_t &l, int col) 
rxvt_term.prototype.scr_kill_char =function(l,  col){ 
    // FUNCTION_DEBUG("scr_kill_char")
  //find begin
    while (col > 0 && ord(l.t[col]) == NOCHAR)
    col--;

  var rend= l.r[col] & ~RS_baseattrMask;   //rend_t rend = l.r[col] & ~RS_baseattrMask;
  //FIXME is this a cast, how does the -> interact with the FONTSET macro???
  //rend = SET_FONT (rend, FONTSET (rend).find_font (' ')); 
  //FIXME check macroexpansion rend = SET_FONT (rend, FONTSET (rend)->find_font (' '));  
  //found start, nuke
  do {
    l.t[col] = ' ';
    l.r[col] = rend;
    col++;
  } while (col <  this.ncol && ord(l.t[col]) == NOCHAR);
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
//void rxvt_term::scr_reset (){ 
rxvt_term.prototype.scr_reset =function(){ 
    FUNCTION_DEBUG("scr_reset")
    console.log("scr_reset");
    console.log("this.ncol",this.ncol);
  this.view_start = 0;
  this.num_scr = 0;
  
  if (this.ncol == 0){
      console.log("setting ncol to 80");
      this.ncol = 80;
  }
  if (this.nrow == 0)
    this.nrow = 24;
    
  if (this.ncol == this.prev_ncol && this.nrow == this.prev_nrow)
    return;

  //we need at least two lines for wrapping to work correctly
  while (this.nrow + this.saveLines < 2){
      //TODO//FIXME
      this.saveLines++;
      this.prev_nrow--;
      this.top_row--;
  }

  this.want_refresh = 1;

  var prev_total_rows= this.prev_nrow + this.saveLines;   
  this.total_rows = this.nrow + this.saveLines;

  this.screen.tscroll = 0;
  this.screen.bscroll = this.nrow - 1;

  if (!this.row_buf){
      /*
       * first time called so just malloc everything: don't rely on this.realloc 
       */
      this.top_row    = 0;
      this.term_start = 0;


      //this code basically sets up the rendering area, alloc has no special signficance to worry about
      //I dont understand the calls to rxvt_salloc, talloc and ralloc are never used
      //ahh rxvt_salloc is used from lalloc

      //talloc = new rxvt_salloc (ncol * sizeof (text_t)); 
      //ralloc = new rxvt_salloc (ncol * sizeof (rend_t));

      //row_buf   = (line_t *)rxvt_calloc (total_rows + nrow, sizeof (line_t));
      this.row_buf   = my_alloc(this.total_rows + this.nrow, line_t), this.row_buf_i=0;  
      // this.drawn_buf = (line_t *)rxvt_calloc (nrow             , sizeof (line_t));
      this.drawn_buf = my_alloc(this.nrow, line_t), this.drawn_buf_i=0;
      //swap_buf  = (line_t *)rxvt_calloc (nrow,sizeof (line_t));
      this.swap_buf  = my_alloc(this.nrow, line_t), this.swap_buf_i=0;  

      for (var row = this.nrow; row--; ){  //for (int row = nrow; row--; )
        this.scr_blank_screen_mem (ROW (row), DEFAULT_RSTYLE);
        this.scr_blank_screen_mem (this.swap_buf [row], DEFAULT_RSTYLE);
        this.scr_blank_screen_mem (this.drawn_buf[row], DEFAULT_RSTYLE);
      }

      //memset (charsets, 'B', sizeof (charsets)); 
      this.charsets= memset (this.charsets, 'B', 1);
      this.rstyle = DEFAULT_RSTYLE;
      this.screen.flags = Screen_DefaultFlags;
      this.screen.cur.row = this.screen.cur.col = 0;
      this.screen.charset = 0; 
      this.current_screen = PRIMARY;
      this.scr_cursor (SAVE);

#if NSCREENS
      this.swap.flags = Screen_DefaultFlags;
      this.swap.cur.row = this.swap.cur.col = 0;
      this.swap.charset = 0; 
      this.current_screen = SECONDARY;
      this.scr_cursor (SAVE);
      this.current_screen = PRIMARY;
#endif

      this.selection.text = ""; //FIXME
      this.selection.len = 0;
      this.selection.op = SELECTION_CLEAR;
      this.selection.screen = PRIMARY;
      this.selection.clicks = 0;
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
      if (this.nrow < this.prev_nrow){
        for ( var row = this.nrow; row < this.prev_nrow; row++){  //for (int row = nrow; row < prev_nrow; row++)
          delete (this.swap_buf [row]);  //lfree (swap_buf [row]);
          delete (this.drawn_buf[row]);  //lfree (drawn_buf[row]);
            }
        }
#endif

//drawn_buf = (line_t *)rxvt_realloc (drawn_buf, nrow * sizeof (line_t)); 
//swap_buf  = (line_t *)rxvt_realloc (swap_buf , nrow * sizeof (line_t)); 
      this.drawn_buf = my_alloc(this.nrow, line_t);
      this.swap_buf  = my_alloc(this.nrow, line_t);



      for ( row = mi_n (this.nrow,  this.prev_nrow); row--; ){  //for (int row = mi_n (this.nrow, prev_nrow); row--; )
        lresize ( this.drawn_buf[row]);  //lresize (drawn_buf[row]);
        lresize ( this.swap_buf [row]);  //lresize (swap_buf [row]);
        }

      for ( row =  this.prev_nrow; row < this.nrow; row++){  //for (int row = prev_nrow; row < nrow; row++)
           this.swap_buf [row].clear (); this.scr_blank_screen_mem ( this.swap_buf [row], DEFAULT_RSTYLE);
           this.drawn_buf[row].clear (); this.scr_blank_screen_mem ( this.drawn_buf[row], DEFAULT_RSTYLE);
        }
      var  old_buf =  this.row_buf, old_buf_i= this.row_buf_i;  //line_t *old_buf = row_buf;
      //row_buf = (line_t *)rxvt_calloc ( this.total_rows + nrow, sizeof (line_t));
       this.row_buf   = my_alloc ( this.total_rows + this.nrow, line_t),  this.row_buf_i=0; 
      //previous row   //int p    = MOD (term_start + prev_nrow, prev_total_rows);  //previous row
      var p= MOD ( this.term_start +  this.prev_nrow, prev_total_rows);  
      //int pend = MOD (term_start + top_row  , prev_total_rows); 
      var pend= MOD ( this.term_start +  this.top_row  , prev_total_rows);   
      var q=  this.total_rows; //rewrapped row   //int q    =  this.total_rows;

      if ( this.top_row){
          //Re-wrap lines. This is rather ugly, possibly because I am too dumb
          //to come up with a lean and mean algorithm.
          //TODO: maybe optimise when width didnt change

         var  ocur = this.screen.cur;  //row_col_t ocur = screen.cur;
          ocur.row = MOD ( this.term_start + ocur.row, prev_total_rows);

          do
            {
              p = MOD (p - 1, prev_total_rows);
#ifdef DEBUG_STRICT
              assert (old_buf [MOD (p, prev_total_rows)].t);
#endif
              var plines= 1;   //int plines = 1;
              var indice = MOD (p, prev_total_rows);
              var llen= old_buf [MOD (p, prev_total_rows)].l;   //int llen = old_buf [MOD (p, prev_total_rows)].l;

              while (p != pend && old_buf [MOD (p - 1, prev_total_rows)].is_longer ()){
                  p = MOD (p - 1, prev_total_rows);

                  plines++;
                  llen +=  this.prev_ncol;
                }

              var qlines= ma_x (0, (llen - 1) /  this.ncol) + 1;   //FIXME floor division   int qlines = ma_x (0, (llen - 1) / ncol) + 1;

              //drop partial lines completely
              if (q < qlines)
                break;

              q -= qlines;

              var lofs= 0;   //int lofs = 0;
              var  qline = [], qline_i=0;  //line_t *qline;

              //re-assemble the full line by destination lines
              for ( var qrow = q; qlines--; qrow++){  //for (int qrow = q; qlines--; qrow++){
                  
                   this.row_buf[ this.row_buf_i + qrow]=new line_t();  //lalloc (*qline);  
                   this.row_buf[ this.row_buf_i + qrow].l =  this.ncol;
                   this.row_buf[ this.row_buf_i + qrow].is_longer (1);

                  var qcol= 0;   //int qcol = 0;

                  //see below for cursor adjustment rationale
                  if (p == ocur.row)
                    this.screen.cur.row = q - ( this.total_rows - this.nrow);

                  //fill a single destination line
                  while (lofs < llen && qcol <  this.ncol){
                    //FIXED floor division      int prow = lofs / prev_ncol;
                    var prow= Math.floor(lofs /  this.prev_ncol);   
                    var pcol= lofs %  this.prev_ncol;   //int pcol = lofs % prev_ncol;  

                      prow = MOD (p + prow, prev_total_rows);

                      //we only adjust the cursor _row_ and put it into 
                      //the topmost line of "long line" it was in, as
                      //this seems to upset applications/shells/readline
                      //least.
                      if (prow == ocur.row)
                        this.screen.cur.row = q - ( this.total_rows - this.nrow);

                      //line_t &pline = ; //FIXED
                      //int len = min (min (prev_ncol - pcol, ncol - qcol), llen - lofs); 
                      var len= mi_n (mi_n ( this.prev_ncol - pcol,  this.ncol - qcol), llen - lofs); 
                      //memcpy (qline->t + qcol, pline.t + pcol, len * sizeof (text_t));  
                       this.row_buf[ this.row_buf_i + qrow].t = 
                         memcpy(
                                this.row_buf[ this.row_buf_i + qrow].t,
                                this.row_buf[ this.row_buf_i + qrow].t_i +qcol, 
                                old_buf [prow].t,
                                old_buf [prow].t_i +pcol,
                                len);  
                      //memcpy (qline->r + qcol, pline.r + pcol, len * sizeof (rend_t));  
                       this.row_buf[ this.row_buf_i + qrow].r =
                           memcpy(
                                  this.row_buf[ this.row_buf_i + qrow].r,
                                  this.row_buf[ this.row_buf_i + qrow].r_i +qcol,
                                  old_buf [prow].r, 
                                  old_buf [prow].r_i +pcol, len);  

                      lofs += len;
                      qcol += len;
                    }
                }


               this.row_buf[ this.row_buf_i + qrow].l = llen ? MOD (llen - 1,  this.ncol) + 1 : 0;
               this.row_buf[ this.row_buf_i + qrow].is_longer (0);
//FIXED: possible_pointer ^|                     scr_blank_line (*qline, qline->l, ncol - qline->l, DEFAULT_RSTYLE); 
       
 this.row_buf[ this.row_buf_i + qrow] =this.scr_blank_line ( qline, qline.l,  this.ncol - qline.l, DEFAULT_RSTYLE);
            }
          while (p != pend && q > 0);

           this.term_start =  this.total_rows - this.nrow;
           this.top_row = q -  this.term_start;

          //make sure all terminal lines exist
          while ( this.top_row > 0)
            this.scr_blank_screen_mem (ROW (-- this.top_row), DEFAULT_RSTYLE);
      }
      else{
          //if no scrollback exists (yet), wing, instead of wrap
        //for (int row = min (this.nrow, prev_nrow); row--; )
         for (row = mi_n (this.nrow,  this.prev_nrow); row--; ){  
           //line_t &pline = old_buf [MOD (term_start + row, prev_total_rows)];
           var pline = old_buf [MOD ( this.term_start + row, prev_total_rows)]; 
            qline =  this.row_buf [row];  //line_t &qline =  this.row_buf [row];

              qline = pline;
              lresize (qline);
         }

           for (  row =  this.prev_nrow; row < this.nrow; row++){  //for (int row = prev_nrow; row < nrow; row++)
               this.row_buf [row].clear (); this.scr_blank_screen_mem ( this.row_buf [row], DEFAULT_RSTYLE);
            }

           this.term_start = 0;
        }

      //free (old_buf);  
      //delete old_ta;
      //delete old_ra;

      clamp_it (this.screen.cur.row, 0, this.nrow - 1);
      clamp_it (this.screen.cur.col, 0,  this.ncol - 1);
  }

  free ( this.tabs);
   this.tabs = [],  this.tabs_i=0;  //tabs = (char *)rxvt_malloc (ncol);  

   for ( var col =  this.ncol; --col; )  //for (int col = ncol; --col; ) 
     this.tabs [col] = col % TABSIZE == 0;

  CLEAR_ALL_SELECTION ();

   this.prev_nrow = this.nrow;
   this.prev_ncol =  this.ncol;

  this.tt_winch ();

  //this.term_el.innerHTML="";
  this.dom_text_rows=[]
  for(var i = 0; i < this.nrow; i++){

      var dom_row = $("<pre></pre>");
      //this.dom_rows.push(dom_row);
      //this.term_el.append(dom_row);
      this.dom_text_rows.push([]);
  }
  //this.dom_rows=this.term_el.contents();
  HOOK_INVOKE ((this, HOOK_RESET, DT_END));
}  

/*
void
rxvt_term::set_widthheight (unsigned int newwidth, unsigned int newheight)
{
  XWindowAttributes wattr;

  if (newwidth == 0 || newheight == 0)
    {
      XGetWindowAttributes (dpy, display->root, &wattr);

      if (newwidth == 0)
        newwidth = wattr.width - szHint.base_width;
      if (newheight == 0)
        newheight = wattr.height - szHint.base_height;
    }

  if (newwidth != width || newheight != height)
    {
      newwidth += szHint.base_width;
      newheight += szHint.base_height;
      resize_all_windows (newwidth, newheight, 0);
    }
}
*/

rxvt_term.prototype.set_widthheight = function( newwidth, newheight){
    FUNCTION_DEBUG("set_widthheight")

    /*
    if(this.have_called_set_widthheight){
        console.log("called");
        return;
    }

    */
    if (!newwidth == 0){
        this.ncol=newwidth;}
    if (!newheight == 0){
        this.nrow = newheight;}
    //this.scr_poweron();
    this.scr_reset();
    //this.have_called_set_widthheight = true;
}

/* ------------------------------------------------------------------------- */
/*
 * Free everything.  That way malloc debugging can find leakage. 
 */
//void rxvt_term::scr_release () 
rxvt_term.prototype.scr_release =function(){ 
    FUNCTION_DEBUG("scr_release")
  if (this.row_buf){
      /*
      delete talloc; talloc = 0;  //FIXME what to do with allocs?
      delete ralloc; ralloc = 0;
      free ( this.row_buf);
      free (swap_buf);
      free (drawn_buf);
       this.row_buf = 0; //signal that we freed all the arrays above

      free ( this.tabs);
       this.tabs = 0;

       */
    this.row_buf=[],  this.swap_buf=[],this.drawn_buf=[], this.row_buf_i=0, this.tabs_i=0;
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Hard/Soft reset 
 */
//void rxvt_term::scr_poweron (){ 
rxvt_term.prototype.scr_poweron =function(){ 
    FUNCTION_DEBUG("scr_poweron")
  this.scr_release ();
   this.prev_nrow =  this.prev_ncol = 0;
  this.rvideo_mode = false;
  this.scr_soft_reset ();
  this.scr_reset ();

  this.scr_clear (true);
  this.scr_refresh ();
}

//void rxvt_term::scr_soft_reset () 
rxvt_term.prototype.scr_soft_reset =function(){ 
    FUNCTION_DEBUG("scr_soft_reset")
  /* only affects modes, nothing drastic such as clearing the screen */
#if ENABLE_OVERLAY
  this.scr_overlay_off ();
#endif

  if ( this.current_screen != PRIMARY)
    this.scr_swap_screen ();

  this.scr_scroll_region (0, MAX_ROWS - 1);
  this.scr_rendition (0, ~RS_None);
  this.scr_insert_mode (0);
}

/* ------------------------------------------------------------------------- *
 *                         PROCESS SCREEN COMMANDS                           * 
 * ------------------------------------------------------------------------- */ 
/*
 * Save and Restore cursor 
 * XTERM_SEQ: Save cursor   : ESC 7 
 * XTERM_SEQ: Restore cursor: ESC 8 
 */
//void rxvt_term::scr_cursor (cursor_mode mode){ 
rxvt_term.prototype.scr_cursor =function(mode){ 
    FUNCTION_DEBUG("scr_cursor")

    /*
    var s ;  //screen_t *s;   ### js_style_variables  possible_pointer 
  switch (mode){
      case SAVE:
      CASE_DEBUG("case SAVE:")
        s->s_cur.row = screen.cur.row;
        s->s_cur.col = screen.cur.col;
        s->s_rstyle = rstyle;
        s->s_charset = screen.charset; 
        s->s_charset_char = charsets[screen.charset]; 
        break;

      case RESTORE:
      CASE_DEBUG("case RESTORE:")
       this.want_refresh = 1;
        screen.cur.row = s->s_cur.row;
        screen.cur.col = s->s_cur.col;
        screen.flags &= ~Screen_WrapNext;
        rstyle = s->s_rstyle;
        screen.charset = s->s_charset; 
         this.charsets[screen.charset] = s->s_charset_char; 
        set_font_style ();
        break;
    }

    //boundary check in case screen size changed between SAVE and RESTORE 
  min_it (s->cur.row, this.nrow - 1);
  min_it (s->cur.col,  this.ncol - 1);
#ifdef DEBUG_STRICT
  assert (s->cur.row >= 0);
  assert (s->cur.col >= 0);
#endif
*/
    var s ;  //screen_t *s;
#if NSCREENS && !defined(NO_SECONDARY_SCREEN_CURSOR)
  if ( this.current_screen == SECONDARY)
    s = this.swap;
  else
#endif
    s = this.screen;  //s = &screen;

  switch (mode){
      case SAVE:
          CASE_DEBUG("case SAVE:")
        s.s_cur.row = this.screen.cur.row;
        s.s_cur.col = this.screen.cur.col;
        s.s_rstyle = rstyle;
        s.s_charset = this.screen.charset; 
        //FIXME s.s_charset_char = this.charsets[this.screen.charset]; 
        break;

      case RESTORE:
          CASE_DEBUG("case RESTORE:")
       this.want_refresh = 1;
        this.screen.cur.row = s.s_cur.row;
        this.screen.cur.col = s.s_cur.col;
        this.screen.flags &= ~Screen_WrapNext;
        rstyle = s.s_rstyle;
        this.screen.charset = s.s_charset; 
        //FIXME this.charsets[this.screen.charset] = s.s_charset_char; 
        //set_font_style ();
        break;
    }

  /* boundary check in case screen size changed between SAVE and RESTORE */
  mi_n (s.cur.row, this.nrow - 1);
  mi_n (s.cur.col,  this.ncol - 1);
#ifdef DEBUG_STRICT
  assert (s.cur.row >= 0);
  assert (s.cur.col >= 0);
#endif

}

//void rxvt_term::scr_swap_screen () 
rxvt_term.prototype.scr_swap_screen =function(){
    FUNCTION_DEBUG("scr_swap_screen")
  if (!this.option (Opt_secondaryScreen))
    return;

   for (var i =  this.prev_nrow; i--; )  //for (int i = prev_nrow; i--; )
     swap (ROW(i),  this.swap_buf [i]);  //::swap (ROW(i), swap_buf [i]);

  swap (this.screen.cur, swap.cur);  //::swap (screen.cur, swap.cur);

  this.screen.cur.row = clamp (this.screen.cur.row, 0,  this.prev_nrow - 1);
  this.screen.cur.col = clamp (this.screen.cur.col, 0,  this.prev_ncol - 1);
}

/* ------------------------------------------------------------------------- */
/*
 * Swap between primary and secondary screens 
 * XTERM_SEQ: Primary screen  : ESC [ ? 4 7 h 
 * XTERM_SEQ: Secondary screen: ESC [ ? 4 7 l 
 */
// void rxvt_term::scr_change_screen (int scrn){ 
rxvt_term.prototype.scr_change_screen =function( scrn){ 
    FUNCTION_DEBUG("scr_change_screen")
  if (scrn ==  this.current_screen)
    return;

 this.want_refresh = 1;
   this.view_start = 0;

   this.selection_check (2);        /* check for boundary cross */

  var i=  this.current_screen;  this.current_screen  = scrn; scrn = i

#if NSCREENS
  if ( this.option (Opt_secondaryScreen)){
      this.num_scr = 0;

      this.scr_swap_screen ();

      swap(this.screen.charset, swap.charset);   //::swap (this.screen.charset, swap.charset); 
      swap(this.screen.flags,   swap.flags);  //::swap (screen.flags,   swap.flags);
      this.screen.flags |= Screen_VisibleCursor;
      swap.flags   |= Screen_VisibleCursor;
    }
  else
#endif
    if ( this.option (Opt_secondaryScroll))
      this.scr_scroll_text (0,  this.prev_nrow - 1,  this.prev_nrow);
}

//clear WrapNext indicator, solidifying position on next line
//void rxvt_term::scr_do_wrap () 
rxvt_term.prototype.scr_do_wrap =function(){ 
    FUNCTION_DEBUG("scr_do_wrap")
  if (!(this.screen.flags & Screen_WrapNext))
    return;

  this.screen.flags &= ~Screen_WrapNext;

  this.screen.cur.col = 0;

  if (this.screen.cur.row == this.screen.bscroll)
    this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, 1);
  else if (this.screen.cur.row < this.nrow - 1)
    this.screen.cur.row++;
}

/* ------------------------------------------------------------------------- */
/*
 * Change the colour for following text 
 */
//void rxvt_term::scr_color (unsigned int color, int fgbg){ 
rxvt_term.prototype.scr_color =function(  color,  fgbg){ 
    FUNCTION_DEBUG("scr_color")
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
//void rxvt_term::scr_rendition (int set, int style) 
rxvt_term.prototype.scr_rendition =function( set,  style){ 
    FUNCTION_DEBUG("scr_rendition")
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
//int rxvt_term::scr_scroll_text (int row1, int row2, int count){ 
rxvt_term.prototype.scr_scroll_text =function( row1,  row2,  count){ 
    FUNCTION_DEBUG("scr_scroll_text")
  if (count == 0 || (row1 > row2))
    return 0;

 this.want_refresh = 1;
  this.num_scr += count;

  if (count > 0
      && row1 == 0
      && ( this.current_screen == PRIMARY ||  this.option (Opt_secondaryScroll))){
       this.top_row = ma_x ( this.top_row - count, - this.saveLines);

      //scroll everything up 'count' lines
       this.term_start = ( this.term_start + count) %  this.total_rows;

      //sever bottommost line
      {
        var l = ROW(row2 - count);  //line_t &l = ROW(row2 - count);
        l.is_longer (0);
        //l.touch ();
        l.modified=true;
      }

      //erase newly scrolled-in lines
       for (var i = count; i--; ){  //for (int i = count; i--; ){
         var l = ROW(this.nrow - 1 - i);  //line_t &l = ROW(this.nrow - 1 - i);

          //optimize if already cleared, can be significant on slow machines
          //could be rolled into scr_blank_screen_mem 
          if (l.r && l.l <  this.ncol - 1 && !((l.r[l.l + 1] ^ rstyle) & (RS_fgMask | RS_bgMask))){
            l = this.scr_blank_line (l, 0, l.l, rstyle);  //scr_blank_line (l, 0, l.l, rstyle);
              l.l = 0;
              l.f = 0;
            }
          else
            this.scr_blank_screen_mem (l, rstyle);
        }

      //now copy lines below the scroll region bottom to the
      //bottom of the screen again, so they look as if they
      //hadnt moved.
        for (  i = this.nrow; --i > row2; ){  //for (int i = this.nrow; --i > row2; )
          var l1 = ROW(i - count);  //line_t &l1 = ROW(i - count);
          var l2 = ROW(i);  //line_t &l2 = ROW(i);

          swap (l1, l2);  //::swap (l1, l2);
          //l2.touch ();
          l2.modified=true;
        }

      //move and/or clear selection, if any
      if ( this.selection.op &&  this.current_screen ==  this.selection.screen){
           this.selection.beg.row  -= count;
           this.selection.end.row  -= count;
           this.selection.mark.row -= count;

          if ( this.selection.beg.row <  this.top_row
              ||  this.selection.end.row <  this.top_row
              ||  this.selection.mark.row <  this.top_row){
              CLEAR_ALL_SELECTION ();
               this.selection.op = SELECTION_CLEAR;
            }
        }

      //finally move the view window, if desired
      if ( this.option (Opt_scrollWithBuffer)
          &&  this.view_start != 0
          &&  this.view_start != - this.saveLines)
        this.scr_page (UP, count);

      if (SHOULD_INVOKE (HOOK_SCROLL_BACK))
        HOOK_INVOKE ((this, HOOK_SCROLL_BACK, DT_INT, count, DT_INT,  this.top_row, DT_END));
    }
  else{
      if ( this.selection.op &&  this.current_screen ==  this.selection.screen){
          if (( this.selection.beg.row < row1 &&  this.selection.end.row > row1)
              || ( this.selection.beg.row < row2 &&  this.selection.end.row > row2)
              || ( this.selection.beg.row - count < row1 &&  this.selection.beg.row >= row1)
              || ( this.selection.beg.row - count > row2 &&  this.selection.beg.row <= row2)
              || ( this.selection.end.row - count < row1 &&  this.selection.end.row >= row1)
              || ( this.selection.end.row - count > row2 &&  this.selection.end.row <= row2)){
              CLEAR_ALL_SELECTION ();
               this.selection.op = SELECTION_CLEAR;
            }
          else if ( this.selection.end.row >= row1 &&  this.selection.end.row <= row2){
              /* move  this.selected region too */
               this.selection.beg.row  -= count;
               this.selection.end.row  -= count;
               this.selection.mark.row -= count;

               this.selection_check (0);
            }
        }

      //use a simple and robust scrolling algorithm, this
      //part of scr_scroll_text is not time-critical.

       var rows= row2 - row1 + 1;   //int rows = row2 - row1 + 1;

      count = mi_n(count, rows);  //min_it  (count, rows);
      //line_t *temp_buf =  this.row_buf + total_rows;  
      var temp_buf =  this.row_buf, temp_buf_i=this.row_buf_i+ this.total_rows;

       for (var row = 0; row < rows; row++){  //for (int row = 0; row < rows; row++){
          temp_buf [temp_buf_i+row] = ROW(row1 + (row + count + rows) % rows);

          if (!IN_RANGE_EXC (row + count, 0, rows))
            this.scr_blank_screen_mem (temp_buf [temp_buf_i + row], rstyle);
        }

       for ( row = 0; row < rows; row++)  //for (int row = 0; row < rows; row++)
        ROW(row1 + row) = temp_buf [temp_buf_i + row];
    }

  return count;
}

/* ------------------------------------------------------------------------- */
/*
 * Add text given in <str> of length <len> to screen struct 
 */
//void rxvt_term::scr_add_lines (const wchar_t *str, int len, int minlines) 
rxvt_term.prototype.scr_add_lines =function(   str,  len,  minlines){ 
    FUNCTION_DEBUG("scr_add_lines")

    var str_i = 0;
    if (len <= 0)               /* sanity */
        return;

    var checksel;  //unsigned char checksel;   
    var c;  //unicode_t c; 
    var ncol= this.ncol;   //int ncol = this->ncol;
    var strend = str, strend_i = len;  //const wchar_t *strend = str + len; 
    var this_screen = this.screen;
    var this_screen_cur = this.screen.cur;

    this.want_refresh = 1;
    ZERO_SCROLLBACK ();

    if (minlines > 0){
        minlines += this_screen_cur.row - this_screen.bscroll;
      //min_it (minlines, screen.cur.row - top_row);
      minlines = mi_n (minlines, this_screen_cur.row -  this.top_row);

      if (minlines > 0
          && this_screen.tscroll == 0
          && this_screen.bscroll == this.nrow - 1){
          /* _atleast_ this many lines need to be scrolled */
          str_i = 0;
          //FIXME not sure what this supposed to be, look at the original 
          //scr_scroll_text (screen.tscroll, screen.bscroll minlines);
          this_screen_cur.row -= minlines;
        }
    }

#ifdef DEBUG_STRICT
  assert (this_screen_cur.col <  this.ncol);
  assert (this_screen_cur.row < this.nrow
          && this_screen_cur.row >=  this.top_row);
#endif
    var row= this_screen_cur.row;   //int row = screen.cur.row;

    //  checksel =  this.selection.op &&  this.current_screen ==  this.selection.screen ? 1 : 0;

    var  line = ROW(row);  

  while (str_i < strend_i){  //while (str < strend)
    //c = (unicode_t)*str++; 
      c =  str[str_i++]; //convert to rxvt-unicodes representation 

      if (expect_false (ord(c) < 0x20))
          if (ord(c) == C0_LF){
          line.l= ma_x(line.l,this_screen_cur.col);

            this_screen.flags &= ~Screen_WrapNext;

            var this_screen_cur_row = this_screen_cur.row , this_screen_bscroll =this_screen.bscroll, this_nrow = this.nrow;
            if (this_screen_cur.row == this_screen.bscroll)
              this.scr_scroll_text (this_screen.tscroll, this_screen.bscroll, 1);
            else if (this_screen_cur.row < (this.nrow - 1))
              row = ++this_screen_cur.row;

            line = ROW(row);  /* _must_ refresh */
            continue;
          }
          else if (ord(c) == C0_CR){
          line.l= ma_x(line.l,this_screen_cur.col);

            this_screen.flags &= ~Screen_WrapNext; 
            this_screen_cur.col = 0;
            continue;
          }
          else if (ord(c) == C0_HT){
            this.scr_tab (1, true);
            continue;
          }
      // see if we're writing within selection 
      if (expect_false (
            checksel            
            && !ROWCOL_IS_BEFORE (this_screen_cur,  this.selection.beg)
            && ROWCOL_IS_BEFORE (this_screen_cur,  this.selection.end)
         )){
          checksel = 0;
            //If we wrote anywhere in the selected area, kill the selection 
            //XXX: should we kill the mark too?  Possibly, but maybe that 
            //should be a similar check. 
                 CLEAR_SELECTION ();
        }

      if (expect_false (this_screen.flags & Screen_WrapNext)){
          this.scr_do_wrap ();

          line.l =  this.ncol;
          line.is_longer(1);

          row = this_screen_cur.row;
          line = ROW(row);   /* _must_ refresh */  //line = &ROW(row);   /* _must_ refresh */
        }

      //some utf-8 decoders "decode" surrogate characters: let's fix this. 
      //I don't think this matters for js
      //if (expect_false (IN_RANGE_INC (ord(c), 0xd800, 0xdfff)))
      //    c = 0xfffd;

      //rely on wcwidth to tell us the character width, do wcwidth before 
      //further replacements, as wcwidth might return -1 for the line
      //drawing characters below as they might be invalid in the current 
      //locale.
      var width= WCWIDTH (c);   //int width = WCWIDTH (c);
      
      if (expect_false ( this.charsets [this_screen.charset] == '0')) { //DEC SPECIAL 
          //FIXME not sure about my changes why should vt100_0 need to be 62 elements big
          //vt100 special graphics and line drawing
          //5f-7e standard vt100 
          //40-5e rxvt extension for extra curses acs chars 
          var vt100_0 = [ //41 .. 7e   //static uint16_t vt100_0[62] = { //41 .. 7e 
                    0x2191, 0x2193, 0x2192, 0x2190, 0x2588, 0x259a, 0x2603, //41-47 hi mr. snowman!
                 0,      0,      0,      0,      0,      0,      0,      0, //48-4f
                 0,      0,      0,      0,      0,      0,      0,      0, //50-57
                 0,      0,      0,      0,      0,      0,      0, 0x0020, //58-5f
            0x25c6, 0x2592, 0x2409, 0x240c, 0x240d, 0x240a, 0x00b0, 0x00b1, //60-67
            0x2424, 0x240b, 0x2518, 0x2510, 0x250c, 0x2514, 0x253c, 0x23ba, //68-6f
            0x23bb, 0x2500, 0x23bc, 0x23bd, 0x251c, 0x2524, 0x2534, 0x252c, //70-77
            0x2502, 0x2264, 0x2265, 0x03c0, 0x2260, 0x00a3, 0x00b7         //78-7e
                          ];

          if (ord(c) >= 0x41 && ord(c) <= 0x7e && vt100_0[ord(c) - 0x41]){
              c = vt100_0[ord(c) - 0x41];
              width = 1; //vt100 line drawing characters are always single-width 
            }
        }
      

      if (expect_false (this_screen.flags & Screen_Insert))
        this.scr_insdel_chars (width, INSERT); 


            //nuke the character at this position, if required 
          if (expect_false (
                            line.t[this_screen_cur.col] == ""
                || (this_screen_cur.col <  this.ncol - 1
                    && line.t[this_screen_cur.col + 1] == "")
             ))
              //scr_kill_char (*line, screen_cur.col); 
              this.scr_kill_char ( line, this_screen_cur.col); 
              //rend_t rend = SET_FONT (rstyle, FONTSET (rstyle)->find_font (c)); 
              //FIXME var rend= SET_FONT (rstyle, FONTSET (rstyle).find_font (c));

          //if the character doesnt fit into the remaining columns... 
          if (expect_false (this_screen_cur.col >  this.ncol - width &&  this.ncol >= width)){
              //... artificially enlargen the previous one
              c = "";// chr(NOCHAR);
              //and try the same character next loop iteration 
              --str_i;
            }

          //line.touch();
          line.modified=true;

          do
            {
              line.t[this_screen_cur.col] = c;
              //FONT-FIXME line.r[this_screen.cur.col] = rend;

              if (expect_true (this_screen_cur.col <  this.ncol - 1))
                this_screen_cur.col++;
              else{
                line.l =  this.ncol; 
                  if (this_screen.flags & Screen_Autowrap)
                    this_screen.flags |= Screen_WrapNext;
                  break;
                }

              c = ""; // chr(NOCHAR);
            }
          while (expect_false (--width > 0));

          //pad with spaces when overwriting wide character with smaller one 
          if (expect_false (!width)){
              //line.touch (); 
              line.modified=true;

            //for (int c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++)
            for (  c = this_screen_cur.col; c <  this.ncol && line.t[c] == ""; c++){  
                  line.t[c] = ' ';
                  //FONT-FIXME line.r[c] = rend;
                }
            }
      
#if ENABLE_COMBINING
          //removed, I wont be implementing this functionality
#endif
    }
    //FIXME max_it (line->l, screen.cur.col);
      line.l = ma_x(line.l, this_screen_cur.col);
#ifdef DEBUG_STRICT
  assert (this_screen_cur.row >= 0);
#endif
}

rxvt_term.prototype.scr_add_lines =function(   str,  len,  minlines){ 
    FUNCTION_DEBUG("scr_add_lines")

    var str_i = 0;
  if (len <= 0)               /* sanity */
    return;

  var checksel;  //unsigned char checksel;   
  var c;  //unicode_t c; 
  var ncol= this.ncol;   //int ncol = this->ncol;
  var strend = str, strend_i = len;  //const wchar_t *strend = str + len; 

 this.want_refresh = 1;
  ZERO_SCROLLBACK ();

  if (minlines > 0){
      minlines += this.screen.cur.row - this.screen.bscroll;
      //min_it (minlines, screen.cur.row - top_row);
      minlines = mi_n (minlines, this.screen.cur.row -  this.top_row);

      if (minlines > 0
          && this.screen.tscroll == 0
          && this.screen.bscroll == this.nrow - 1){
          /* _atleast_ this many lines need to be scrolled */
          str_i = 0;
          //FIXME not sure what this supposed to be, look at the original 
          //scr_scroll_text (screen.tscroll, screen.bscroll minlines);
          this.screen.cur.row -= minlines;
        }
    }

#ifdef DEBUG_STRICT
  assert (this.screen.cur.col <  this.ncol);
  assert (this.screen.cur.row < this.nrow
          && this.screen.cur.row >=  this.top_row);
#endif
    var row= this.screen.cur.row;   //int row = screen.cur.row;

  checksel =  this.selection.op &&  this.current_screen ==  this.selection.screen ? 1 : 0;

    var  line = ROW(row);  

  while (str_i < strend_i){  //while (str < strend)
    //c = (unicode_t)*str++; 
      c =  str[str_i++]; //convert to rxvt-unicodes representation 

      if (expect_false (ord(c) < 0x20))
          if (ord(c) == C0_LF){
          line.l= ma_x(line.l,this.screen.cur.col);

            this.screen.flags &= ~Screen_WrapNext;

            var this_screen_cur_row = this.screen.cur.row , this_screen_bscroll =this.screen.bscroll, this_nrow = this.nrow;
            if (this.screen.cur.row == this.screen.bscroll)
              this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, 1);
            else if (this.screen.cur.row < (this.nrow - 1))
              row = ++this.screen.cur.row;

            line = ROW(row);  /* _must_ refresh */
            continue;
          }
          else if (ord(c) == C0_CR){
          line.l= ma_x(line.l,this.screen.cur.col);

            this.screen.flags &= ~Screen_WrapNext; 
            this.screen.cur.col = 0;
            continue;
          }
          else if (ord(c) == C0_HT){
            this.scr_tab (1, true);
            continue;
          }

      if (expect_false (
            checksel            /* see if we're writing within selection */
            && !ROWCOL_IS_BEFORE (this.screen.cur,  this.selection.beg)
            && ROWCOL_IS_BEFORE (this.screen.cur,  this.selection.end)
         )){
          checksel = 0;
          /*
           * If we wrote anywhere in the selected area, kill the selection 
           * XXX: should we kill the mark too?  Possibly, but maybe that 
           *      should be a similar check. 
           */
          CLEAR_SELECTION ();
        }

      if (expect_false (this.screen.flags & Screen_WrapNext)){
          this.scr_do_wrap ();

          line.l =  this.ncol;
          line.is_longer(1);

          row = this.screen.cur.row;
          line = ROW(row);   /* _must_ refresh */  //line = &ROW(row);   /* _must_ refresh */
        }

      //some utf-8 decoders "decode" surrogate characters: let's fix this. 
      //I don't think this matters for js
      //if (expect_false (IN_RANGE_INC (ord(c), 0xd800, 0xdfff)))
      //    c = 0xfffd;

      //rely on wcwidth to tell us the character width, do wcwidth before 
      //further replacements, as wcwidth might return -1 for the line
      //drawing characters below as they might be invalid in the current 
      //locale.
      var width= WCWIDTH (c);   //int width = WCWIDTH (c);

 if (expect_false ( this.charsets [this.screen.charset] == '0')) //DEC SPECIAL 
        {
          //FIXME not sure about my changes why should vt100_0 need to be 62 elements big
          //vt100 special graphics and line drawing
          //5f-7e standard vt100 
          //40-5e rxvt extension for extra curses acs chars 
          var vt100_0 = [ //41 .. 7e   //static uint16_t vt100_0[62] = { //41 .. 7e 
                    0x2191, 0x2193, 0x2192, 0x2190, 0x2588, 0x259a, 0x2603, //41-47 hi mr. snowman!
                 0,      0,      0,      0,      0,      0,      0,      0, //48-4f
                 0,      0,      0,      0,      0,      0,      0,      0, //50-57
                 0,      0,      0,      0,      0,      0,      0, 0x0020, //58-5f
            0x25c6, 0x2592, 0x2409, 0x240c, 0x240d, 0x240a, 0x00b0, 0x00b1, //60-67
            0x2424, 0x240b, 0x2518, 0x2510, 0x250c, 0x2514, 0x253c, 0x23ba, //68-6f
            0x23bb, 0x2500, 0x23bc, 0x23bd, 0x251c, 0x2524, 0x2534, 0x252c, //70-77
            0x2502, 0x2264, 0x2265, 0x03c0, 0x2260, 0x00a3, 0x00b7         //78-7e
                          ];

          if (ord(c) >= 0x41 && ord(c) <= 0x7e && vt100_0[ord(c) - 0x41]){
              c = vt100_0[ord(c) - 0x41];
              width = 1; //vt100 line drawing characters are always single-width 
            }
        }

      if (expect_false (this.screen.flags & Screen_Insert))
        this.scr_insdel_chars (width, INSERT); 


            //nuke the character at this position, if required 
          if (expect_false (
                            line.t[this.screen.cur.col] == ""
                || (this.screen.cur.col <  this.ncol - 1
                    && line.t[this.screen.cur.col + 1] == "")
             ))
              //scr_kill_char (*line, screen.cur.col); 
              this.scr_kill_char ( line, this.screen.cur.col); 
              //rend_t rend = SET_FONT (rstyle, FONTSET (rstyle)->find_font (c)); 
              //FIXME var rend= SET_FONT (rstyle, FONTSET (rstyle).find_font (c));

          //if the character doesnt fit into the remaining columns... 
          if (expect_false (this.screen.cur.col >  this.ncol - width &&  this.ncol >= width)){
              //... artificially enlargen the previous one
              c = "";// chr(NOCHAR);
              //and try the same character next loop iteration 
              

              //I have to comment this out so that we don't end up in an infinite loop
              // this is is either dealing with unicode character widht or actual charcter display width
              // either way it doesn't matter for javascript/html

              //--str_i;
            }

          line.touch();

          do
            {
              line.t[this.screen.cur.col] = c;
              //FONT-FIXME line.r[this.screen.cur.col] = rend;

              if (expect_true (this.screen.cur.col <  this.ncol - 1))
                this.screen.cur.col++;
              else{
                line.l =  this.ncol; 
                  if (this.screen.flags & Screen_Autowrap)
                    this.screen.flags |= Screen_WrapNext;
                  break;
                }

              c = ""; // chr(NOCHAR);
            }
          while (expect_false (--width > 0));

          //pad with spaces when overwriting wide character with smaller one 
          if (expect_false (!width)){
            line.touch (); 

            //for (int c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++)
            for (  c = this.screen.cur.col; c <  this.ncol && line.t[c] == ""; c++){  
                  line.t[c] = ' ';
                  //FONT-FIXME line.r[c] = rend;
                }
            }
      
#if ENABLE_COMBINING
          //removed, I wont be implementing this functionality
#endif
    }
    //FIXME max_it (line->l, screen.cur.col);
      line.l = ma_x(line.l, this.screen.cur.col);
#ifdef DEBUG_STRICT
  assert (this.screen.cur.row >= 0);
#endif
}
/* ------------------------------------------------------------------------- */
/*
 * Process Backspace.  Move back the cursor back a position, wrap if have to 
 * XTERM_SEQ: CTRL-H 
 */
//void rxvt_term::scr_backspace (){ 
rxvt_term.prototype.scr_backspace =function(){ 
    FUNCTION_DEBUG("scr_backspace")
  if (this.screen.cur.col == 0){
      if (this.screen.cur.row > 0){
#ifdef TERMCAP_HAS_BW
          this.screen.cur.col = ncol - 1;
          --this.screen.cur.row;

         this.want_refresh = 1;
#endif
        }
    }
  else
    this.scr_gotorc (0, -1, RELATIVE);
}

/* ------------------------------------------------------------------------- */
/*
 * Process Horizontal Tab 
 * count: +ve = forward; -ve = backwards 
 * XTERM_SEQ: CTRL-I 
 */
//void rxvt_term::scr_tab (int count, bool ht) 
rxvt_term.prototype.scr_tab =function( count, ht){ 
    FUNCTION_DEBUG("scr_tab")
  var i, x; 

 this.want_refresh = 1;
  i = x = this.screen.cur.col;

  if (count == 0)
    return;
  else if (count > 0){
      //FIXME line_t &l =  ROW(this.screen.cur.row);
      var l =  ROW(this.screen.cur.row);
      var base_rend= l.r[i];  //rend_t base_rend = l.r[i];
      //FIXME ht &= l.t[i] == ' ';  //FIXME

      for (; ++i <  this.ncol; )
        if ( this.tabs[i]){
            x = i;

            if (!--count)
              break;
          }
        else
          ht &= l.t[i] == ' '
                && RS_SAME (l.r[i], base_rend);

      if (count)
        x =  this.ncol - 1;

      //store horizontal tab commands as characters inside the text 
      //buffer so they can be selected and pasted.
      if (ht &&  this.option (Opt_pastableTabs)){
          //   base_rend = SET_FONT (base_rend, 0);

          l.modified=true; //l.touch (x);

          i = this.screen.cur.col;

          l.t[i] = '\t';
          //l.r[i] = base_rend;

          while (++i < x){
              l.t[i] = "";// NOCHAR;
              //  l.r[i] = base_rend;
            }
        }
    }
  else /* if (count < 0) */
    {
      for (; --i >= 0; )
        if ( this.tabs[i]){
            x = i;
            if (!++count)
              break;
          }

      if (count)
        x = 0;
    }

  if (x != this.screen.cur.col)
    this.scr_gotorc (0, x, R_RELATIVE);
}

/* ------------------------------------------------------------------------- */
/*
 * Process DEC Back Index 
 * XTERM_SEQ: ESC 6 
 * Move cursor left in row.  If we're at the left boundary, shift everything 
 * in that row right.  Clear left column. 
 */
#if !ENABLE_MINIMAL
//void rxvt_term::scr_backindex (){ 
rxvt_term.prototype.scr_backindex =function(){ 
    FUNCTION_DEBUG("scr_backindex")
  if (this.screen.cur.col > 0)
    this.scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
  else
    this.scr_insdel_chars (1, INSERT); 
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
//void rxvt_term::scr_forwardindex () 
rxvt_term.this.scr_forwardindex =function(){ 
  if (this.screen.cur.col <  this.ncol - 1)
    this.scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
  else{
      var l = ROW(this.screen.cur.row);  //line_t &l = ROW(screen.cur.row);

      l.modified=true; //l.touch ();
      l.is_longer (0);

      this.scr_gotorc (0, 0, R_RELATIVE);
      this.scr_insdel_chars (1, DELETE); 
      this.scr_gotorc (0,  this.ncol - 1, R_RELATIVE);
    }
}
#endif

/* ------------------------------------------------------------------------- */
/*
 * Goto Row/Column 
 */
//void rxvt_term::scr_gotorc (int row, int col, int relative)
rxvt_term.prototype.scr_gotorc =function( row,  col,  relative){  //Im suspsicious
    FUNCTION_DEBUG("scr_gotorc")
  this.want_refresh = 1;
  ZERO_SCROLLBACK ();

  this.screen.cur.col = relative & C_RELATIVE ? this.screen.cur.col + col : col;
  clamp_it (this.screen.cur.col, 0,  this.ncol - 1);

  this.screen.flags &= ~Screen_WrapNext;
  //debugger
  if (relative & R_RELATIVE){
      if (row > 0){
          if (this.screen.cur.row <= this.screen.bscroll
              && (this.screen.cur.row + row) > this.screen.bscroll)
            this.screen.cur.row = this.screen.bscroll;
          else
            this.screen.cur.row += row;
        }
      else if (row < 0){
          if (this.screen.cur.row >= this.screen.tscroll
              && (this.screen.cur.row + row) < this.screen.tscroll)
            this.screen.cur.row = this.screen.tscroll;
          else
            this.screen.cur.row += row;
        }
    }
  else{
      if (this.screen.flags & Screen_Relative){
          /* relative origin mode */
          this.screen.cur.row = row + this.screen.tscroll;
          mi_n (this.screen.cur.row, this.screen.bscroll);
        }
      else
        this.screen.cur.row = row;
    }

  clamp_it (this.screen.cur.row, 0, this.nrow - 1);
}

/* ------------------------------------------------------------------------- */
/*
 * direction should be UP or DN 
 */
    //void rxvt_term::scr_index (enum page_dirn direction) 
rxvt_term.prototype.scr_index =function(direction){ 
    FUNCTION_DEBUG("scr_index")
    var dirn;     

 this.want_refresh = 1;
  ZERO_SCROLLBACK ();

  dirn = ((direction == UP) ? 1 : -1);

  this.screen.flags &= ~Screen_WrapNext;

  if ((this.screen.cur.row == this.screen.bscroll && direction == UP)
      || (this.screen.cur.row == this.screen.tscroll && direction == DN))
    this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, dirn);
  else
    this.screen.cur.row += dirn;

  clamp_it (this.screen.cur.row, 0, this.nrow - 1);
   this.selection_check (0);
}

/* ------------------------------------------------------------------------- */
/*
 * Erase part or whole of a line 
 * XTERM_SEQ: Clear line to right: ESC [ 0 K 
 * XTERM_SEQ: Clear line to left : ESC [ 1 K 
 * XTERM_SEQ: Clear whole line   : ESC [ 2 K 
 * extension: clear to right unless wrapped: ESC [ 3 K 
 */
//void rxvt_term::scr_erase_line (int mode){ 
rxvt_term.prototype.scr_erase_line =function( mode){ 
    FUNCTION_DEBUG("scr_erase_line")
    var    col, num; 
 
    this.want_refresh = 1;
    ZERO_SCROLLBACK ();

    this.selection_check (1);

    line = ROW(this.screen.cur.row);  //line_t &line = ROW(screen.cur.row);

    line.modified=true;//line.touch ();
    line.is_longer (0);
 
    switch (mode){
       case 3:
           CASE_DEBUG("case 3:")
        if (this.screen.flags & Screen_WrapNext)
          return;

        /* fall through */

      case 0:                     /* erase to end of line */
          CASE_DEBUG("case 0:")
        col = this.screen.cur.col;
        num =  this.ncol - col;
        line.l = mi_n(line.l, col);  //min_it (line.l, col);

        if (ROWCOL_IN_ROW_AT_OR_AFTER ( this.selection.beg, this.screen.cur)
            || ROWCOL_IN_ROW_AT_OR_AFTER ( this.selection.end, this.screen.cur))
          CLEAR_SELECTION ();
        break;

      case 1:                     /* erase to beginning of line */
          CASE_DEBUG("case 1:")
        col = 0;
        num = this.screen.cur.col + 1;

        if (ROWCOL_IN_ROW_AT_OR_BEFORE ( this.selection.beg, this.screen.cur)
            || ROWCOL_IN_ROW_AT_OR_BEFORE ( this.selection.end, this.screen.cur))
          CLEAR_SELECTION ();
        break;

      case 2:                     /* erase whole line */
          CASE_DEBUG("case 2:")
        col = 0;
        num =  this.ncol;
        line.l = 0;
        if ( this.selection.beg.row <= this.screen.cur.row
            &&  this.selection.end.row >= this.screen.cur.row)
          CLEAR_SELECTION ();
        break;
      default:
        return;
    }

  line =  this.scr_blank_line (line, col, num, rstyle);  //scr_blank_line (line, col, num, rstyle);
}

/* ------------------------------------------------------------------------- */
/*
 * Erase part of whole of the screen 
 * XTERM_SEQ: Clear screen after cursor : ESC [ 0 J 
 * XTERM_SEQ: Clear screen before cursor: ESC [ 1 J 
 * XTERM_SEQ: Clear whole screen        : ESC [ 2 J 
 */
//void rxvt_term::scr_erase_screen (int mode) 
rxvt_term.prototype.scr_erase_screen =function( mode){ 
    FUNCTION_DEBUG("scr_erase_screen")
 var    num;  //int num;
 var   row;  //int32_t row;
 var  ren;  //rend_t ren;
 var  gcvalue;//XGCValues gcvalue; 
 //console.log("scr_erase_screen");
 this.want_refresh = 1;
  ZERO_SCROLLBACK ();
 // mode=2;
  switch (mode){
      case 0:                     /* erase to end of screen */
          CASE_DEBUG("case 0:")
         this.selection_check (1);
        this.scr_erase_line (0);
        row = this.screen.cur.row + 1;    /* possible OOB */
        num = this.nrow - row;
        break;
      case 1:                     /* erase to beginning of screen */
          CASE_DEBUG("case 1:")
         this.selection_check (3);
        this.scr_erase_line (1);
        row = 0;
        num = this.screen.cur.row;
        break;
      case 2:                     /* erase whole screen */
          CASE_DEBUG("case 2:")
         this.selection_check (3);
        row = 0;
        num = this.nrow;
        break;
      default:
        return;
    }

  if ( this.selection.op &&  this.current_screen ==  this.selection.screen
      && (( this.selection.beg.row >= row &&  this.selection.beg.row <= row + num)
          || ( this.selection.end.row >= row
              &&  this.selection.end.row <= row + num)))
    CLEAR_SELECTION ();

  if (row >= this.nrow) /* Out Of Bounds */
    return;

 num = mi_n(num, this.nrow - row);  //min_it (num, this.nrow - row);
 /*
  //TODO: the code below does not work when  this.view_start != 0
  //the workaround is to disable the clear and use a normal refresh
  //when  this.view_start != 0. mysterious.
  if (rstyle & (RS_RVid | RS_Uline))
    ren =  ~RS_None;  //ren = (rend_t) ~RS_None;
  else if (GET_BASEBG (rstyle) == Color_bg){
      ren = DEFAULT_RSTYLE;

      if ( this.mapped && ! this.view_start) {}
          //        XClearArea (dpy, vt, 0,
          //          Row2Pixel (row -  this.view_start), width,  //Row2Pixel (row -  this.view_start), (unsigned int)width,
          //          Height2Pixel (num), False);  //(unsigned int)Height2Pixel (num), False);
    }
  else{
      ren = rstyle & (RS_fgMask | RS_bgMask);
      //REWRITE:
      if ( this.mapped && ! this.view_start){
          gcvalue.foreground = pix_colors[bgcolor_of (rstyle)];
          XChangeGC (dpy, gc, GCForeground, gcvalue);
          //          XFillRectangle (dpy, vt, gc,
          //                0, Row2Pixel (row -  this.view_start),
          //                width,  //(unsigned int)width,   ###  c_keyword c_cast
          //                Height2Pixel (num));  //(unsigned int)Height2Pixel (num));
          //gcvalue.foreground = pix_colors[Color_fg];
          //XChangeGC (dpy, gc, GCForeground, &gcvalue);
        }
    }
*/
  for (; num--; row++){
      var selected_row =  ROW(row);
      this.scr_blank_screen_mem (ROW(row), rstyle);
      /*
        this is causing errors with scr_blank_line getting an undefined variable
this.drawn_buf[row], and trying to access .t on it , for nwo we will skip it
      if (! this.view_start)
        this.scr_blank_line ( this.drawn_buf [row], 0,  this.ncol, ren);
      */
    }
}

#if !ENABLE_MINIMAL
//void rxvt_term::scr_erase_savelines (){ 
rxvt_term.prototype.scr_erase_savelines =function(){ 
    FUNCTION_DEBUG("scr_erase_savelines")
 this.want_refresh = 1;
  ZERO_SCROLLBACK ();

   this.top_row = 0;
}
#endif

/* ------------------------------------------------------------------------- */
/*
 * Fill the screen with `E's 
 * XTERM_SEQ: Screen Alignment Test: ESC # 8 
 */
//void rxvt_term::scr_E () 
rxvt_term.prototype.scr_E =function(){ 
    FUNCTION_DEBUG("scr_E")
    //REWRITE
    
 var    fs;  //rend_t fs;   ###  c_keyword js_style_variables

  this.want_refresh = 1;
  ZERO_SCROLLBACK ();

  this.num_scr_allow = 0;
   this.selection_check (3);

 //  fs = SET_FONT (rstyle, FONTSET (rstyle).find_font ('E'));
 for (var row = this.nrow; row--; ){  //for (int row = nrow; row--; )
     var line = ROW(row); //line_t &line = ROW(row);

         fill_text (line.t, 0, 'E',  this.ncol); //FIXED
         //var r1 = line.r, r1_i =0;  //rend_t *r1 = line.r;  

         //for (var j =  this.ncol; j--; )  //for (int j =  this.ncol; j--; )  
          //   line.r[r1_i++] = fs;  // *r1++ = f

      line.is_longer (0);
      line.modified=true; //line.touch ( this.ncol);
    }

}

/* ------------------------------------------------------------------------- */
/*
 * Insert/Delete <count> lines 
 */
//void rxvt_term::scr_insdel_lines (int count, int insdel){ 
rxvt_term.prototype.scr_insdel_lines =function( count,  insdel){ 
    FUNCTION_DEBUG("scr_insdel_lines")
    var end;  //int end;   ###  c_keyword js_style_variables

  ZERO_SCROLLBACK ();

   this.selection_check (1);

  if (this.screen.cur.row > this.screen.bscroll)
    return;

  end = this.screen.bscroll - this.screen.cur.row + 1;
  if (count > end){
      if (insdel == DELETE)
        return;
      else if (insdel == INSERT)
        count = end;
    }

  this.scr_do_wrap ();

    this.scr_scroll_text (this.screen.cur.row, this.screen.bscroll, insdel * count); 
}

/* ------------------------------------------------------------------------- */
/*
 * Insert/Delete <count> characters from the current position 
 */
//void rxvt_term::scr_insdel_chars (int count, int insdel) 
rxvt_term.prototype.scr_insdel_chars =function( count,  insdel){ 
    FUNCTION_DEBUG("scr_insdel_chars")
    this.want_refresh = 1;
    ZERO_SCROLLBACK ();

    if (count <= 0)
        return;

    this.scr_do_wrap ();

    this.selection_check (1);
    count = mi_n(count,  this.ncol - this.screen.cur.col);  //min_it (count,  this.ncol - screen.cur.col);

    var row= this.screen.cur.row;   //int row = screen.cur.row;   ###  js_style_variables 

    var line = ROW(row);  //line_t *line = &ROW(row);   ### js_style_variables  possible_pointer  FIXME

    line.modified=true; //line.touch ();
    line.is_longer (0);

    //nuke wide spanning the start
    if (line.t[this.screen.cur.col] == NOCHAR)
        this.scr_kill_char ( line, this.screen.cur.col);  //scr_kill_char (*line, screen.cur.col);   ###  c_keyword possible_pointer 

    switch (insdel){
        case INSERT:
            CASE_DEBUG("case INSERT:")
            line.l = mi_n (line.l + count,  this.ncol);
        if (line.t[this.screen.cur.col] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col);  //scr_kill_char (*line, screen.cur.col);   ###  c_keyword possible_pointer 

         for (var col =  this.ncol - 1; (col - count) >= this.screen.cur.col; col--){  //for (int col =  this.ncol - 1; (col - count) >= screen.cur.col; col--){   ### js_style_variables  c_keyword 
            line.t[col] = line.t[col - count];
            line.r[col] = line.r[col - count];
          }

        if ( this.selection.op &&  this.current_screen ==  this.selection.screen
            && ROWCOL_IN_ROW_AT_OR_AFTER ( this.selection.beg, this.screen.cur)){
            if ( this.selection.end.row != this.screen.cur.row
                || ( this.selection.end.col + count >=  this.ncol))
              CLEAR_SELECTION ();
            else{
                /* shift  this.selection */
                 this.selection.beg.col  += count;
                 this.selection.mark.col += count; /* XXX: yes? */
                 this.selection.end.col  += count;
              }
          }

        this.scr_blank_line ( line, this.screen.cur.col, count, rstyle);  //scr_blank_line (*line, screen.cur.col, count, rstyle);   ###  possible_pointer 
        break;

      case ERASE:
          CASE_DEBUG("case ERASE:")
        this.screen.cur.col += count;     /* don't worry if >  this.ncol */
         this.selection_check (1);
        this.screen.cur.col -= count;

        //nuke wide char after the end 
        if (this.screen.cur.col + count <  this.ncol && line.t[this.screen.cur.col + count] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col + count);  //scr_kill_char (*line, screen.cur.col + count);   ###  c_keyword possible_pointer 

        this.scr_blank_line ( line, this.screen.cur.col, count, rstyle);  //scr_blank_line (*line, screen.cur.col, count, rstyle);   ###  possible_pointer 
        break;

      case DELETE:
          CASE_DEBUG("case DELETE:")
        line.l = ma_x (line.l - count, 0);

        //nuke wide char spanning the end 
        if (this.screen.cur.col + count <  this.ncol && line.t[this.screen.cur.col + count] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col + count);  //scr_kill_char (*line, screen.cur.col + count);   ###  c_keyword possible_pointer 

         for ( col = this.screen.cur.col; (col + count) <  this.ncol; col++){  //for (int col = screen.cur.col; (col + count) <  this.ncol; col++){   ### js_style_variables  c_keyword 
           line.t[col] = line.t[col + count];  //line->t[col] = line->t[col + count];
           line.r[col] = line.r[col + count];  //line->r[col] = line->r[col + count];
          }

         this.scr_blank_line ( line,  this.ncol - count, count, rstyle);  //scr_blank_line (*line,  this.ncol - count, count, rstyle);   ###  possible_pointer 

        if ( this.selection.op &&  this.current_screen ==  this.selection.screen
            && ROWCOL_IN_ROW_AT_OR_AFTER ( this.selection.beg, this.screen.cur)){
            if ( this.selection.end.row != this.screen.cur.row
                || (this.screen.cur.col >=  this.selection.beg.col - count)
                ||  this.selection.end.col >=  this.ncol)
              CLEAR_SELECTION ();
            else{
                /* shift  this.selection */
                 this.selection.beg.col  -= count;
                 this.selection.mark.col -= count; /* XXX: yes? */
                 this.selection.end.col  -= count;
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
//void rxvt_term::scr_scroll_region (int top, int bot){ 
rxvt_term.prototype.scr_scroll_region =function( top,  bot){ 
    FUNCTION_DEBUG("scr_scroll_region")
  top = ma_x(top,0); //FIXED max_it (top, 0);
  bot = mi_n (bot, this.nrow -1); //FIXED min_it (bot, nrow - 1);

  if (top > bot)
    return;

  this.screen.tscroll = top;
  this.screen.bscroll = bot;
  this.scr_gotorc (0, 0, 0);
}

/* ------------------------------------------------------------------------- */
/*
 * Make the cursor visible/invisible 
 * XTERM_SEQ: Make cursor visible  : ESC [ ? 25 h 
 * XTERM_SEQ: Make cursor invisible: ESC [ ? 25 l 
 */
//void rxvt_term::scr_cursor_visible (int mode) 
rxvt_term.prototype.scr_cursor_visible =function( mode){ 
    FUNCTION_DEBUG("scr_cursor_visible")
 this.want_refresh = 1;

  if (mode)
    this.screen.flags |= Screen_VisibleCursor;
  else
    this.screen.flags &= ~Screen_VisibleCursor;
}

/* ------------------------------------------------------------------------- */
/*
 * Set/unset automatic wrapping 
 * XTERM_SEQ: Set Wraparound  : ESC [ ? 7 h 
 * XTERM_SEQ: Unset Wraparound: ESC [ ? 7 l 
 */
//void rxvt_term::scr_autowrap (int mode){ 
rxvt_term.prototype.scr_autowrap =function( mode){ 
    FUNCTION_DEBUG("scr_autowrap")
  if (mode)
    this.screen.flags |= Screen_Autowrap;
  else
    this.screen.flags &= ~(Screen_Autowrap | Screen_WrapNext);
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
//void rxvt_term::scr_relative_origin (int mode) 
rxvt_term.prototype.scr_relative_origin =function( mode){ 
    FUNCTION_DEBUG("scr_relative_origin")
  if (mode)
    this.screen.flags |= Screen_Relative;
  else
    this.screen.flags &= ~Screen_Relative;

  this.scr_gotorc (0, 0, 0);
}

/* ------------------------------------------------------------------------- */
/*
 * Set insert/replace mode 
 * XTERM_SEQ: Set Insert mode : ESC [ ? 4 h 
 * XTERM_SEQ: Set Replace mode: ESC [ ? 4 l 
 */
//void rxvt_term::scr_insert_mode (int mode){ 
rxvt_term.prototype.scr_insert_mode =function( mode){ 
    FUNCTION_DEBUG("scr_insert_mode")
  if (mode)
    this.screen.flags |= Screen_Insert;
  else
    this.screen.flags &= ~Screen_Insert;
}

/* ------------------------------------------------------------------------- */
/*
 * Set/Unset tabs 
 * XTERM_SEQ: Set tab at current column  : ESC H 
 * XTERM_SEQ: Clear tab at current column: ESC [ 0 g 
 * XTERM_SEQ: Clear all tabs             : ESC [ 3 g 
 */
//void rxvt_term::scr_set_tab (int mode) 
rxvt_term.prototype.scr_set_tab =function( mode){ 
    FUNCTION_DEBUG("scr_set_tab")
  if (mode < 0)
    memset ( this.tabs, 0,  this.ncol);
  else if (this.screen.cur.col <  this.ncol)
       this.tabs [this.screen.cur.col] = !!mode; //FIXME what does !! mean?
}

/* ------------------------------------------------------------------------- */
/*
 * Set reverse/normal video 
 * XTERM_SEQ: Reverse video: ESC [ ? 5 h 
 * XTERM_SEQ: Normal video : ESC [ ? 5 l 
 */
//void rxvt_term::scr_rvideo_mode (bool on){ 
rxvt_term.prototype.scr_rvideo_mode =function(on){ 
    FUNCTION_DEBUG("scr_rvideo_mode")
    /*
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

      this.scr_clear ();
      this.scr_touch (true);
    }
    */
}

/* ------------------------------------------------------------------------- */
/*
 * Report current cursor position 
 * XTERM_SEQ: Report position: ESC [ 6 n 
 */
//FIXED:void rxvt_term::scr_report_position () 
rxvt_term.prototype.scr_report_position =function(){ 
    FUNCTION_DEBUG("scr_report_position")
  this.tt_printf ("\033[%d;%dR", this.screen.cur.row + 1, this.screen.cur.col + 1); 
}

/* ------------------------------------------------------------------------- *
 *                                  FONTS                                    * 
 * ------------------------------------------------------------------------- */ 

/*
 * Set font style 
 */
//FIXED:void rxvt_term::set_font_style (){ 
rxvt_term.prototype.set_font_style =function(){ 
    FUNCTION_DEBUG("set_font_style")
#if 0
  switch ( this.charsets [this.screen.charset]){ 
      case '0':                   /* DEC Special Character & Line Drawing Set */
      CASE_DEBUG("case '0':")
        break;
      case 'A':                   /* United Kingdom (UK) */
      CASE_DEBUG("case 'A':")
        break;
      case 'B':                   /* United States (USASCII) */
      CASE_DEBUG("case 'B':")
        break;
  case '<':                   /* Multinational character set */ 
      CASE_DEBUG("case '<':")
        break;
  case '5':                   /* Finnish character set */ 
      CASE_DEBUG("case '5':")
        break;
  case 'C':                   /* Finnish character set */ 
      CASE_DEBUG("case 'C':")
        break;
  case 'K':                   /* German character set */ 
      CASE_DEBUG("case 'K':")
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
//FIXED:void rxvt_term::scr_charset_choose (int set) 
rxvt_term.prototype.scr_charset_choose =function( set){ 
    FUNCTION_DEBUG("scr_charset_choose")
  this.screen.charset = set; 
  // set_font_style ();
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
//FIXED:void rxvt_term::scr_charset_set (int set, unsigned int ch){ 
rxvt_term.prototype.scr_charset_set =function( set,   ch){ 
    FUNCTION_DEBUG("scr_charset_set")
    this.charsets[set] = ch;  //charsets[set] = (unsigned char)ch;
    //  set_font_style ();
}


/* ------------------------------------------------------------------------- *
 *                        MAJOR SCREEN MANIPULATION                          * 
 * ------------------------------------------------------------------------- */ 

/*
 * refresh matching text. 
 */
//FIXED:bool rxvt_term::scr_refresh_rend (rend_t mask, rend_t value) 
rxvt_term.prototype.scr_refresh_rend =function( mask,  value){ 
    FUNCTION_DEBUG("scr_refresh_rend")
  var found = false;

  for (var i = 0; i < this.nrow; i++){  //for (int i = 0; i < nrow; i++){   ### js_style_variables  c_keyword 
        //rend_t *drp = drawn_buf[i].r;   ###   c_keyword possible_pointer 

       for ( var col = 0; col <  this.ncol; col++, drp++)  //for (int col = 0; col <  this.ncol; col++, drp++)   ### js_style_variables  c_keyword 
           if ((  this.drawn_buf[i].r & mask) == value){  //if ((*drp & mask) == value){   ###  possible_pointer 
            found = true;
             this.drawn_buf[i].r  = ~value;  // *drp = ~value;   ###  possible_pointer 
          }
    }

  return found;
}

/*
 * Refresh an area 
 */
/*
enum {
  PART_BEG = 0,
  PART_END,
  RC_COUNT
};
*/

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_expose (int x, int y, int ewidth, int eheight, bool refresh){ 
rxvt_term.prototype.scr_expose =function( x,  y,  ewidth,  eheight, refresh){ 
    FUNCTION_DEBUG("scr_expose")
    /*
  var PART_BEG = 0, PART_END=1, RC_COUNT=3;
    var i;  //int i;   ### js_style_variables  c_keyword 
  var rc= new Array(RC_COUNT);  //row_col_t rc[RC_COUNT];

  if (!drawn_buf)  //sanity check 
    return;

#ifndef NO_SLOW_LINK_SUPPORT
  if (refresh_type == FAST_REFRESH && !display.is_local){
      y = 0;
      eheight = height;
    }
#endif

  //round down 
  rc[PART_BEG].col = Pixel2Col (x);
  rc[PART_BEG].row = Pixel2Row (y);
  //round up 
  rc[PART_END].col = Pixel2Width (x + ewidth  + fwidth  - 1);
  rc[PART_END].row = Pixel2Row   (y + eheight + fheight - 1);

  //sanity checks 
  for (i = PART_BEG; i < RC_COUNT; i++){
    rc[i].col = min(rc[i].col,  this.ncol - 1);  //min_it (rc[i].col,  this.ncol - 1);
    rc[i].row = min(rc[i].row, this.nrow - 1);  //min_it (rc[i].row, nrow - 1);
    }
//TODO: this line somehow causes segfault if scr_expose() is called just after resize
  for (i = rc[PART_BEG].row; i <= rc[PART_END].row; i++)
    fill_text( this.drawn_buf[i].t, rc[PART_BEG].col, 0, rc[PART_END].col - rc[PART_BEG].col + 1); //FIXME this could be wrong

  num_scr_allow = 0;

  if (refresh)
    this.scr_refresh ();
*/
}

/* ------------------------------------------------------------------------- */
/*
 * Refresh the entire screen 
 */
//FIXED:void rxvt_term::scr_touch (bool refresh) 
rxvt_term.prototype.scr_touch =function(refresh){ 
    FUNCTION_DEBUG("scr_touch")
  this.scr_expose (0, 0, width, height, refresh);
}

/* ------------------------------------------------------------------------- */
/*
 * Move the display so that the line represented by scrollbar value Y is at 
 * the top of the screen 
 */
//fixed:void rxvt_term::scr_move_to (int y, int len){ 
rxvt_term.prototype.scr_move_to =function( y,  len){ 
    FUNCTION_DEBUG("scr_move_to")
    this.scr_changeview (( this.top_row - this.nrow) * (len - y) / len + (this.nrow - 1)); 
}

/* ------------------------------------------------------------------------- */
/*
 * Page the screen up/down nlines 
 * direction should be UP or DN 
 */
//CMNT:bool rxvt_term::scr_page (enum page_dirn direction, int nlines) 
rxvt_term.prototype.scr_page =function( direction,  nlines){ 
    FUNCTION_DEBUG("scr_page")
    var new_view_start=   //int new_view_start =   ###  js_style_variables 
    direction == UP ?  this.view_start - nlines  //FIXME enum
                    :  this.view_start + nlines;

  return this.scr_changeview (new_view_start);
}

//FIXED:bool rxvt_term::scr_changeview (int new_view_start){ 
rxvt_term.prototype.scr_changeview =function( new_view_start){ 
    FUNCTION_DEBUG("scr_changeview")
  clamp_it (new_view_start,  this.top_row, 0);

  if (new_view_start == this.view_start)
    return false;

  this.num_scr += new_view_start - this.view_start;
  this.view_start = this.new_view_start;
  this.want_refresh = 1;

  HOOK_INVOKE ((this, HOOK_VIEW_CHANGE, DT_INT,  this.view_start, DT_END));

  return true;
}

#ifndef NO_BELL
//REWRITE:void rxvt_term::bell_cb (ev::timer &w, int revents) 
rxvt_term.prototype.bell_cb =function(w,  revents){ 
    FUNCTION_DEBUG("bell_cb")
  console.log("bell");
  /*  rvideo_bell = false;
  this.scr_rvideo_mode (rvideo_mode);
  refresh_check ();
  */
}
#endif

/* ------------------------------------------------------------------------- */
//REWRITE:void rxvt_term::scr_bell (){ 
rxvt_term.prototype.scr_bell =function(){ 
    FUNCTION_DEBUG("scr_bell")
    /*
#ifndef NO_BELL

# ifndef NO_MAPALERT
#  ifdef MAPALERT_OPTION
  if ( this.option (Opt_mapAlert))
#  endif
    XMapWindow (dpy, parent[0]);
# endif

# if ENABLE_FRILLS
  if ( this.option (Opt_urgentOnBell))
    set_urgency (1);
# endif

  if ( this.option (Opt_visualBell)){
      rvideo_bell = true;
      this.scr_rvideo_mode (rvideo_mode);
      flush ();

      bell_ev.start (VISUAL_BELL_DURATION);
    }
  else
    XBell (dpy, 0);
#endif
    */
}

/* ------------------------------------------------------------------------- */
/* ARGSUSED */ //FIXME what does argused mean?
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_printscreen (int fullhist) 
rxvt_term.prototype.scr_printscreen =function( fullhist){ 
    FUNCTION_DEBUG("scr_printscreen")
  console.log(fullhist);
}

/* ------------------------------------------------------------------------- */
/*
 * Refresh the screen 
 * drawn_text/drawn_rend contain the screen information before the update. 
 * screen.text/screen.rend contain what the screen will change to. 
 */
//REWRITE: void rxvt_term::scr_refresh (){ 

rxvt_term.prototype.scr_refresh =function(){ 
    FUNCTION_DEBUG("scr_refresh")
    console.log("scr_refresh called");
    var out_string =[];
    var b=-1;
    var dtr = this.dom_text_rows;
    var dr = this.dom_rows;
    var view_start= this.view_start;
    var total_rows = this.total_rows;
    var term_start = this.term_start;
    var row_buf = this.row_buf;
    var term_view_start = term_start+view_start;
    var mod_total_rows = total_rows % total_rows;
    var row_plus = mod_total_rows + term_view_start;
    var r;
    for(var row = 0; row < this.nrow; row++){
        //r=ROW(this.view_start + row);
        //r=(this.row_buf [((((this).term_start +   this.view_start + row) + ( (this).total_rows)) % ( (this).total_rows))]);
        r=row_buf [row_plus + row];
        dr[row].textContent= r.t.join("");
         //if(b.join("") != dtr[row]) {
        /*
         if(r.modified){
             r.modified=false;
             b=r.t;
             
             out_string =[];
             for (var col =0; col < this.ncol; col++){
                 //out_string[out_string.length]= b[col]?b[col]: ' ';
                 out_string[out_string.length]= b[col];
                 //console.log(b[col]);
             }
             dr[row].textContent= out_string.join("");
             //dr[row].textContent= b.join("");             
             

             //console.log("wrote a row");
         }
        
         else{
             console.log("skipped a row");
         }
         */
    }
    //term_el.innerHTML = 

} 

rxvt_term.prototype.scr_refresh =function(){ 
    FUNCTION_DEBUG("scr_refresh")
    console.log("scr_refresh called ");
#ifndef DEBUG
    var out_string =[];
    var b=-1;
    var dtr = this.dom_text_rows;
    var dr = this.dom_rows;
    var view_start= this.view_start;
    var total_rows = this.total_rows;
    var term_start = this.term_start;
    var row_buf = this.row_buf;
    var term_view_start = term_start+view_start;
    var mod_total_rows = total_rows % total_rows;
    var row_plus = mod_total_rows + term_view_start;
    var r;
    for(var row = 0; row < this.nrow; row++){
        //r=row_buf [row_plus + row];
        r=ROW(this.view_start + row);
        dtr[row]= r.t.join("");
    }
    //console.log(dtr.join("\n"));
    //this.pre_term_el.innerHTML = dtr.join("\n");
    //$("pt")
    document.getElementById("pt").innerHTML = dtr.join("\n");
#endif
} 

//FIXME overloaded_function
// void rxvt_term::scr_remap_chars (line_t &l) 
rxvt_term.prototype.scr_remap_chars =function(l){ 
    FUNCTION_DEBUG("scr_remap_chars")
    //FIXME 
return
/*  if (!l.t)
    return;

  l.touch (); //maybe a bit of an overkill, but it's not performance-relevant

   for (var i =  this.ncol; i--; )  //for (int i =  this.ncol; i--; )   ### js_style_variables  c_keyword 
    l.r[i] = SET_FONT (l.r[i], FONTSET (l.r[i]).find_font (l.t[i]));
*/
}

//FIXED:void rxvt_term::scr_remap_chars (){ 
rxvt_term.prototype.scr_remap_chars =function(){ 
    FUNCTION_DEBUG("scr_remap_chars")
   for ( var  i =  this.total_rows; i--; )  //for (int i =  this.total_rows; i--; )
    this.scr_remap_chars ( this.row_buf [i]); 

   for ( i = this.nrow; i--; ){  //for (int i = nrow; i--; ){
    this.scr_remap_chars ( this.drawn_buf[i]); 
      this.scr_remap_chars ( this.swap_buf[i]); 
    }
}

//REWRITE:void rxvt_term::scr_recolour () 
rxvt_term.prototype.scr_recolour =function(){ 
    FUNCTION_DEBUG("scr_recolour")
#ifdef HAVE_BG_PIXMAP
// bgPixmap.apply ();
#else
/*
  XSetWindowBackground (dpy, parent[0], pix_colors[Color_border]);
  XClearWindow (dpy, parent[0]);
  XSetWindowBackground (dpy, vt, pix_colors[Color_bg]);

  if (scrollBar.win){
     XSetWindowBackground (dpy, scrollBar.win, pix_colors[Color_border]);
     scrollBar.state = STATE_IDLE;
     scrollBar.show (0);
   }
*/
#endif

  //bgPixmap.apply () does not do the following : 
  this.scr_clear ();
  this.scr_touch (true);
this.want_refresh = 1;
}

/* ------------------------------------------------------------------------- */
//REWRITE:void rxvt_term::scr_clear (bool really){ 
rxvt_term.prototype.scr_clear =function( really){ 
    FUNCTION_DEBUG("scr_clear")
  if (! this.mapped)
    return;

  this.num_scr_allow = 0;
  this.want_refresh = 1;

  if (really)
    XClearWindow (dpy, vt);
}

//void rxvt_term::scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2) 
rxvt_term.prototype.scr_xor_rect =function( beg_row,  beg_col,  end_row,  end_col,  rstyle1,  rstyle2){ 
    FUNCTION_DEBUG("scr_xor_rect")
    //FIXME cstyle namespaces
    /*
  var view_end=  this.view_start + this.nrow;   //int view_end = view_start + nrow;
  var row, col;  //int row, col;

  for (row = ma_x (beg_row,  this.view_start); row <= mi_n (end_row, view_end); row++){
//CMNT: possible_pointer ^|             text_t *stp = ROW(row).t; 
        var  stp = ROW(row).t;
//CMNT: c_keyword possible_pointer ^|             rend_t *srp = ROW(row).r; 
        var srp = ROW(row).r;

      for (col = beg_col; col < end_col; col++)
        srp[col] ^= rstyle1;

      while (col-- > beg_col && (stp[col] == NOCHAR || unicode::is_space (stp[col])))  //FIXME C++ stuff
        srp[col] ^= rstyle2;

      if (++col < end_col)
        srp[col] ^= rstyle2;
    }
    */
}

//void rxvt_term::scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle) 
rxvt_term.prototype.scr_xor_span =function( beg_row,  beg_col,  end_row,  end_col,  rstyle){ 
    FUNCTION_DEBUG("scr_xor_span")
  var view_end= this.view_start + this.nrow;   //int view_end =  this.view_start + nrow;
  var row, col;  //int row, col;

  if (beg_row >=  this.view_start){
      col = beg_col;
      row = beg_row;
    }
  else{
      col = 0;
      row =  this.view_start;
    }

  for (; row < mi_n (end_row, view_end); row++, col = 0)
//for (rend_t *srp = ROW(row).r; col <  this.ncol; col++) 
    for (  srp = ROW(row).r; col <  this.ncol; col++)
      srp[col] ^= rstyle;

  if (row == end_row)
//for (rend_t *srp = ROW(row).r; col < end_col; col++) 
    for (  srp = ROW(row).r; col < end_col; col++)
      srp[col] ^= rstyle;
}

/* ------------------------------------------------------------------------- */
//void rxvt_term::scr_reverse_selection () 
rxvt_term.prototype.scr_reverse_selection =function(){ 
    FUNCTION_DEBUG("scr_reverse_selection")
  if ( this.selection.op
      &&  this.current_screen ==  this.selection.screen
      &&  this.selection.end.row >=  this.view_start){
#if !ENABLE_MINIMAL
      if ( this.selection.rect)
        this.scr_xor_rect ( this.selection.beg.row,  this.selection.beg.col,
                       this.selection.end.row,  this.selection.end.col,
                      RS_RVid, RS_RVid | RS_Uline);
      else
#endif
        this.scr_xor_span ( this.selection.beg.row,  this.selection.beg.col,
                       this.selection.end.row,  this.selection.end.col,
                      RS_RVid);
    }
}
//REMOVED:void rxvt_term::selection_check (int check_more) 
    rxvt_term.prototype.selection_check = function(check_more){
        FUNCTION_DEBUG("selection_check")
        return;
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
rxvt_term.prototype.scr_dump =function( fd){ 
FUNCTION_DEBUG("scr_dump")
//POSTPONED: c_keyword ^|         int             row, wrote; 
               row, wrote;
//POSTPONED: c_keyword ^|         unsigned int    width, towrite; 
       width, towrite;
//POSTPONED: c_keyword ^|         char            r1[] = "\n"; 
              r1[] = "\n";

  for (row =  this.saveLines +  this.top_row;
       row <  this.saveLines + this.nrow - 1; row++){
      width =  this.row_buf[row].l >= 0 ?  this.row_buf[row].l
              :  this.ncol;
      for (towrite = width; towrite; towrite -= wrote){
          wrote = write (fd, & ( this.row_buf[row].t[width - towrite]),
                        towrite);
          if (wrote < 0)
              return;         //XXX: death, no report 
        }
      if ( this.row_buf[row].l >= 0)
        if (write (fd, r1, 1) <= 0)
            return; //XXX: death, no report 
    }
}
*/
#endif

//REMOVED:void rxvt_term::paste (char *data, unsigned int len){ 
//REMOVED:void rxvt_term::selection_paste (Window win, Atom prop, bool delete_prop) 
//REMOVED:void rxvt_term::incr_cb (ev::timer &w, int revents){ 
//REMOVED:void rxvt_term::selection_property (Window win, Atom prop) 
//REMOVED:void rxvt_term::selection_request (Time tm, int selnum){ 
//REMOVED:int rxvt_term::selection_request_other (Atom target, int selnum) 
//REMOVED:void rxvt_term::selection_clear (){ 
//REMOVED:void rxvt_term::selection_make (Time tm) 
//REMOVED:bool rxvt_term::selection_grab (Time tm){ 
//REMOVED:void rxvt_term::selection_click (int clicks, int x, int y) 
//REMOVED:void rxvt_term::selection_start_colrow (int col, int row){ 
//#define DELIMIT_TEXT(x)                                               \
//REMOVED:(unicode::is_space (x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cutchars], (x))) 
//(unicode.is_space =function(x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cuts], (x))) 
//#define DELIMIT_REND(x)        1

//REMOVED:void rxvt_term::selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret) 
//REMOVED:void rxvt_term::selection_extend (int x, int y, int flag){ 
//REMOVED:void rxvt_term::selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange) 
//REMOVED:void rxvt_term::selection_remove_trailing_spaces (){ 
//REMOVED:void rxvt_term::selection_rotate (int x, int y) 
//REMOVED:void rxvt_term::selection_send (const XSelectionRequestEvent &rq){ 
#ifdef USE_XIM
//REMOVED:void rxvt_term::im_set_position (XPoint &pos) 
#endif
    //This is removed because ENABLE_OVERLAY is tied to iso-14755 which is a complicated standard that I wont be supporting
    //it can be read about here http://en.wikipedia.org/wiki/Unicode_input
#if ENABLE_OVERLAY
//REMOVED:void rxvt_term::scr_overlay_new (int x, int y, int w, int h){ 
//REMOVED:void rxvt_term::scr_overlay_off () 
//REMOVED:void rxvt_term::scr_overlay_set (int x, int y, text_t text, rend_t rend){ 
//REMOVED:void rxvt_term::scr_overlay_set (int x, int y, const char *s) 
//REMOVED:void rxvt_term::scr_overlay_set (int x, int y, const wchar_t *s){ 
//REMOVED:void rxvt_term::scr_swap_overlay () 
#endif

