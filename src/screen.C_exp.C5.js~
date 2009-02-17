/*
In this version of the file C3
I removed most of the erranoues possible pointer comments
In this version of the file C4
I removed a bunch of functions
// removed rxvt_term.selection_request =function(Time tm,  selnum){ 
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::paste (char *data, unsigned int len){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_paste (Window win, Atom prop, bool delete_prop){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::incr_cb (ev::timer &w, int revents){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_property (Window win, Atom prop){ 
//CMNT: js_style_functions c_keyword ^|       int rxvt_term::selection_request_other (Atom target, int selnum){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_clear (){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_make (Time tm){ 
//CMNT: js_style_functions ^|       bool rxvt_term::selection_grab (Time tm){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_click (int clicks, int x, int y){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_start_colrow (int col, int row){ 
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_extend (int x, int y, int flag){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_rotate (int x, int y){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_send (const XSelectionRequestEvent &rq){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_overlay_new (int x, int y, int w, int h){ 


 */
  // screen.C

//CMNT: c_keyword ^|         void lalloc (line_t &l) const 
 lalloc (l) 
  {
//CMNT: possible_pointer ^|           l.t = (text_t *)talloc->alloc (); 
    l.t = (text_t  ) talloc->alloc ();
//CMNT: c_keyword possible_pointer ^|           l.r = (rend_t *)ralloc->alloc (); 
    l.r = (  ) ralloc->alloc ();
  }
      //     # 1316 "rxvt.h"
//CMNT: c_keyword ^|         void lresize (line_t &l) const 
 lresize (line_t &l) 
  {
    if (!l.t)
      return;

//CMNT: possible_pointer ^|           l.t = (text_t *)talloc->alloc (l.t, prev_ncol * sizeof (text_t)); 
    l.t = (text_t  ) talloc->alloc (l.t, prev_ncol    sizeof (text_t));
//CMNT: c_keyword possible_pointer remove_casts ^|           l.r = (rend_t *)ralloc->alloc (l.r, prev_ncol * sizeof (rend_t)); 
    l.r = (  ) ralloc->alloc (l.r, prev_ncol    sizeof );

    l.l = min (l.l, ncol);

    if (ncol > prev_ncol)
      scr_blank_line (l, prev_ncol, ncol - prev_ncol, (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
  }

//CMNT: c_keyword ^|         int fgcolor_of (rend_t r) const 
   fgcolor_of ( r) 
  {
//CMNT: js_style_variables ^|           int base = (((r) & 0x0000007fUL /* 128 colors*/)); 
 var base= (((r) & 0x0000007fUL /* 128 colors*/)); 

    if (r & 0x00004000UL /* value 1*/



//CMNT: c_keyword ^|               && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR))) 
        && (( )(base) - ( )(minCOLOR) <= ( )(minBrightCOLOR) - ( )(minCOLOR)))
      base += minBrightCOLOR - minCOLOR;

    return base;
  }

//CMNT: c_keyword ^|         int bgcolor_of (rend_t r) const 
   bgcolor_of ( r) 
  {
//CMNT: js_style_variables ^|           int base = (((r) & 0x00003f80UL /* 128 colors*/)>>7 /* 0 .. maxTermCOLOR*/); 
 var base= (((r) & 0x00003f80UL /* 128 colors*/)>>7 /* 0 .. maxTermCOLOR*/); 

    if (r & 0x00010000UL /* blink*/



//CMNT: c_keyword ^|               && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR))) 
        && (( )(base) - ( )(minCOLOR) <= ( )(minBrightCOLOR) - ( )(minCOLOR)))
      base += minBrightCOLOR - minCOLOR;

    return base;
  }

//CMNT: c_keyword ^|         bool option (uint8_t opt) const 
  bool option (u8_t opt) 
  {
    if (!opt)
      return 0;

    --opt;
    return options[opt >> 3] & (1 << (opt & 7));
  }

//CMNT: c_keyword ^|         void set_option (uint8_t opt, bool set = true){ 
 set_option (u8_t opt, bool set = true){
    if (!opt)
      return;

    --opt;
    if (set)
      options[opt >> 3] |= (1 << (opt & 7));
    else
      options[opt >> 3] &= ~(1 << (opt & 7));
  }

//CMNT: c_keyword ^|         void set_privmode (unsigned bit, int set){ 
 set_privmode ( bit,  set){
    if (set)
      priv_modes |= bit;
    else
      priv_modes &= ~bit;
  }

  // modifies first argument(!)
//CMNT: c_keyword possible_pointer ^|         void paste (char *data, unsigned int len) ; 
 paste (  d ata,   len) ;
//CMNT: c_keyword ^|         void scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs) const ; 
 scr_blank_line (line_t &l,   col,   width,  efs)  ;
//CMNT: c_keyword ^|         void scr_blank_screen_mem (line_t &l, rend_t efs) const ; 
 scr_blank_screen_mem (line_t &l,  efs)  ;
//CMNT: c_keyword ^|         void scr_kill_char (line_t &l, int col) const ; 
 scr_kill_ (line_t &l,  col)  ;
//CMNT: c_keyword ^|         int scr_scroll_text (int row1, int row2, int count) ; 
   scr_scroll_text ( row1,  row2,  count) ;
//CMNT: c_keyword ^|         void scr_reset (); 
 scr_reset ();
//CMNT: c_keyword ^|         void scr_release () ; 
 scr_release () ;
//CMNT: c_keyword ^|         void scr_clear (bool really = false) ; 
 scr_clear (bool really = false) ;
//CMNT: c_keyword ^|         void scr_refresh () ; 
 scr_refresh () ;
//CMNT: c_keyword ^|         bool scr_refresh_rend (rend_t mask, rend_t value) ; 
  bool scr_refresh_rend ( mask,  value) ;
//CMNT: c_keyword ^|         void scr_erase_screen (int mode) ; 
 scr_erase_screen ( mode) ;





//CMNT: c_keyword ^|         void scr_touch (bool refresh) ; 
 scr_touch (bool refresh) ;
//CMNT: c_keyword ^|         void scr_expose (int x, int y, int width, int height, bool refresh) ; 
 scr_expose ( x,  y,  width,  height, bool refresh) ;
//CMNT: c_keyword ^|         void scr_recolour () ; 
 scr_recolour () ;
//CMNT: c_keyword ^|         void scr_remap_chars () ; 
 scr_remap_s () ;
//CMNT: c_keyword ^|         void scr_remap_chars (line_t &l) ; 
 scr_remap_s (line_t &l) ;

  enum cursor_mode { SAVE, RESTORE };


scr_poweron (); //         void scr_poweron (); 

scr_soft_reset () ; //         void scr_soft_reset () ; 

scr_cursor (cursor_mode mode) ; //         void scr_cursor (cursor_mode mode) ; 

scr_do_wrap () ; //         void scr_do_wrap () ; 

scr_swap_screen () ; //         void scr_swap_screen () ; 

scr_change_screen ( scrn); //         void scr_change_screen (int scrn); 

scr_color (  color,  fgbg) ; //         void scr_color (unsigned int color, int fgbg) ; 

scr_rendition ( set,  style) ; //         void scr_rendition (int set, int style) ; 

scr_add_lines (   s tr,  len,  minlines = 0) ; //         void scr_add_lines (const wchar_t *str, int len, int minlines = 0) ; 

scr_backspace () ; //         void scr_backspace () ; 

scr_tab ( count, bool ht = false) ; //         void scr_tab (int count, bool ht = false) ; 

scr_gotorc ( row,  col,  relative) ; //         void scr_gotorc (int row, int col, int relative) ; 

scr_index (enum page_dirn direction) ; //         void scr_index (enum page_dirn direction) ; 

scr_erase_line ( mode) ; //         void scr_erase_line (int mode) ; 

scr_E () ; //         void scr_E () ; 

scr_insdel_lines ( count,  insdel) ; //         void scr_insdel_lines (int count, int insdel) ; 

scr_insdel_s ( count,  insdel) ; //         void scr_insdel_chars (int count, int insdel) ; 

scr_scroll_region ( top,  bot) ; //         void scr_scroll_region (int top, int bot) ; 

scr_cursor_visible ( mode) ; //         void scr_cursor_visible (int mode) ; 

scr_autowrap ( mode) ; //         void scr_autowrap (int mode) ; 

scr_relative_origin ( mode) ; //         void scr_relative_origin (int mode) ; 

scr_insert_mode ( mode) ; //         void scr_insert_mode (int mode) ; 

scr_set_tab ( mode) ; //         void scr_set_tab (int mode) ; 

scr_rvideo_mode (bool on) ; //         void scr_rvideo_mode (bool on) ; 

scr_report_position () ; //         void scr_report_position () ; 

set_font_style () ; //         void set_font_style () ; 

scr_set_choose ( set) ; //         void scr_charset_choose (int set) ; 

scr_set_set ( set,   ch) ; //         void scr_charset_set (int set, unsigned int ch) ; 

scr_move_to ( y,  len) ; //         void scr_move_to (int y, int len) ; 

bool scr_page (enum page_dirn direction,  nlines) ; //         bool scr_page (enum page_dirn direction, int nlines) ; 

bool scr_changeview ( new_view_start) ; //         bool scr_changeview (int new_view_start) ; 

scr_bell () ; //         void scr_bell () ; 

scr_prscreen ( fullhist) ; //         void scr_printscreen (int fullhist) ; 

scr_xor_rect ( beg_row,  beg_col,  end_row,  end_col,  rstyle1,  rstyle2) ; //         void scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2) ; 

scr_xor_span ( beg_row,  beg_col,  end_row,  end_col,  rstyle) ; //         void scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle) ; 

scr_reverse_selection () ; //         void scr_reverse_selection () ; 

scr_dump ( fd) ; //         void scr_dump (int fd) ; 


selection_check ( check_more) ; //         void selection_check (int check_more) ; 

selection_paste (Window win, Atom prop, bool delete_prop) ; //         void selection_paste (Window win, Atom prop, bool delete_prop) ; 

selection_property (Window win, Atom prop) ; //         void selection_property (Window win, Atom prop) ; 

selection_request (Time tm,  selnum = 0x01) ; //         void selection_request (Time tm, int selnum = 0x01) ; 

selection_request_other (Atom target,  selnum) ; //         int selection_request_other (Atom target, int selnum) ; 

selection_clear () ; //         void selection_clear () ; 

selection_make (Time tm); //         void selection_make (Time tm); 
  bool selection_grab (Time tm) ;

selection_start_colrow ( col,  row) ; //         void selection_start_colrow (int col, int row) ; 

selection_delimit_word (enum page_dirn dirn,  row_col_t  m ark, row_col_t  r et) ; //         void selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret) ; 

selection_extend_colrow (32_t col, 32_t row,  button3,  buttonpress,  clickchange) ; //         void selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange) ; 

selection_remove_trailing_spaces () ; //         void selection_remove_trailing_spaces () ; 

selection_send ( XSelectionRequestEvent &rq) ; //         void selection_send (const XSelectionRequestEvent &rq) ; 

selection_click ( clicks,  x,  y) ; //         void selection_click (int clicks, int x, int y) ; 

selection_extend ( x,  y,  flag) ; //         void selection_extend (int x, int y, int flag) ; 

selection_rotate ( x,  y) ; //         void selection_rotate (int x, int y) ; 

  // xdefaults.C
//CMNT: c_keyword possible_pointer ^|         void get_options (int argc, const char *const *argv); 
 get_options ( argc,    c onst  a rgv);
//CMNT: c_keyword possible_pointer ^|         int parse_keysym (const char *str, const char *arg); 
   parse_keysym (   s tr,    a rg);
//CMNT: c_keyword possible_pointer ^|         const char *x_resource (const char *name); 
     x _resource (   n ame);
//CMNT: c_keyword ^|         void extract_resources (); 
 extract_resources ();
};
      //     # 29 "screen.C" 2
      //     # 1 "rxvtperl.h" 1
/*
 * rxvtperl.h 
 */
      //     # 30 "screen.C" 2

//CMNT: c_keyword ^|             //     # 1 "/usr/include/inttypes.h" 1 3 4 
      //     # 1 "/usr/include/types.h" 1 3 4
/*
 * Copyright (c) 2000, 2001, 2002, 2003, 2004 Apple Computer, Inc. 
 * All rights reserved. 
 *
 * @APPLE_LICENSE_HEADER_START@ 
 *
 * The contents of this file constitute Original Code as defined in and 
 * are subject to the Apple Public Source License Version 1.1 (the 
 * "License").  You may not use this file except in compliance with the 
 * License.  Please obtain a copy of the License at 
 * http://www.apple.com/publicsource and read it before using this file. 
 *
 * This Original Code and all software distributed under the License are 
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER 
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES, 
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the 
 * License for the specific language governing rights and limitations 
 * under the License. 
 *
 * @APPLE_LICENSE_HEADER_END@ 
 */

/*
 * <inttypes.h> -- Standard C header, defined in ISO/IEC 9899:1999 
 * (aka "C99"), section 7.8.   This defines format string conversion 
 * specifiers suitable for use within arguments to fprintf and fscanf 
 * and their ilk. 
 */

/* "C++ implementations should define these macros only when
 *  __STDC_FORMAT_MACROS is defined before <inttypes.h> is included." 
 */
      //     # 32 "screen.C" 2

      //     # 1 "salloc.C" 1
/*----------------------------------------------------------------------*
 * File:	salloc.C 
 *----------------------------------------------------------------------* 
 *
 * All portions of code are copyright by their respective author/s. 
 * Copyright (c) 2003-2006 Marc Lehmann <pcg@goof.com> 
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
 *----------------------------------------------------------------------*/ 





//CMNT: js_style_functions c_keyword ^|       rxvt_salloc::rxvt_salloc (unsigned int size){ 
rxvt_salloc.rxvt_salloc =function(  size){ 
  this->size = size < sizeof (chain) ? sizeof (chain) : size;
  firstline = 0;
  firstblock = 0;
  firstfree = 65536 /* size of basic block to allocate*/;
}

rxvt_salloc::~rxvt_salloc (){
  while (firstblock){
      chain  n ext = firstblock->next; //             chain *next = firstblock->next;  //FIXME
      ::free (firstblock);
      firstblock = next;
    }
}

//CMNT: js_style_functions ^|  void *      rxvt_salloc::alloc (){ 
rxvt_salloc.alloc =function(){ 

    var r ; //         void *r; 

  if (firstline){

      r = (  ) firstline; //             r = (void *)firstline; 
      firstline = firstline->next;
    }
  else{
      if (firstfree + size > 65536 /* size of basic block to allocate*/){
//CMNT: possible_pointer ^|                 chain *next = (chain *)rxvt_malloc ((65536 /* size of basic block to allocate*/ - sizeof (chain)) / size * size + sizeof (chain)); 
          chain  n ext = (chain  ) rxvt_malloc ((65536 /* size of basic block to allocate*/ - sizeof (chain)) / size    size + sizeof (chain));
          next->next = firstblock;
          firstblock = next;
          firstfree = sizeof (chain);
        }

//CMNT: c_keyword possible_pointer ^|             r = (void *) ((char *)firstblock + firstfree); 
      r = (  )  ((  ) firstblock + firstfree);

      firstfree += size;
    }

  return r;
}

//CMNT: js_style_functions c_keyword possible_pointer ^|   void *    rxvt_salloc::alloc (void *data, unsigned int datalen){ 
rxvt_salloc.alloc =function(  d ata,   datalen){ 
//CMNT: js_style_variables possible_pointer ^|         void *s = alloc (); 
 var s= alloc (); 

  if (datalen < size){
      (memcpy)(s,data,datalen);
//CMNT: c_keyword possible_pointer ^|             (memset)((unsigned char *)s + datalen,0,size - datalen); // not strictly required for screen.C 
      (memset)((   ) s + datalen,0,size - datalen); // not strictly required for screen.C
    }
  else
    (memcpy)(s,data,size);

  return s;
}

//CMNT: js_style_functions c_keyword possible_pointer ^|      void rxvt_salloc::free (void *data){ 
rxvt_salloc.free =function(  d ata){ 
  if (!data)
    return;

//CMNT: possible_pointer ^|         chain *line = (chain *)data; 
  chain  l ine = (chain  ) data;
  line->next = firstline;
  firstline = line;
}
      //     # 34 "screen.C" 2

//CMNT: c_keyword possible_pointer ^|       static inline void fill_text (text_t *start, text_t value, int len){ 
 inline fill_text (text_t  s tart, text_t value,  len){
  while (len--)
//CMNT: possible_pointer ^|           *start++ = value; 
     s tart++ = value;
}

/* ------------------------------------------------------------------------- */




/* ------------------------------------------------------------------------- *
 *             GENERAL SCREEN AND SELECTION UPDATE ROUTINES                  * 
 * ------------------------------------------------------------------------- */ 
      //     # 73 "screen.C"
/* these must be row_col_t */
      //     # 87 "screen.C"
/*
 * CLEAR_CHARS: clear <num> chars starting from pixel position <x,y> 
 */






/* ------------------------------------------------------------------------- *
*                        SCREEN `COMMON' ROUTINES                           * 
* ------------------------------------------------------------------------- */ 

/* Fill part/all of a line with blanks. */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs){ 
rxvt_term.scr_blank_line =function(line_t &l,   col,   width,  efs){ 
  if (!l.t){
      lalloc (l);
      col = 0;
      width = ncol;
    }

  l.touch ();

  efs &= ~(0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/); // remove italic etc. fontstyles
  efs = (((efs) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (' ')) << 24));

//CMNT: possible_pointer ^|         text_t *et = l.t + col; 
  text_t  e t = l.t + col;
//CMNT: c_keyword possible_pointer ^|         rend_t *er = l.r + col; 
    e r = l.r + col;

  while (width--){
//CMNT: possible_pointer ^|             *et++ = ' '; 
       e t++ = ' ';
//CMNT: possible_pointer ^|             *er++ = efs; 
       e r++ = efs;
    }
}

/* ------------------------------------------------------------------------- */
/* Fill a full line with blanks - make sure it is allocated first */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_blank_screen_mem (line_t &l, rend_t efs){ 
rxvt_term.scr_blank_screen_mem =function(line_t &l,  efs){ 
  scr_blank_line (l, 0, ncol, efs);

  l.l = 0;
  l.f = 0;
}

//CMNT: c_keyword ^|       // nuke a single wide character at the given column 
// nuke a single wide acter at the given column
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_kill_char (line_t &l, int col){ 
rxvt_term.scr_kill_ =function(line_t &l,  col){ 
  // find begin
  while (col > 0 && l.t[col] == NOCHAR)
    col--;

//CMNT: js_style_variables ^|         rend_t rend = l.r[col] & ~(0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/); 
 var rend= l.r[col] & ~(0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/); 
  rend = (((rend) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (' ')) << 24));

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

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_reset (){ 
rxvt_term.scr_reset =function(){ 
  view_start = 0;
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

//CMNT: js_style_variables ^|         int prev_total_rows = prev_nrow + saveLines; 
 var prev_total_rows= prev_nrow + saveLines; 
  total_rows = nrow + saveLines;

  screen.tscroll = 0;
  screen.bscroll = nrow - 1;

  if (!row_buf){
      /*
//CMNT: possible_pointer ^|              * first time called so just malloc everything: don't rely on realloc 
          first time called so just malloc everything: don't rely on realloc
       */
      top_row = 0;
      term_start = 0;

//CMNT: possible_pointer ^|             talloc = new rxvt_salloc (ncol * sizeof (text_t)); 
      talloc = new rxvt_salloc (ncol    sizeof (text_t));
//CMNT: possible_pointer remove_casts ^|             ralloc = new rxvt_salloc (ncol * sizeof (rend_t)); 
      ralloc = new rxvt_salloc (ncol    sizeof );

//CMNT: possible_pointer ^|             row_buf = (line_t *)rxvt_calloc (total_rows + nrow, sizeof (line_t)); 
      row_buf = (line_t  ) rxvt_calloc (total_rows + nrow, sizeof (line_t));
//CMNT: possible_pointer ^|             drawn_buf = (line_t *)rxvt_calloc (nrow , sizeof (line_t)); 
      drawn_buf = (line_t  ) rxvt_calloc (nrow , sizeof (line_t));
//CMNT: possible_pointer ^|             swap_buf = (line_t *)rxvt_calloc (nrow , sizeof (line_t)); 
      swap_buf = (line_t  ) rxvt_calloc (nrow , sizeof (line_t));

//CMNT: c_keyword ^|             for (int row = nrow; row--; ){ 
      for ( row = nrow; row--; ){
//CMNT: c_keyword ^|                 scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/))); 
          scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
          scr_blank_screen_mem (swap_buf [row], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
          scr_blank_screen_mem (drawn_buf[row], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
        }

//CMNT: c_keyword ^|             (memset)(charsets,'B',sizeof (charsets)); 
      (memset)(sets,'B',sizeof (sets));
      rstyle = (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/));
      screen.flags = ((1<<1) /* cursor visible?                   */ | (1<<2) /* auto-wrap flag                    */);
      screen.cur.row = screen.cur.col = 0;
//CMNT: c_keyword ^|             screen.charset = 0; 
      screen.set = 0;
      current_screen = PRIMARY;
      scr_cursor (SAVE);
      //     # 231 "screen.C"
      selection.text = __null;
      selection.len = 0;
      selection.op = SELECTION_CLEAR;
      selection.screen = PRIMARY;
      selection.clicks = 0;
    }
  else{
      /*
//CMNT: possible_pointer ^|              * add or delete rows as appropriate 
          add or delete rows as appropriate
       */

//CMNT: possible_pointer ^|             rxvt_salloc *old_ta = talloc; talloc = new rxvt_salloc (ncol * sizeof (text_t)); 
      rxvt_salloc  o ld_ta = talloc; talloc = new rxvt_salloc (ncol    sizeof (text_t));
//CMNT: possible_pointer remove_casts ^|             rxvt_salloc *old_ra = ralloc; ralloc = new rxvt_salloc (ncol * sizeof (rend_t)); 
      rxvt_salloc  o ld_ra = ralloc; ralloc = new rxvt_salloc (ncol    sizeof );
      //     # 257 "screen.C"
//CMNT: possible_pointer ^|             drawn_buf = (line_t *)rxvt_realloc (drawn_buf, nrow * sizeof (line_t)); 
      drawn_buf = (line_t  ) rxvt_realloc (drawn_buf, nrow    sizeof (line_t));
//CMNT: possible_pointer ^|             swap_buf = (line_t *)rxvt_realloc (swap_buf , nrow * sizeof (line_t)); 
      swap_buf = (line_t  ) rxvt_realloc (swap_buf , nrow    sizeof (line_t));

//CMNT: c_keyword ^|             for (int row = min (nrow, prev_nrow); row--; ){ 
      for ( row = min (nrow, prev_nrow); row--; ){
          lresize (drawn_buf[row]);
          lresize (swap_buf [row]);
        }

//CMNT: c_keyword ^|             for (int row = prev_nrow; row < nrow; row++){ 
      for ( row = prev_nrow; row < nrow; row++){
          swap_buf [row].clear (); scr_blank_screen_mem (swap_buf [row], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
          drawn_buf[row].clear (); scr_blank_screen_mem (drawn_buf[row], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
        }

//CMNT: possible_pointer ^|             line_t *old_buf = row_buf; 
      line_t  o ld_buf = row_buf;
//CMNT: possible_pointer ^|             row_buf = (line_t *)rxvt_calloc (total_rows + nrow, sizeof (line_t)); 
      row_buf = (line_t  ) rxvt_calloc (total_rows + nrow, sizeof (line_t));

//CMNT: js_style_variables ^|             int p = (((term_start + prev_nrow) + (prev_total_rows)) % (prev_total_rows)); // previous row 
 var p= (((term_start + prev_nrow) + (prev_total_rows)) % (prev_total_rows)); // previous row 
//CMNT: js_style_variables ^|             int pend = (((term_start + top_row) + (prev_total_rows)) % (prev_total_rows)); 
 var pend= (((term_start + top_row) + (prev_total_rows)) % (prev_total_rows)); 
//CMNT: js_style_variables ^|             int q = total_rows; // rewrapped row 
 var q= total_rows; // rewrapped row 

      if (top_row){
          // Re-wrap lines. This is rather ugly, possibly because I am too dumb
          // to come up with a lean and mean algorithm.
          // TODO: maybe optimise when width didn't change

          row_col_t ocur = screen.cur;
          ocur.row = (((term_start + ocur.row) + (prev_total_rows)) % (prev_total_rows));

          do
            {
              p = (((p - 1) + (prev_total_rows)) % (prev_total_rows));

//CMNT: remove_casts ^|                     (__builtin_expect(!(old_buf [(((p) + (prev_total_rows)) % (prev_total_rows))].t), 0) ? __assert_rtn(__func__, "screen.C", 292, "old_buf [MOD (p, prev_total_rows)].t") : (void)0); 
              (__builtin_expect(!(old_buf [(((p) + (prev_total_rows)) % (prev_total_rows))].t), 0) ? __assert_rtn(__func__, "screen.C", 292, "old_buf [MOD (p, prev_total_rows)].t") : 0);

//CMNT: js_style_variables ^|                     int plines = 1; 
 var plines= 1; 
//CMNT: js_style_variables ^|                     int llen = old_buf [(((p) + (prev_total_rows)) % (prev_total_rows))].l; 
 var llen= old_buf [(((p) + (prev_total_rows)) % (prev_total_rows))].l; 

              while (p != pend && old_buf [(((p - 1) + (prev_total_rows)) % (prev_total_rows))].is_longer ()){
                  p = (((p - 1) + (prev_total_rows)) % (prev_total_rows));

                  plines++;
                  llen += prev_ncol;
                }

//CMNT: js_style_variables ^|                     int qlines = max (0, (llen - 1) / ncol) + 1; 
 var qlines= max (0, (llen - 1) / ncol) + 1; 

              // drop partial lines completely
              if (q < qlines)
                break;

              q -= qlines;

//CMNT: js_style_variables ^|                     int lofs = 0; 
 var lofs= 0; 
//CMNT: possible_pointer ^|                     line_t *qline; 
              line_t  q line;

              // re-assemble the full line by destination lines
//CMNT: c_keyword ^|                     for (int qrow = q; qlines--; qrow++){ 
              for ( qrow = q; qlines--; qrow++){
                  qline = row_buf + qrow;
//CMNT: possible_pointer ^|                         lalloc (*qline); 
                  lalloc ( q line);
                  qline->l = ncol;
                  qline->is_longer (1);

//CMNT: js_style_variables ^|                         int qcol = 0; 
 var qcol= 0; 

                  // see below for cursor adjustment rationale
                  if (p == ocur.row)
                    screen.cur.row = q - (total_rows - nrow);

                  // fill a single destination line
                  while (lofs < llen && qcol < ncol){
//CMNT: js_style_variables ^|                             int prow = lofs / prev_ncol; 
 var prow= lofs / prev_ncol; 
//CMNT: js_style_variables ^|                             int pcol = lofs % prev_ncol; 
 var pcol= lofs % prev_ncol; 

                      prow = (((p + prow) + (prev_total_rows)) % (prev_total_rows));

//CMNT: c_keyword ^|                             // we only adjust the cursor _row_ and put it into 
                      // we only adjust the cursor _row_ and put it o
                      // the topmost line of "long line" it was in, as
                      // this seems to upset applications/shells/readline
                      // least.
                      if (prow == ocur.row)
                        screen.cur.row = q - (total_rows - nrow);

                      line_t &pline = old_buf [prow];

//CMNT: js_style_variables ^|                             int len = min (min (prev_ncol - pcol, ncol - qcol), llen - lofs); 
 var len= min (min (prev_ncol - pcol, ncol - qcol), llen - lofs); 

//CMNT: possible_pointer ^|                             (memcpy)(qline->t + qcol,pline.t + pcol,len * sizeof (text_t)); 
                      (memcpy)(qline->t + qcol,pline.t + pcol,len    sizeof (text_t));
//CMNT: possible_pointer remove_casts ^|                             (memcpy)(qline->r + qcol,pline.r + pcol,len * sizeof (rend_t)); 
                      (memcpy)(qline->r + qcol,pline.r + pcol,len    sizeof );

                      lofs += len;
                      qcol += len;
                    }
                }

              qline->l = llen ? (((llen - 1) + (ncol)) % (ncol)) + 1 : 0;
              qline->is_longer (0);
//CMNT: possible_pointer ^|                     scr_blank_line (*qline, qline->l, ncol - qline->l, (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/))); 
              scr_blank_line ( q line, qline->l, ncol - qline->l, (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
            }
          while (p != pend && q > 0);

          term_start = total_rows - nrow;
          top_row = q - term_start;

          // make sure all terminal lines exist
          while (top_row > 0)
//CMNT: c_keyword ^|                   scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + int(--top_row)) + (((this))->total_rows)) % (((this))->total_rows))], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/))); 
            scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + (--top_row)) + (((this))->total_rows)) % (((this))->total_rows))], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
        }
      else{
          // if no scrollback exists (yet), wing, instead of wrap

//CMNT: c_keyword ^|                 for (int row = min (nrow, prev_nrow); row--; ){ 
          for ( row = min (nrow, prev_nrow); row--; ){
              line_t &pline = old_buf [(((term_start + row) + (prev_total_rows)) % (prev_total_rows))];
              line_t &qline = row_buf [row];

              qline = pline;
              lresize (qline);
            }

//CMNT: c_keyword ^|                 for (int row = prev_nrow; row < nrow; row++){ 
          for ( row = prev_nrow; row < nrow; row++){
              row_buf [row].clear (); scr_blank_screen_mem (row_buf [row], (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
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
//CMNT: c_keyword possible_pointer ^|         tabs = (char *)rxvt_malloc (ncol); 
  tabs = (  ) rxvt_malloc (ncol);

//CMNT: c_keyword ^|         for (int col = ncol; --col; ) 
  for (var  col = ncol; --col; )
    tabs [col] = col % 8 /* default tab size */ == 0;

  selection.beg.row = selection.beg.col = selection.mark.row = selection.mark.col = selection.end.row = selection.end.col = 0;

  prev_nrow = nrow;
  prev_ncol = ncol;

  tt_winch ();

  false;
}

/* ------------------------------------------------------------------------- */
/*
 * Free everything.  That way malloc debugging can find leakage. 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_release (){ 
rxvt_term.scr_release =function(){ 
  if (row_buf){
      delete talloc; talloc = 0;
      delete ralloc; ralloc = 0;

      free (row_buf);
      free (swap_buf);
      free (drawn_buf);
      row_buf = 0; // signal that we freed all the arrays above

      free (tabs);
      tabs = 0;
    }
}

/* ------------------------------------------------------------------------- */
/*
 * Hard/Soft reset 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_poweron (){ 
rxvt_term.scr_poweron =function(){ 
  scr_release ();
  prev_nrow = prev_ncol = 0;
  rvideo_mode = false;
  scr_soft_reset ();
  scr_reset ();

  scr_clear (true);
  scr_refresh ();
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_soft_reset (){ 
rxvt_term.scr_soft_reset =function(){ 
  /* only affects modes, nothing drastic such as clearing the screen */

  scr_overlay_off ();


  if (current_screen != PRIMARY)
    scr_swap_screen ();

  scr_scroll_region (0, 10000 - 1);
  scr_rendition (0, ~0);
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_cursor (cursor_mode mode){ 
rxvt_term.scr_cursor =function(cursor_mode mode){ 
//CMNT: possible_pointer ^|         screen_t *s; 
  screen_t  s ;
    s = &screen;

  switch (mode){
      case SAVE:
        s->s_cur.row = screen.cur.row;
        s->s_cur.col = screen.cur.col;
        s->s_rstyle = rstyle;
//CMNT: c_keyword ^|               s->s_charset = screen.charset; 
        s->s_set = screen.set;
//CMNT: c_keyword ^|               s->s_charset_char = charsets[screen.charset]; 
        s->s_set_ = sets[screen.set];
        break;

      case RESTORE:
        want_refresh = 1;
        screen.cur.row = s->s_cur.row;
        screen.cur.col = s->s_cur.col;
//CMNT: c_keyword ^|               screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
        screen.flags &= ~(1<<4) /* need to wrap for next ?       */;
        rstyle = s->s_rstyle;
//CMNT: c_keyword ^|               screen.charset = s->s_charset; 
        screen.set = s->s_set;
//CMNT: c_keyword ^|               charsets[screen.charset] = s->s_charset_char; 
        sets[screen.set] = s->s_set_;
        set_font_style ();
        break;
    }

  /* boundary check in case screen size changed between SAVE and RESTORE */
  min_it (s->cur.row, nrow - 1);
  min_it (s->cur.col, ncol - 1);

//CMNT: remove_casts ^|         (__builtin_expect(!(s->cur.row >= 0), 0) ? __assert_rtn(__func__, "screen.C", 516, "s->cur.row >= 0") : (void)0); 
  (__builtin_expect(!(s->cur.row >= 0), 0) ? __assert_rtn(__func__, "screen.C", 516, "s->cur.row >= 0") : 0);
//CMNT: remove_casts ^|         (__builtin_expect(!(s->cur.col >= 0), 0) ? __assert_rtn(__func__, "screen.C", 517, "s->cur.col >= 0") : (void)0); 
  (__builtin_expect(!(s->cur.col >= 0), 0) ? __assert_rtn(__func__, "screen.C", 517, "s->cur.col >= 0") : 0);

}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_swap_screen (){ 
rxvt_term.scr_swap_screen =function(){ 
  if (!option (Opt_secondaryScreen))
    return;

//CMNT: c_keyword ^|         for (int i = prev_nrow; i--; ) 
  for ( i = prev_nrow; i--; )
//CMNT: c_keyword ^|           ::swap ((this)->row_buf [(((((this))->term_start + int(i)) + (((this))->total_rows)) % (((this))->total_rows))], swap_buf [i]); 
    ::swap ((this)->row_buf [(((((this))->term_start + (i)) + (((this))->total_rows)) % (((this))->total_rows))], swap_buf [i]);

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

  selection_check (2); /* check for boundary cross */

//CMNT: js_style_variables ^|         int i = current_screen; current_screen = scrn; scrn = i; 
 var i= current_screen; current_screen  = scrn; scrn = i;
      //     # 569 "screen.C"
    if (option (Opt_secondaryScroll))
      scr_scroll_text (0, prev_nrow - 1, prev_nrow);
}

// clear WrapNext indicator, solidifying position on next line
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_do_wrap (){ 
rxvt_term.scr_do_wrap =function(){ 
//CMNT: c_keyword ^|         if (!(screen.flags & (1<<4) /* need to wrap for next char?       */)) 
  if (!(screen.flags & (1<<4) /* need to wrap for next ?       */))
    return;

//CMNT: c_keyword ^|         screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
  screen.flags &= ~(1<<4) /* need to wrap for next ?       */;

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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_color (unsigned int color, int fgbg){ 
rxvt_term.scr_color =function(  color,  fgbg){ 
//CMNT: c_keyword ^|         if (!((unsigned int)(color) - (unsigned int)(minCOLOR) <= (unsigned int)(maxTermCOLOR) - (unsigned int)(minCOLOR))) 
  if (!(( )(color) - ( )(minCOLOR) <= ( )(maxTermCOLOR) - ( )(minCOLOR)))
    color = fgbg;

  if (fgbg == Color_fg)
    rstyle = (((rstyle) & ~0x0000007fUL /* 128 colors*/) | (color));
  else
    rstyle = (((rstyle) & ~0x00003f80UL /* 128 colors*/) | ((color)<<7 /* 0 .. maxTermCOLOR*/));
}

/* ------------------------------------------------------------------------- */
/*
* Change the rendition style for following text 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_rendition (int set, int style){ 
rxvt_term.scr_rendition =function( set,  style){ 
  if (set)
    rstyle |= style;
  else if (style == ~0)
    rstyle = (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/));
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
//CMNT: c_keyword ^|               line_t &l = (this)->row_buf [(((((this))->term_start + int(row2 - count)) + (((this))->total_rows)) % (((this))->total_rows))]; 
        line_t &l = (this)->row_buf [(((((this))->term_start + (row2 - count)) + (((this))->total_rows)) % (((this))->total_rows))];
        l.is_longer (0);
        l.touch ();
      }

      // erase newly scrolled-in lines
//CMNT: c_keyword ^|             for (int i = count; i--; ){ 
      for ( i = count; i--; ){
//CMNT: c_keyword ^|                 line_t &l = (this)->row_buf [(((((this))->term_start + int(nrow - 1 - i)) + (((this))->total_rows)) % (((this))->total_rows))]; 
          line_t &l = (this)->row_buf [(((((this))->term_start + (nrow - 1 - i)) + (((this))->total_rows)) % (((this))->total_rows))];

          // optimize if already cleared, can be significant on slow machines
//CMNT: c_keyword ^|                 // could be rolled into scr_blank_screen_mem 
          // could be rolled o scr_blank_screen_mem
          if (l.r && l.l < ncol - 1 && !((l.r[l.l + 1] ^ rstyle) & (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/))){
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
//CMNT: c_keyword ^|                 line_t &l1 = (this)->row_buf [(((((this))->term_start + int(i - count)) + (((this))->total_rows)) % (((this))->total_rows))]; 
          line_t &l1 = (this)->row_buf [(((((this))->term_start + (i - count)) + (((this))->total_rows)) % (((this))->total_rows))];
//CMNT: c_keyword ^|                 line_t &l2 = (this)->row_buf [(((((this))->term_start + int(i)) + (((this))->total_rows)) % (((this))->total_rows))]; 
          line_t &l2 = (this)->row_buf [(((((this))->term_start + (i)) + (((this))->total_rows)) % (((this))->total_rows))];

          ::swap (l1, l2);
          l2.touch ();
        }

      // move and/or clear selection, if any
      if (selection.op && current_screen == selection.screen){
          selection.beg.row -= count;
          selection.end.row -= count;
          selection.mark.row -= count;

          if (selection.beg.row < top_row
              || selection.end.row < top_row
              || selection.mark.row < top_row){
              selection.beg.row = selection.beg.col = selection.mark.row = selection.mark.col = selection.end.row = selection.end.col = 0;
              selection.op = SELECTION_CLEAR;
            }
        }

      // finally move the view window, if desired
      if (option (Opt_scrollWithBuffer)
          && view_start != 0
          && view_start != -saveLines)
        scr_page (UP, count);

      if (false)
        false;
    }
  else{
      if (selection.op && current_screen == selection.screen){
          if ((selection.beg.row < row1 && selection.end.row > row1)
              || (selection.beg.row < row2 && selection.end.row > row2)
              || (selection.beg.row - count < row1 && selection.beg.row >= row1)
              || (selection.beg.row - count > row2 && selection.beg.row <= row2)
              || (selection.end.row - count < row1 && selection.end.row >= row1)
              || (selection.end.row - count > row2 && selection.end.row <= row2)){
              selection.beg.row = selection.beg.col = selection.mark.row = selection.mark.col = selection.end.row = selection.end.col = 0;
              selection.op = SELECTION_CLEAR;
            }
          else if (selection.end.row >= row1 && selection.end.row <= row2){
              /* move selected region too */
              selection.beg.row -= count;
              selection.end.row -= count;
              selection.mark.row -= count;

              selection_check (0);
            }
        }

      // use a simple and robust scrolling algorithm, this
      // part of scr_scroll_text is not time-critical.

//CMNT: js_style_variables ^|             int rows = row2 - row1 + 1; 
 var rows= row2 - row1 + 1; 

      min_it (count, rows);

//CMNT: possible_pointer ^|             line_t *temp_buf = row_buf + total_rows; 
      line_t  t emp_buf = row_buf + total_rows;

//CMNT: c_keyword ^|             for (int row = 0; row < rows; row++){ 
      for ( row = 0; row < rows; row++){
//CMNT: c_keyword ^|                 temp_buf [row] = (this)->row_buf [(((((this))->term_start + int(row1 + (row + count + rows) % rows)) + (((this))->total_rows)) % (((this))->total_rows))]; 
          temp_buf [row] = (this)->row_buf [(((((this))->term_start + (row1 + (row + count + rows) % rows)) + (((this))->total_rows)) % (((this))->total_rows))];

//CMNT: c_keyword ^|                 if (!((unsigned int)(row + count) - (unsigned int)(0) < (unsigned int)(rows) - (unsigned int)(0))) 
          if (!(( )(row + count) - ( )(0) < ( )(rows) - ( )(0)))
            scr_blank_screen_mem (temp_buf [row], rstyle);
        }

//CMNT: c_keyword ^|             for (int row = 0; row < rows; row++) 
      for ( row = 0; row < rows; row++)
//CMNT: c_keyword ^|               (this)->row_buf [(((((this))->term_start + int(row1 + row)) + (((this))->total_rows)) % (((this))->total_rows))] = temp_buf [row]; 
        (this)->row_buf [(((((this))->term_start + (row1 + row)) + (((this))->total_rows)) % (((this))->total_rows))] = temp_buf [row];
    }

  return count;
}

/* ------------------------------------------------------------------------- */
/*
 * Add text given in <str> of length <len> to screen struct 
 */
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::scr_add_lines (const wchar_t *str, int len, int minlines){ 
rxvt_term.scr_add_lines =function(   s tr,  len,  minlines){ 
  if (len <= 0) /* sanity */
    return;

//CMNT: c_keyword ^|         unsigned char checksel; 
    checksel;
//CMNT: c_keyword ^|         unicode_t c; 
  c;
//CMNT: js_style_variables ^|         int ncol = this->ncol; 
 var ncol= this->ncol; 
//CMNT: c_keyword possible_pointer ^|         const wchar_t *strend = str + len; 
     s trend = str + len;

  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  if (minlines > 0){
      minlines += screen.cur.row - screen.bscroll;
      min_it (minlines, screen.cur.row - top_row);

      if (minlines > 0
          && screen.tscroll == 0
          && screen.bscroll == nrow - 1){
          /* _at least_ this many lines need to be scrolled */
          scr_scroll_text (screen.tscroll, screen.bscroll, minlines);
          screen.cur.row -= minlines;
        }
    }


//CMNT: remove_casts ^|         (__builtin_expect(!(screen.cur.col < ncol), 0) ? __assert_rtn(__func__, "screen.C", 789, "screen.cur.col < ncol") : (void)0); 
  (__builtin_expect(!(screen.cur.col < ncol), 0) ? __assert_rtn(__func__, "screen.C", 789, "screen.cur.col < ncol") : 0);
//CMNT: remove_casts ^|         (__builtin_expect(!(screen.cur.row < nrow && screen.cur.row >= top_row), 0) ? __assert_rtn(__func__, "screen.C", 791, "screen.cur.row < nrow && screen.cur.row >= top_row") : (void)0); 
  (__builtin_expect(!(screen.cur.row < nrow && screen.cur.row >= top_row), 0) ? __assert_rtn(__func__, "screen.C", 791, "screen.cur.row < nrow && screen.cur.row >= top_row") : 0);


//CMNT: js_style_variables ^|         int row = screen.cur.row; 
 var row= screen.cur.row; 

  checksel = selection.op && current_screen == selection.screen ? 1 : 0;

//CMNT: c_keyword possible_pointer ^|         line_t *line = &(this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))]; 
  line_t  l ine = &(this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))];

  while (str < strend){
//CMNT: possible_pointer remove_casts ^|             c = (unicode_t)*str++; // convert to rxvt-unicodes representation 
      c =  s tr++; // convert to rxvt-unicodes representation

      if (__builtin_expect (((c < 0x20) != 0),(0)))
        if (c == C0_LF){
            max_it (line->l, screen.cur.col);

//CMNT: c_keyword ^|                   screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
            screen.flags &= ~(1<<4) /* need to wrap for next ?       */;

            if (screen.cur.row == screen.bscroll)
              scr_scroll_text (screen.tscroll, screen.bscroll, 1);
            else if (screen.cur.row < (nrow - 1))
              row = ++screen.cur.row;

//CMNT: c_keyword ^|                   line = &(this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))]; /* _must_ refresh */ 
            line = &(this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))]; /* _must_ refresh */
            continue;
          }
        else if (c == C0_CR){
            max_it (line->l, screen.cur.col);

//CMNT: c_keyword ^|                   screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
            screen.flags &= ~(1<<4) /* need to wrap for next ?       */;
            screen.cur.col = 0;
            continue;
          }
        else if (c == C0_HT){
            scr_tab (1, true);
            continue;
          }

      if (__builtin_expect (((checksel /* see if we're writing within selection */ && !((((screen.cur).row) < ((selection.beg).row)) || ((((screen.cur).row) == ((selection.beg).row)) && (((screen.cur).col) < ((selection.beg).col)))) && ((((screen.cur).row) < ((selection.end).row)) || ((((screen.cur).row) == ((selection.end).row)) && (((screen.cur).col) < ((selection.end).col))))) != 0),(0)))




        {
          checksel = 0;
          /*
           * If we wrote anywhere in the selected area, kill the selection 
           * XXX: should we kill the mark too?  Possibly, but maybe that 
           *      should be a similar check. 
           */
          selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
        }

//CMNT: c_keyword ^|             if (__builtin_expect (((screen.flags & (1<<4) /* need to wrap for next char?       */) != 0),(0))){ 
      if (__builtin_expect (((screen.flags & (1<<4) /* need to wrap for next ?       */) != 0),(0))){
          scr_do_wrap ();

          line->l = ncol;
          line->is_longer (1);

          row = screen.cur.row;
//CMNT: c_keyword ^|                 line = &(this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))]; /* _must_ refresh */ 
          line = &(this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))]; /* _must_ refresh */
        }

//CMNT: c_keyword ^|             // some utf-8 decoders "decode" surrogate characters: let's fix this. 
      // some utf-8 decoders "decode" surrogate acters: let's fix this.
//CMNT: c_keyword ^|             if (__builtin_expect (((((unsigned int)(c) - (unsigned int)(0xd800) <= (unsigned int)(0xdfff) - (unsigned int)(0xd800))) != 0),(0))) 
      if (__builtin_expect ((((( )(c) - ( )(0xd800) <= ( )(0xdfff) - ( )(0xd800))) != 0),(0)))
        c = 0xfffd;

//CMNT: c_keyword ^|             // rely on wcwidth to tell us the character width, do wcwidth before 
      // rely on wcwidth to tell us the acter width, do wcwidth before
      // further replacements, as wcwidth might return -1 for the line
//CMNT: c_keyword ^|             // drawing characters below as they might be invalid in the current 
      // drawing acters below as they might be invalid in the current
      // locale.
//CMNT: c_keyword js_style_variables ^|             int width = (((unsigned int)(c) - (unsigned int)(0x20) <= (unsigned int)(0x7e) - (unsigned int)(0x20)) ? 1 : wcwidth (c)); 
 var width= ((( )(c) - ( )(0x20) < = ( )(0x7e) - ( )(0x20)) ? 1 : wcwidth (c));

//CMNT: c_keyword ^|             if (__builtin_expect (((charsets [screen.charset] == '0') != 0),(0))) // DEC SPECIAL 
      if (__builtin_expect (((sets [screen.set] == '0') != 0),(0))) // DEC SPECIAL
        {
          // vt100 special graphics and line drawing
          // 5f-7e standard vt100
//CMNT: c_keyword ^|                 // 40-5e rxvt extension for extra curses acs chars 
          // 40-5e rxvt extension for extra curses acs s
//CMNT: c_keyword ^|                 static uint16_t vt100_0[62] = { // 41 .. 7e 
           u16_t vt100_0[62] = { // 41 .. 7e
                    0x2191, 0x2193, 0x2192, 0x2190, 0x2588, 0x259a, 0x2603, // 41-47 hi mr. snowman!
                 0, 0, 0, 0, 0, 0, 0, 0, // 48-4f
                 0, 0, 0, 0, 0, 0, 0, 0, // 50-57
                 0, 0, 0, 0, 0, 0, 0, 0x0020, // 58-5f
            0x25c6, 0x2592, 0x2409, 0x240c, 0x240d, 0x240a, 0x00b0, 0x00b1, // 60-67
            0x2424, 0x240b, 0x2518, 0x2510, 0x250c, 0x2514, 0x253c, 0x23ba, // 68-6f
            0x23bb, 0x2500, 0x23bc, 0x23bd, 0x251c, 0x2524, 0x2534, 0x252c, // 70-77
            0x2502, 0x2264, 0x2265, 0x03c0, 0x2260, 0x00a3, 0x00b7, // 78-7e
          };

          if (c >= 0x41 && c <= 0x7e && vt100_0[c - 0x41]){
              c = vt100_0[c - 0x41];
//CMNT: c_keyword ^|                     width = 1; // vt100 line drawing characters are always single-width 
              width = 1; // vt100 line drawing acters are always single-width
            }
        }

      if (__builtin_expect (((screen.flags & (1<<3) /* insert mode (vs. overstrike)      */) != 0),(0)))
//CMNT: c_keyword ^|               scr_insdel_chars (width, INSERT); 
        scr_insdel_s (width, INSERT);

      if (width != 0){

//CMNT: c_keyword ^|                 // trim characters we can't store directly :( 
          // trim acters we can't store directly :(
          if (c >= 0x10000)



            c = 0xfffd;



//CMNT: c_keyword ^|                 // nuke the character at this position, if required 
          // nuke the acter at this position, if required
          if (__builtin_expect (((line->t[screen.cur.col] == NOCHAR || (screen.cur.col < ncol - 1 && line->t[screen.cur.col + 1] == NOCHAR)) != 0),(0)))




//CMNT: c_keyword possible_pointer ^|                   scr_kill_char (*line, screen.cur.col); 
            scr_kill_ ( l ine, screen.cur.col);

//CMNT: js_style_variables ^|                 rend_t rend = (((rstyle) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (c)) << 24)); 
 var rend= (((rstyle) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (c)) << 24)); 

//CMNT: c_keyword ^|                 // if the character doesn't fit into the remaining columns... 
          // if the acter doesn't fit o the remaining columns...
          if (__builtin_expect (((screen.cur.col > ncol - width && ncol >= width) != 0),(0))){
              // ... artificially enlargen the previous one
              c = NOCHAR;
//CMNT: c_keyword ^|                     // and try the same character next loop iteration 
              // and try the same acter next loop iteration
              --str;
            }

          line->touch ();

          do
            {
              line->t[screen.cur.col] = c;
              line->r[screen.cur.col] = rend;

              if (__builtin_expect (((screen.cur.col < ncol - 1) != 0),(1)))
                screen.cur.col++;
              else{
                  line->l = ncol;
                  if (screen.flags & (1<<2) /* auto-wrap flag                    */)
//CMNT: c_keyword ^|                           screen.flags |= (1<<4) /* need to wrap for next char?       */; 
                    screen.flags |= (1<<4) /* need to wrap for next ?       */;
                  break;
                }

              c = NOCHAR;
            }
          while (__builtin_expect (((--width > 0) != 0),(0)));

//CMNT: c_keyword ^|                 // pad with spaces when overwriting wide character with smaller one 
          // pad with spaces when overwriting wide acter with smaller one
          if (__builtin_expect (((!width) != 0),(0))){
              line->touch ();

//CMNT: c_keyword ^|                     for (int c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++){ 
              for ( c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++){
                  line->t[c] = ' ';
                  line->r[c] = rend;
                }
            }
        }
      //     # 1002 "screen.C"
    }

  max_it (line->l, screen.cur.col);


//CMNT: remove_casts ^|         (__builtin_expect(!(screen.cur.row >= 0), 0) ? __assert_rtn(__func__, "screen.C", 1007, "screen.cur.row >= 0") : (void)0); 
  (__builtin_expect(!(screen.cur.row >= 0), 0) ? __assert_rtn(__func__, "screen.C", 1007, "screen.cur.row >= 0") : 0);

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

          screen.cur.col = ncol - 1;
          --screen.cur.row;

          want_refresh = 1;

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
//CMNT: c_keyword ^|         int i, x; 
   i, x;

  want_refresh = 1;
  i = x = screen.cur.col;

  if (count == 0)
    return;
  else if (count > 0){
//CMNT: c_keyword ^|             line_t &l = (this)->row_buf [(((((this))->term_start + int(screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))]; 
      line_t &l = (this)->row_buf [(((((this))->term_start + (screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))];
//CMNT: js_style_variables ^|             rend_t base_rend = l.r[i]; 
 var base_rend= l.r[i]; 
      ht &= l.t[i] == ' ';

      for (; ++i < ncol; )
        if (tabs[i]){
            x = i;

            if (!--count)
              break;
          }
        else
          ht &= l.t[i] == ' '
                && (!(((l.r[i]) ^ (base_rend)) & ~0x80000000UL /* be careful when drawing these */));

      if (count)
        x = ncol - 1;

//CMNT: c_keyword ^|             // store horizontal tab commands as characters inside the text 
      // store horizontal tab commands as acters inside the text
      // buffer so they can be selected and pasted.
      if (ht && option (Opt_pastableTabs)){
          base_rend = (((base_rend) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | ((0) << 24));

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
      //     # 1127 "screen.C"
/* ------------------------------------------------------------------------- */
/*
* Process DEC Forward Index 
* XTERM_SEQ: ESC 9 
* Move cursor right in row.  If we're at the right boundary, shift everything 
* in that row left.  Clear right column. 
 */
      //     # 1154 "screen.C"
/* ------------------------------------------------------------------------- */
/*
* Goto Row/Column 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_gotorc (int row, int col, int relative){ 
rxvt_term.scr_gotorc =function( row,  col,  relative){ 
  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  screen.cur.col = relative & C_RELATIVE ? screen.cur.col + col : col;
  clamp_it (screen.cur.col, 0, ncol - 1);

//CMNT: c_keyword ^|         screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
  screen.flags &= ~(1<<4) /* need to wrap for next ?       */;

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
      if (screen.flags & (1<<0) /* relative origin mode flag         */){
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
rxvt_term.scr_index =function(enum page_dirn direction){ 
//CMNT: c_keyword ^|         int dirn; 
   dirn;

  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  dirn = ((direction == UP) ? 1 : -1);

//CMNT: c_keyword ^|         screen.flags &= ~(1<<4) /* need to wrap for next char?       */; 
  screen.flags &= ~(1<<4) /* need to wrap for next ?       */;

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
//CMNT: c_keyword ^|         unsigned int col, num; 
    col, num;

  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  selection_check (1);

//CMNT: c_keyword ^|         line_t &line = (this)->row_buf [(((((this))->term_start + int(screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))]; 
  line_t &line = (this)->row_buf [(((((this))->term_start + (screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))];

  line.touch ();
  line.is_longer (0);

  switch (mode){
      case 3:
//CMNT: c_keyword ^|               if (screen.flags & (1<<4) /* need to wrap for next char?       */) 
        if (screen.flags & (1<<4) /* need to wrap for next ?       */)
          return;

        /* fall through */

      case 0: /* erase to end of line */
        col = screen.cur.col;
        num = ncol - col;
        min_it (line.l, col);

        if (((((selection.beg).row) == ((screen.cur).row)) && (((selection.beg).col) >= ((screen.cur).col)))
            || ((((selection.end).row) == ((screen.cur).row)) && (((selection.end).col) >= ((screen.cur).col))))
          selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
        break;

      case 1: /* erase to beginning of line */
        col = 0;
        num = screen.cur.col + 1;

        if (((((selection.beg).row) == ((screen.cur).row)) && (((selection.beg).col) <= ((screen.cur).col)))
            || ((((selection.end).row) == ((screen.cur).row)) && (((selection.end).col) <= ((screen.cur).col))))
          selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
        break;

      case 2: /* erase whole line */
        col = 0;
        num = ncol;
        line.l = 0;
        if (selection.beg.row <= screen.cur.row
            && selection.end.row >= screen.cur.row)
          selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
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
//CMNT: c_keyword ^|         int num; 
   num;
//CMNT: c_keyword ^|         int32_t row; 
  32_t row;
//CMNT: c_keyword ^|         rend_t ren; 
   ren;
  XGCValues gcvalue;

  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  switch (mode){
      case 0: /* erase to end of screen */
        selection_check (1);
        scr_erase_line (0);
        row = screen.cur.row + 1; /* possible OOB */
        num = nrow - row;
        break;
      case 1: /* erase to beginning of screen */
        selection_check (3);
        scr_erase_line (1);
        row = 0;
        num = screen.cur.row;
        break;
      case 2: /* erase whole screen */
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
    selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;

  if (row >= nrow) /* Out Of Bounds */
    return;

  min_it (num, nrow - row);

  // TODO: the code below does not work when view_start != 0
  // the workaround is to disable the clear and use a normal refresh
  // when view_start != 0. mysterious.
  if (rstyle & (0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/))
//CMNT: remove_casts ^|           ren = (rend_t) ~0; 
    ren =  ~0;
  else if ((((rstyle) & 0x00003f80UL /* 128 colors*/)>>7 /* 0 .. maxTermCOLOR*/) == Color_bg){
      ren = (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/));

      if (mapped && !view_start)
        XClearArea (dpy, vt, 0,
//CMNT: c_keyword possible_pointer ^|                           ((int32_t)((int32_t)(row - view_start) * (int32_t)fheight)), (unsigned int)width, 
                    ((32_t)((32_t)(row - view_start)    (32_t)fheight)), ( )width,
//CMNT: c_keyword possible_pointer ^|                           (unsigned int)((int32_t)(num) * (int32_t)fheight), 0); 
                    ( )((32_t)(num)    (32_t)fheight), 0);
    }
  else{
      ren = rstyle & (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/);

      if (mapped && !view_start){
          gcvalue.foreground = pix_colors[bgcolor_of (rstyle)];
          XChangeGC (dpy, gc, (1L<<2), &gcvalue);
          XFillRectangle (dpy, vt, gc,
//CMNT: c_keyword possible_pointer ^|                                 0, ((int32_t)((int32_t)(row - view_start) * (int32_t)fheight)), 
                          0, ((32_t)((32_t)(row - view_start)    (32_t)fheight)),
//CMNT: c_keyword ^|                                 (unsigned int)width, 
                          ( )width,
//CMNT: c_keyword possible_pointer ^|                                 (unsigned int)((int32_t)(num) * (int32_t)fheight)); 
                          ( )((32_t)(num)    (32_t)fheight));
          gcvalue.foreground = pix_colors[Color_fg];
          XChangeGC (dpy, gc, (1L<<2), &gcvalue);
        }
    }

  for (; num--; row++){
//CMNT: c_keyword ^|             scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))], rstyle); 
      scr_blank_screen_mem ((this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))], rstyle);

      if (!view_start)
        scr_blank_line (drawn_buf [row], 0, ncol, ren);
    }
}
      //     # 1397 "screen.C"
/* ------------------------------------------------------------------------- */
/*
* Fill the screen with `E's 
* XTERM_SEQ: Screen Alignment Test: ESC # 8 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_E (){ 
rxvt_term.scr_E =function(){ 
//CMNT: c_keyword ^|         rend_t fs; 
   fs;

  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  num_scr_allow = 0;
  selection_check (3);

  fs = (((rstyle) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font ('E')) << 24));
//CMNT: c_keyword ^|         for (int row = nrow; row--; ){ 
  for ( row = nrow; row--; ){
//CMNT: c_keyword ^|             line_t &line = (this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))]; 
      line_t &line = (this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))];

      fill_text (line.t, 'E', ncol);
//CMNT: c_keyword possible_pointer ^|             rend_t *r1 = line.r; 
        r 1 = line.r;

//CMNT: c_keyword ^|             for (int j = ncol; j--; ) 
      for ( j = ncol; j--; )
//CMNT: possible_pointer ^|               *r1++ = fs; 
         r 1++ = fs;

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
//CMNT: c_keyword ^|         int end; 
   end;

  if (option (Opt_scrollTtyOutput)) view_start = 0;

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
  scr_scroll_text (screen.cur.row, screen.bscroll, insdel    count);
}

/* ------------------------------------------------------------------------- */
/*
* Insert/Delete <count> characters from the current position 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_insdel_chars (int count, int insdel){ 
rxvt_term.scr_insdel_s =function( count,  insdel){ 
  want_refresh = 1;
  if (option (Opt_scrollTtyOutput)) view_start = 0;

  if (count <= 0)
    return;

  scr_do_wrap ();

  selection_check (1);
  min_it (count, ncol - screen.cur.col);

//CMNT: js_style_variables ^|         int row = screen.cur.row; 
 var row= screen.cur.row; 

//CMNT: c_keyword possible_pointer ^|         line_t *line = &(this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))]; 
  line_t  l ine = &(this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))];

  line->touch ();
  line->is_longer (0);

  // nuke wide spanning the start
  if (line->t[screen.cur.col] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|           scr_kill_char (*line, screen.cur.col); 
    scr_kill_ ( l ine, screen.cur.col);

  switch (insdel){
      case INSERT:
        line->l = min (line->l + count, ncol);

        if (line->t[screen.cur.col] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col); 
          scr_kill_ ( l ine, screen.cur.col);

//CMNT: c_keyword ^|               for (int col = ncol - 1; (col - count) >= screen.cur.col; col--){ 
        for ( col = ncol - 1; (col - count) >= screen.cur.col; col--){
            line->t[col] = line->t[col - count];
            line->r[col] = line->r[col - count];
          }

        if (selection.op && current_screen == selection.screen
            && ((((selection.beg).row) == ((screen.cur).row)) && (((selection.beg).col) >= ((screen.cur).col)))){
            if (selection.end.row != screen.cur.row
                || (selection.end.col + count >= ncol))
              selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
            else{
                /* shift selection */
                selection.beg.col += count;
                selection.mark.col += count; /* XXX: yes? */
                selection.end.col += count;
              }
          }

//CMNT: possible_pointer ^|               scr_blank_line (*line, screen.cur.col, count, rstyle); 
        scr_blank_line ( l ine, screen.cur.col, count, rstyle);
        break;

      case ERASE:
        screen.cur.col += count; /* don't worry if > ncol */
        selection_check (1);
        screen.cur.col -= count;

//CMNT: c_keyword ^|               // nuke wide char after the end 
        // nuke wide  after the end
        if (screen.cur.col + count < ncol && line->t[screen.cur.col + count] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col + count); 
          scr_kill_ ( l ine, screen.cur.col + count);

//CMNT: possible_pointer ^|               scr_blank_line (*line, screen.cur.col, count, rstyle); 
        scr_blank_line ( l ine, screen.cur.col, count, rstyle);
        break;

      case DELETE:
        line->l = max (line->l - count, 0);

//CMNT: c_keyword ^|               // nuke wide char spanning the end 
        // nuke wide  spanning the end
        if (screen.cur.col + count < ncol && line->t[screen.cur.col + count] == NOCHAR)
//CMNT: c_keyword possible_pointer ^|                 scr_kill_char (*line, screen.cur.col + count); 
          scr_kill_ ( l ine, screen.cur.col + count);

//CMNT: c_keyword ^|               for (int col = screen.cur.col; (col + count) < ncol; col++){ 
        for ( col = screen.cur.col; (col + count) < ncol; col++){
            line->t[col] = line->t[col + count];
            line->r[col] = line->r[col + count];
          }

//CMNT: possible_pointer ^|               scr_blank_line (*line, ncol - count, count, rstyle); 
        scr_blank_line ( l ine, ncol - count, count, rstyle);

        if (selection.op && current_screen == selection.screen
            && ((((selection.beg).row) == ((screen.cur).row)) && (((selection.beg).col) >= ((screen.cur).col)))){
            if (selection.end.row != screen.cur.row
                || (screen.cur.col >= selection.beg.col - count)
                || selection.end.col >= ncol)
              selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
            else{
                /* shift selection */
                selection.beg.col -= count;
                selection.mark.col -= count; /* XXX: yes? */
                selection.end.col -= count;
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_scroll_region (int top, int bot){ 
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_cursor_visible (int mode){ 
rxvt_term.scr_cursor_visible =function( mode){ 
  want_refresh = 1;

  if (mode)
    screen.flags |= (1<<1) /* cursor visible?                   */;
  else
    screen.flags &= ~(1<<1) /* cursor visible?                   */;
}

/* ------------------------------------------------------------------------- */
/*
* Set/unset automatic wrapping 
* XTERM_SEQ: Set Wraparound  : ESC [ ? 7 h 
* XTERM_SEQ: Unset Wraparound: ESC [ ? 7 l 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_autowrap (int mode){ 
rxvt_term.scr_autowrap =function( mode){ 
  if (mode)
    screen.flags |= (1<<2) /* auto-wrap flag                    */;
  else
//CMNT: c_keyword ^|           screen.flags &= ~((1<<2) /* auto-wrap flag                    */ | (1<<4) /* need to wrap for next char?       */); 
    screen.flags &= ~((1<<2) /* auto-wrap flag                    */ | (1<<4) /* need to wrap for next ?       */);
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_relative_origin (int mode){ 
rxvt_term.scr_relative_origin =function( mode){ 
  if (mode)
    screen.flags |= (1<<0) /* relative origin mode flag         */;
  else
    screen.flags &= ~(1<<0) /* relative origin mode flag         */;

  scr_gotorc (0, 0, 0);
}

/* ------------------------------------------------------------------------- */
/*
* Set insert/replace mode 
* XTERM_SEQ: Set Insert mode : ESC [ ? 4 h 
* XTERM_SEQ: Set Replace mode: ESC [ ? 4 l 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_insert_mode (int mode){ 
rxvt_term.scr_insert_mode =function( mode){ 
  if (mode)
    screen.flags |= (1<<3) /* insert mode (vs. overstrike)      */;
  else
    screen.flags &= ~(1<<3) /* insert mode (vs. overstrike)      */;
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
    (memset)(tabs,0,ncol);
  else if (screen.cur.col < ncol)
    tabs [screen.cur.col] = !!mode;
}

/* ------------------------------------------------------------------------- */
/*
* Set reverse/normal video 
* XTERM_SEQ: Reverse video: ESC [ ? 5 h 
* XTERM_SEQ: Normal video : ESC [ ? 5 l 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_rvideo_mode (bool on){ 
rxvt_term.scr_rvideo_mode =function(bool on){ 
  rvideo_mode = on;


  on ^= rvideo_bell;


  if (rvideo_state != on){
      rvideo_state = on;

      ::swap (pix_colors[Color_fg], pix_colors[Color_bg]);



          XSetWindowBackground (dpy, vt, pix_colors[Color_bg]);

      XGCValues gcvalue;
      gcvalue.foreground = pix_colors[Color_fg];
      gcvalue.background = pix_colors[Color_bg];
      XChangeGC (dpy, gc, (1L<<3) | (1L<<2), &gcvalue);

      scr_clear ();
      scr_touch (true);
    }
}

/* ------------------------------------------------------------------------- */
/*
* Report current cursor position 
* XTERM_SEQ: Report position: ESC [ 6 n 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_report_position (){ 
rxvt_term.scr_report_position =function(){ 
//CMNT: c_keyword ^|         tt_printf ("\033[%d;%dR", screen.cur.row + 1, screen.cur.col + 1); 
  tt_prf ("\033[%d;%dR", screen.cur.row + 1, screen.cur.col + 1);
}

/* ------------------------------------------------------------------------- *
*                                  FONTS                                    * 
* ------------------------------------------------------------------------- */ 

/*
* Set font style 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::set_font_style (){ 
rxvt_term.set_font_style =function(){ 
      //     # 1745 "screen.C"
}

/* ------------------------------------------------------------------------- */
/*
* Choose a font 
* XTERM_SEQ: Invoke G0 character set: CTRL-O 
* XTERM_SEQ: Invoke G1 character set: CTRL-N 
* XTERM_SEQ: Invoke G2 character set: ESC N 
* XTERM_SEQ: Invoke G3 character set: ESC O 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_charset_choose (int set){ 
rxvt_term.scr_set_choose =function( set){ 
//CMNT: c_keyword ^|         screen.charset = set; 
  screen.set = set;
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_charset_set (int set, unsigned int ch){ 
rxvt_term.scr_set_set =function( set,   ch){ 
//CMNT: c_keyword ^|         charsets[set] = (unsigned char)ch; 
  sets[set] = ( )ch;
  set_font_style ();
}


/* ------------------------------------------------------------------------- *
*                        MAJOR SCREEN MANIPULATION                          * 
* ------------------------------------------------------------------------- */ 

/*
* refresh matching text. 
 */
//CMNT: js_style_functions c_keyword ^|       bool rxvt_term::scr_refresh_rend (rend_t mask, rend_t value){ 
boolrxvt_term.scr_refresh_rend =function( mask,  value){ 
  bool found = false;

//CMNT: c_keyword ^|         for (int i = 0; i < nrow; i++){ 
  for ( i = 0; i < nrow; i++){
//CMNT: c_keyword possible_pointer ^|             rend_t *drp = drawn_buf[i].r; 
        d rp = drawn_buf[i].r;

//CMNT: c_keyword ^|             for (int col = 0; col < ncol; col++, drp++) 
      for ( col = 0; col < ncol; col++, drp++)
//CMNT: possible_pointer ^|               if ((*drp & mask) == value){ 
        if (( d rp & mask) == value){
            found = true;
//CMNT: possible_pointer ^|                   *drp = ~value; 
             d rp = ~value;
          }
    }

  return found;
}

/*
//CMNT: possible_pointer ^|        * Refresh an area 
    Refresh an area
 */
enum {
  PART_BEG = 0,
  PART_END,
  RC_COUNT
};

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_expose (int x, int y, int ewidth, int eheight, bool refresh){ 
rxvt_term.scr_expose =function( x,  y,  ewidth,  eheight, bool refresh){ 
//CMNT: c_keyword ^|         int i; 
   i;
  row_col_t rc[RC_COUNT];

  if (!drawn_buf) /* sanity check */
    return;
      //     # 1832 "screen.C"
  /* round down */
//CMNT: c_keyword ^|         rc[PART_BEG].col = ((int32_t)((int32_t)(x)) / (int32_t)fwidth); 
  rc[PART_BEG].col = ((32_t)((32_t)(x)) / (32_t)fwidth);
//CMNT: c_keyword ^|         rc[PART_BEG].row = ((int32_t)((int32_t)(y)) / (int32_t)fheight); 
  rc[PART_BEG].row = ((32_t)((32_t)(y)) / (32_t)fheight);
  /* round up */
//CMNT: c_keyword ^|         rc[PART_END].col = ((int32_t)(x + ewidth + fwidth - 1) / (int32_t)fwidth); 
  rc[PART_END].col = ((32_t)(x + ewidth + fwidth - 1) / (32_t)fwidth);
//CMNT: c_keyword ^|         rc[PART_END].row = ((int32_t)((int32_t)(y + eheight + fheight - 1)) / (int32_t)fheight); 
  rc[PART_END].row = ((32_t)((32_t)(y + eheight + fheight - 1)) / (32_t)fheight);

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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_touch (bool refresh){ 
rxvt_term.scr_touch =function(bool refresh){ 
  scr_expose (0, 0, width, height, refresh);
}

/* ------------------------------------------------------------------------- */
/*
* Move the display so that the line represented by scrollbar value Y is at 
* the top of the screen 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_move_to (int y, int len){ 
rxvt_term.scr_move_to =function( y,  len){ 
//CMNT: possible_pointer ^|         scr_changeview ((top_row - nrow) * (len - y) / len + (nrow - 1)); 
  scr_changeview ((top_row - nrow)    (len - y) / len + (nrow - 1));
}

/* ------------------------------------------------------------------------- */
/*
* Page the screen up/down nlines 
* direction should be UP or DN 
 */
//CMNT: js_style_functions c_keyword ^|       bool rxvt_term::scr_page (enum page_dirn direction, int nlines){ 
boolrxvt_term.scr_page =function(enum page_dirn direction,  nlines){ 
//CMNT: js_style_variables ^|         int new_view_start = 
 var new_view_start= 
    direction == UP ? view_start - nlines
                    : view_start + nlines;

  return scr_changeview (new_view_start);
}

//CMNT: js_style_functions c_keyword ^|       bool rxvt_term::scr_changeview (int new_view_start){ 
boolrxvt_term.scr_changeview =function( new_view_start){ 
  clamp_it (new_view_start, top_row, 0);

  if (new_view_start == view_start)
    return false;

  num_scr += new_view_start - view_start;
  view_start = new_view_start;
  want_refresh = 1;

  false;

  return true;
}


//CMNT: js_style_functions c_keyword ^|       void rxvt_term::bell_cb (ev::timer &w, int revents){ 
rxvt_term.bell_cb =function(ev::timer &w,  revents){ 
  rvideo_bell = false;
  scr_rvideo_mode (rvideo_mode);
  refresh_check ();
}


/* ------------------------------------------------------------------------- */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_bell (){ 
rxvt_term.scr_bell =function(){ 

  if (option (Opt_mapAlert))

    XMapWindow (dpy, parent[0]);

  if (option (Opt_visualBell)){
      rvideo_bell = true;
      scr_rvideo_mode (rvideo_mode);
      flush ();

      bell_ev.start (.020);
    }
  else
    XBell (dpy, 0);

}

/* ------------------------------------------------------------------------- */
/* ARGSUSED */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_printscreen (int fullhist){ 
rxvt_term.scr_prscreen =function( fullhist){ 

//CMNT: c_keyword ^|         int nrows, row_start; 
   nrows, row_start;
//CMNT: c_keyword possible_pointer ^|         FILE *fd = popen_printer (); 
  FILE  f d = popen_prer ();

  if (!fd)
    return;

  if (fullhist){
      nrows = nrow - top_row;
      row_start = top_row;
    }
  else{
      nrows = nrow;
      row_start = view_start;
    }

  wctomb (0, 0);

//CMNT: c_keyword ^|         for (int r1 = 0; r1 < nrows; r1++){ 
  for ( r1 = 0; r1 < nrows; r1++){
//CMNT: c_keyword possible_pointer ^|             text_t *tp = (this)->row_buf [(((((this))->term_start + int(r1)) + (((this))->total_rows)) % (((this))->total_rows))].t; 
      text_t  t p = (this)->row_buf [(((((this))->term_start + (r1)) + (((this))->total_rows)) % (((this))->total_rows))].t;
//CMNT: c_keyword js_style_variables ^|             int len = (this)->row_buf [(((((this))->term_start + int(r1)) + (((this))->total_rows)) % (((this))->total_rows))].l; 
 var len= (this)->row_buf [(((((this))->term_start + (r1)) + (((this))->total_rows)) % (((this))->total_rows))].l; 

//CMNT: c_keyword ^|             for (int i = len >= 0 ? len : ncol - 1; i--; ) //TODO//FIXME//LEN 
      for ( i = len >= 0 ? len : ncol - 1; i--; ) //TODO//FIXME//LEN
        {
//CMNT: c_keyword ^|                 char mb[6 /* Allow 31 bit UTF2 */]; 
           mb[6 /* Allow 31 bit UTF2 */];
//CMNT: possible_pointer ^|                 text_t t = *tp++; 
          text_t t =  t p++;
          if (t == NOCHAR)
            continue;

          len = wctomb (mb, t);

          if (len <= 0){
              mb[0] = ' ';
              len = 1;
            }

          fwrite (mb, 1, len, fd);
        }

      fputc ('\n', fd);
    }

//CMNT: c_keyword ^|         pclose_printer (fd); 
  pclose_prer (fd);

}

/* ------------------------------------------------------------------------- */
/*
* Refresh the screen 
* drawn_text/drawn_rend contain the screen information before the update. 
* screen.text/screen.rend contain what the screen will change to. 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_refresh (){ 
rxvt_term.scr_refresh =function(){ 
//CMNT: c_keyword ^|         int16_t col, row, /* column/row we're processing               */ 
  16_t col, row, /* column/row we're processing               */
          ocrow; /* old cursor row                            */
//CMNT: c_keyword ^|         int i; /* tmp                                       */ 
   i; /* tmp                                       */

//CMNT: c_keyword ^|         rend_t cc1; /* store colours at cursor position (s)      */ 
   cc1; /* store colours at cursor position (s)      */

//CMNT: c_keyword possible_pointer ^|         rend_t *crp; // cursor rendition pointer 
    c rp; // cursor rendition poer
//CMNT: c_keyword ^|         rend_t ccol1, /* Cursor colour       */ 
   ccol1, /* Cursor colour       */
         ccol2; /* Cursor colour2      */

  want_refresh = 0; /* screen is current */

  if (refresh_type == NO_REFRESH || !mapped)
    return;

  /*
//CMNT: possible_pointer ^|          * A: set up vars 
      A: set up vars
   */
  refresh_count = 0;

//CMNT: c_keyword ^|         unsigned int old_screen_flags = screen.flags; 
    old_screen_flags = screen.flags;
//CMNT: js_style_variables ^|         char have_bg = 0; 
 var have_bg= 0; 



  ocrow = oldcursor.row; /* is there an old outline cursor on screen? */

  /*
//CMNT: c_keyword possible_pointer ^|          * B: reverse any characters which are selected 
      B: reverse any acters which are selected
   */
  scr_reverse_selection ();

  false;

  scr_swap_overlay ();


//CMNT: js_style_variables ^|         char showcursor = screen.flags & (1<<1) /* cursor visible?                   */; 
 var showcursor= screen.flags & (1<<1) /* cursor visible?                   */; 

  /*
//CMNT: c_keyword possible_pointer ^|          * C: set the cursor character (s) 
      C: set the cursor acter (s)
   */
  {
//CMNT: c_keyword ^|           unsigned char setoldcursor; 
      setoldcursor;






    if (showcursor){
//CMNT: js_style_variables ^|               int col = screen.cur.col; 
 var col= screen.cur.col; 

//CMNT: c_keyword ^|               while (col && (this)->row_buf [(((((this))->term_start + int(screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].t[col] == NOCHAR) 
        while (col && (this)->row_buf [(((((this))->term_start + (screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].t[col] == NOCHAR)
          col--;

//CMNT: c_keyword ^|               crp = &(this)->row_buf [(((((this))->term_start + int(screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].r[col]; 
        crp = &(this)->row_buf [(((((this))->term_start + (screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].r[col];


//CMNT: possible_pointer ^|               cc1 = *crp & (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/); 
        cc1 =  c rp & (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/);
        if ((!!rs[Rs_color + (Color_cursor)]))
          ccol1 = Color_cursor;
        else
          ccol1 = Color_fg;
        if ((!!rs[Rs_color + (Color_cursor2)]))
          ccol2 = Color_cursor2;
        else
          ccol2 = Color_bg;
        if (showcursor && focus){
            if (option (Opt_cursorUnderline))
//CMNT: possible_pointer ^|                     *crp ^= 0x00040000UL /* underline*/; 
               c rp ^= 0x00040000UL /* underline*/;
            else{
//CMNT: possible_pointer ^|                       *crp ^= 0x00020000UL /* reverse video*/; 
                 c rp ^= 0x00020000UL /* reverse video*/;
//CMNT: possible_pointer ^|                       *crp = (((*crp) & ~0x0000007fUL /* 128 colors*/) | (ccol1)); 
                 c rp = ((( c rp) & ~0x0000007fUL /* 128 colors*/) | (ccol1));
//CMNT: possible_pointer ^|                       *crp = (((*crp) & ~0x00003f80UL /* 128 colors*/) | ((ccol2)<<7 /* 0 .. maxTermCOLOR*/)); 
                 c rp = ((( c rp) & ~0x00003f80UL /* 128 colors*/) | ((ccol2)<<7 /* 0 .. maxTermCOLOR*/));
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
              drawn_buf[ocrow].r[oldcursor.col] ^= (0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/);

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
      //     # 2211 "screen.C"
  /*
//CMNT: c_keyword possible_pointer ^|          * E: main pass across every character 
      E: main pass across every acter
   */
  for (row = 0; row < nrow; row++){
//CMNT: c_keyword possible_pointer ^|             text_t *stp = (this)->row_buf [(((((this))->term_start + int(view_start + row)) + (((this))->total_rows)) % (((this))->total_rows))].t; 
      text_t  s tp = (this)->row_buf [(((((this))->term_start + (view_start + row)) + (((this))->total_rows)) % (((this))->total_rows))].t;
//CMNT: c_keyword possible_pointer ^|             rend_t *srp = (this)->row_buf [(((((this))->term_start + int(view_start + row)) + (((this))->total_rows)) % (((this))->total_rows))].r; 
        s rp = (this)->row_buf [(((((this))->term_start + (view_start + row)) + (((this))->total_rows)) % (((this))->total_rows))].r;
//CMNT: possible_pointer ^|             text_t *dtp = drawn_buf[row].t; 
      text_t  d tp = drawn_buf[row].t;
//CMNT: c_keyword possible_pointer ^|             rend_t *drp = drawn_buf[row].r; 
        d rp = drawn_buf[row].r;

      /*
       * E2: OK, now the real pass 
       */
//CMNT: c_keyword js_style_variables possible_pointer remove_casts ^|             int ypixel = (int)((int32_t)((int32_t)(row) * (int32_t)fheight)); 
 var ypixel= ((32_t)((32_t)(row)    (32_t)fheight)); 

      for (col = 0; col < ncol; col++){
          /* compare new text with old - if exactly the same then continue */
//CMNT: c_keyword ^|                 if (stp[col] == dtp[col] /* Must match characters to skip. */ 
          if (stp[col] == dtp[col] /* Must match acters to skip. */
              && ((!(((srp[col]) ^ (drp[col])) & ~0x80000000UL /* be careful when drawing these */)) /* Either rendition the same or   */
                  || (stp[col] == ' ' /* space w/ no background change  */
                      && (((srp[col]) & 0x00020000UL /* reverse video*/) ? (((srp[col]) & (((0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/) | 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) & ~0x00020000UL /* reverse video*/)) | (((srp[col]) & 0x0000007fUL /* 128 colors*/)<<7 /* 0 .. maxTermCOLOR*/)) : ((srp[col]) & (((0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/) | 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | 0x00003f80UL /* 128 colors*/))) == (((drp[col]) & 0x00020000UL /* reverse video*/) ? (((drp[col]) & (((0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/) | 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) & ~0x00020000UL /* reverse video*/)) | (((drp[col]) & 0x0000007fUL /* 128 colors*/)<<7 /* 0 .. maxTermCOLOR*/)) : ((drp[col]) & (((0x00008000UL /* value 2*/ | 0x00004000UL /* value 1*/ | 0x00010000UL /* blink*/ | 0x00020000UL /* reverse video*/ | 0x00040000UL /* underline*/) | 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | 0x00003f80UL /* 128 colors*/))))))
            continue;

//CMNT: c_keyword ^|                 // redraw one or more characters 
          // redraw one or more acters

//CMNT: c_keyword ^|                 // seek to the beginning of wide characters 
          // seek to the beginning of wide acters
          while (__builtin_expect (((stp[col] == NOCHAR && col > 0) != 0),(0)))
            --col;

//CMNT: js_style_variables ^|                 rend_t rend = srp[col]; /* screen rendition (target rendtion) */ 
 var rend= srp[col]; /* screen rendition (target rendtion) */ 
//CMNT: possible_pointer ^|                 text_t *text = stp + col; 
          text_t  t ext = stp + col;
//CMNT: js_style_variables ^|                 int count = 1; 
 var count= 1; 

          dtp[col] = stp[col];
          drp[col] = rend;

//CMNT: c_keyword js_style_variables possible_pointer ^|                 int xpixel = ((int32_t)((int32_t)(col) * (int32_t)fwidth)); 
 var xpixel= ((32_t)((32_t)(col)    (32_t)fwidth)); 

          for (i = 0; ++col < ncol; ){
              if (stp[col] == NOCHAR){
                  dtp[col] = stp[col];
                  drp[col] = rend;
                  count++;
                  i++;
                  continue;
                }
              if (!(!(((rend) ^ (srp[col])) & ~0x80000000UL /* be careful when drawing these */)))
                break;
              count++;
              if (stp[col] != dtp[col]
                  || !(!(((srp[col]) ^ (drp[col])) & ~0x80000000UL /* be careful when drawing these */))){
                  if (have_bg && (i++ > count / 2))
                    break;
                  dtp[col] = stp[col];
                  drp[col] = rend;
                  i = 0;
                }
              else if (have_bg || (stp[col] != ' ' && ++i >= 16))
                break;
            }

          col--; /* went one too far.  move back */
//CMNT: c_keyword ^|                 count -= i; /* dump any matching trailing chars */ 
          count -= i; /* dump any matching trailing s */

          // sometimes we optimize away the trailing NOCHAR's, add them back
          while (__builtin_expect (((i && text[count] == NOCHAR) != 0),(0)))
            count++, i--;

          /*
           * Determine the attributes for the string 
           */
//CMNT: js_style_variables ^|                 int fore = fgcolor_of (rend); // desired foreground 
 var fore= fgcolor_of (rend); // desired foreground 
//CMNT: js_style_variables ^|                 int back = bgcolor_of (rend); // desired background 
 var back= bgcolor_of (rend); // desired background 

          // only do special processing if any attributes are set, which is unlikely
          if (__builtin_expect (((rend & (0x00004000UL /* value 1*/ | 0x00008000UL /* value 2*/ | 0x00040000UL /* underline*/ | 0x00020000UL /* reverse video*/ | 0x00010000UL /* blink*/ | 0x80000000UL /* be careful when drawing these */)) != 0),(0))){
              bool invert = rend & 0x00020000UL /* reverse video*/;
              if (rend & 0x00004000UL /* value 1*/ && fore == Color_fg){
                  if ((!!rs[Rs_color + (Color_BD)]))
                    fore = Color_BD;
                  else
                    invert = !invert;
                }
              if (rend & 0x00008000UL /* value 2*/ && fore == Color_fg){
                  if ((!!rs[Rs_color + (Color_IT)]))
                    fore = Color_IT;
                  else
                    invert = !invert;
                }
              if (rend & 0x00040000UL /* underline*/ && fore == Color_fg && (!!rs[Rs_color + (Color_UL)]))
                fore = Color_UL;
              if (invert){
                    /* invert the column if no highlightColor is set or it is the
                     * current cursor column */ 
                    ::swap (fore, back);
                  if ((!!rs[Rs_color + (Color_RV)]))
                    back = Color_RV;
                  if (fore == back){
                      fore = Color_bg;
                      back = Color_fg;
                    }
                }
              if (rend & 0x00010000UL /* blink*/ && (back == Color_bg || fore == Color_bg)){
                  if (!text_blink_ev.is_active ()){
                      text_blink_ev.again ();
                      hidden_text = 0;
                    }
                  else if (hidden_text)
                    fore = back;
                }
      //     # 2381 "screen.C"
            }

          /*
* Actually do the drawing of the string here 
           */
//CMNT: possible_pointer ^|                 rxvt_font *font = (*fontset[(((rend) & (0x00004000UL /* value 1*/ | 0x00008000UL /* value 2*/)) >> 14)])[(((rend) & 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) >> 24)]; 
          rxvt_font  f ont = ( f ontset[(((rend) & (0x00004000UL /* value 1*/ | 0x00008000UL /* value 2*/)) >> 14)])[(((rend) & 0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) >> 24)];
          if (__builtin_expect (((have_bg && back == Color_bg) != 0),(1))){
//CMNT: c_keyword ^|                     // this is very ugly, maybe push it into ->draw? 
              // this is very ugly, maybe push it o ->draw?
              for (i = 0; i < count; i++) /* don't draw empty strings */
                if (text[i] != ' '){
//CMNT: possible_pointer ^|                           font->draw (*drawable, xpixel, ypixel, text, count, fore, Color_transparent); 
                    font->draw ( d rawable, xpixel, ypixel, text, count, fore, Color_transparent);
                    goto did_clear;
                  }

//CMNT: c_keyword possible_pointer ^|                     if (mapped) XClearArea (dpy, vt, xpixel, ypixel, (unsigned int)((int32_t)(count) * (int32_t)fwidth), (unsigned int)((int32_t)(1) * (int32_t)fheight), 0); 
              if (mapped) XClearArea (dpy, vt, xpixel, ypixel, ( )((32_t)(count)    (32_t)fwidth), ( )((32_t)(1)    (32_t)fheight), 0);
              did_clear: ;
            }
          else
//CMNT: possible_pointer ^|                   font->draw (*drawable, xpixel, ypixel, text, count, fore, back); 
            font->draw ( d rawable, xpixel, ypixel, text, count, fore, back);
          if (__builtin_expect (((rend & 0x00040000UL /* underline*/ && font->descent > 1 && fore != back) != 0),(0))){
                XSetForeground (dpy, gc, pix_colors[fore]);
              XDrawLine (dpy, vt, gc,
                         xpixel, ypixel + font->ascent + 1,
//CMNT: c_keyword possible_pointer ^|                                xpixel + ((int32_t)(count) * (int32_t)fwidth) - 1, ypixel + font->ascent + 1); 
                         xpixel + ((32_t)(count)    (32_t)fwidth) - 1, ypixel + font->ascent + 1);
            }
        } /* for (col....) */
    } /* for (row....) */

  /*
   * G: cleanup cursor and display outline cursor if necessary 
   */
  if (showcursor){
      if (focus){
          if (option (Opt_cursorUnderline))
//CMNT: possible_pointer ^|                   *crp ^= 0x00040000UL /* underline*/; 
             c rp ^= 0x00040000UL /* underline*/;
          else{
//CMNT: possible_pointer ^|                     *crp ^= 0x00020000UL /* reverse video*/; 
               c rp ^= 0x00020000UL /* reverse video*/;

//CMNT: possible_pointer ^|                     *crp = (*crp & ~ (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/)) | cc1; 
               c rp = ( c rp & ~ (0x0000007fUL /* 128 colors*/ | 0x00003f80UL /* 128 colors*/)) | cc1;
            }
        }
      else if (oldcursor.row >= 0){
//CMNT: js_style_variables ^|                 int cursorwidth = 1; 
 var cursorwidth= 1; 
//CMNT: js_style_variables ^|                 int col = oldcursor.col; 
 var col= oldcursor.col; 
//CMNT: c_keyword ^|                 while (col && (this)->row_buf [(((((this))->term_start + int(screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].t[col] == NOCHAR) 
          while (col && (this)->row_buf [(((((this))->term_start + (screen.cur.row)) + (((this))->total_rows)) % (((this))->total_rows))].t[col] == NOCHAR)
            col--;
          while (col + cursorwidth < ncol
                 && drawn_buf[oldcursor.row].t[col + cursorwidth] == NOCHAR)
            cursorwidth++;
          if ((!!rs[Rs_color + (Color_cursor)]))
            XSetForeground (dpy, gc, pix_colors[Color_cursor]);
          else
            XSetForeground (dpy, gc, pix_colors[ccol1]);
          XDrawRectangle (dpy, vt, gc,
//CMNT: c_keyword possible_pointer ^|                                 ((int32_t)((int32_t)(col) * (int32_t)fwidth)), 
                          ((32_t)((32_t)(col)    (32_t)fwidth)),
//CMNT: c_keyword possible_pointer ^|                                 ((int32_t)((int32_t)(oldcursor.row) * (int32_t)fheight)), 
                          ((32_t)((32_t)(oldcursor.row)    (32_t)fheight)),
//CMNT: c_keyword possible_pointer ^|                                 (unsigned int) (((int32_t)(cursorwidth) * (int32_t)fwidth) - 1), 
                          ( ) (((32_t)(cursorwidth)    (32_t)fwidth) - 1),
//CMNT: c_keyword possible_pointer ^|                                 (unsigned int) (((int32_t)(1) * (int32_t)fheight) - lineSpace - 1)); 
                          ( ) (((32_t)(1)    (32_t)fheight) - lineSpace - 1));
        }
    }
  /*
   * H: cleanup selection 
   */
  scr_swap_overlay ();
  false;
  scr_reverse_selection ();
  screen.flags = old_screen_flags;
  num_scr = 0;
  num_scr_allow = 1;
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_remap_chars (line_t &l){ 
rxvt_term.scr_remap_s =function(line_t &l){ 
  if (!l.t)
    return;
  l.touch (); // maybe a bit of an overkill, but it's not performance-relevant
//CMNT: c_keyword ^|         for (int i = ncol; i--; ) 
  for ( i = ncol; i--; )
    l.r[i] = (((l.r[i]) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (l.t[i])) << 24));
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_remap_chars (){ 
rxvt_term.scr_remap_s =function(){ 
//CMNT: c_keyword ^|         for (int i = total_rows; i--; ) 
  for ( i = total_rows; i--; )
//CMNT: c_keyword ^|           scr_remap_chars (row_buf [i]); 
    scr_remap_s (row_buf [i]);

//CMNT: c_keyword ^|         for (int i = nrow; i--; ){ 
  for ( i = nrow; i--; ){
//CMNT: c_keyword ^|             scr_remap_chars (drawn_buf [i]); 
      scr_remap_s (drawn_buf [i]);
//CMNT: c_keyword ^|             scr_remap_chars (swap_buf [i]); 
      scr_remap_s (swap_buf [i]);
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_recolour (){ 
rxvt_term.scr_recolour =function(){ 
  XSetWindowBackground (dpy, parent[0], pix_colors[Color_border]);
  XClearWindow (dpy, parent[0]);
  XSetWindowBackground (dpy, vt, pix_colors[Color_bg]);
  if (scrollBar.win){
     XSetWindowBackground (dpy, scrollBar.win, pix_colors[Color_border]);
     scrollBar.state = STATE_IDLE;
     scrollBar.show (0);
   }
  /* bgPixmap.apply () does not do the following : */
  scr_clear ();
  scr_touch (true);
  want_refresh = 1;
}

/* ------------------------------------------------------------------------- */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_clear (bool really){ 
rxvt_term.scr_clear =function(bool really){ 
  if (!mapped)
    return;

  num_scr_allow = 0;
  want_refresh = 1;

  if (really)
    XClearWindow (dpy, vt);
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2){ 
rxvt_term.scr_xor_rect =function( beg_row,  beg_col,  end_row,  end_col,  rstyle1,  rstyle2){ 
//CMNT: js_style_variables ^|         int view_end = view_start + nrow; 
 var view_end= view_start + nrow; 
//CMNT: c_keyword ^|         int row, col; 
   row, col;
  for (row = max (beg_row, view_start); row <= min (end_row, view_end); row++){
//CMNT: c_keyword possible_pointer ^|             text_t *stp = (this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))].t; 
      text_t  s tp = (this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))].t;
//CMNT: c_keyword possible_pointer ^|             rend_t *srp = (this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))].r; 
        s rp = (this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))].r;
      for (col = beg_col; col < end_col; col++)
        srp[col] ^= rstyle1;
//CMNT: js_style_functions ^|             while (col-- > beg_col && (stp[col] == NOCHAR || unicode::is_space (stp[col]))) 
      while (col-- > beg_col && (stp[col] == NOCHAR ||unicode.is_space =function(stp[col]))) 
        srp[col] ^= rstyle2;
      if (++col < end_col)
        srp[col] ^= rstyle2;
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle){ 
rxvt_term.scr_xor_span =function( beg_row,  beg_col,  end_row,  end_col,  rstyle){ 
//CMNT: js_style_variables ^|         int view_end = view_start + nrow; 
 var view_end= view_start + nrow; 
//CMNT: c_keyword ^|         int row, col; 
   row, col;

  if (beg_row >= view_start){
      col = beg_col;
      row = beg_row;
    }
  else{
      col = 0;
      row = view_start;
    }

  for (; row < min (end_row, view_end); row++, col = 0)
//CMNT: c_keyword possible_pointer ^|           for (rend_t *srp = (this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))].r; col < ncol; col++) 
    for (  s rp = (this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))].r; col < ncol; col++)
      srp[col] ^= rstyle;

  if (row == end_row)
//CMNT: c_keyword possible_pointer ^|           for (rend_t *srp = (this)->row_buf [(((((this))->term_start + int(row)) + (((this))->total_rows)) % (((this))->total_rows))].r; col < end_col; col++) 
    for (  s rp = (this)->row_buf [(((((this))->term_start + (row)) + (((this))->total_rows)) % (((this))->total_rows))].r; col < end_col; col++)
      srp[col] ^= rstyle;
}

/* ------------------------------------------------------------------------- */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_reverse_selection (){ 
rxvt_term.scr_reverse_selection =function(){ 
  if (selection.op
      && current_screen == selection.screen
      && selection.end.row >= view_start){
        scr_xor_span (selection.beg.row, selection.beg.col,
                      selection.end.row, selection.end.col,
                      0x00020000UL /* reverse video*/);
    }
}

/* ------------------------------------------------------------------------- */
/*
* Dump the whole scrollback and screen to the passed filedescriptor.  The 
* invoking routine must close the fd. 
 */
      //     # 2646 "screen.C"
/* ------------------------------------------------------------------------- *
*                           CHARACTER SELECTION                             * 
* ------------------------------------------------------------------------- */ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_check (int check_more){ 
rxvt_term.selection_check =function( check_more){ 
  row_col_t pos;

  if (!selection.op)
    return;

  pos.row = pos.col = 0;
//CMNT: c_keyword ^|         if (!((unsigned int)(selection.beg.row) - (unsigned int)(top_row) < (unsigned int)(nrow) - (unsigned int)(top_row)) 
  if (!(( )(selection.beg.row) - ( )(top_row) < ( )(nrow) - ( )(top_row))
//CMNT: c_keyword ^|             || !((unsigned int)(selection.mark.row) - (unsigned int)(top_row) < (unsigned int)(nrow) - (unsigned int)(top_row)) 
      || !(( )(selection.mark.row) - ( )(top_row) < ( )(nrow) - ( )(top_row))
//CMNT: c_keyword ^|             || !((unsigned int)(selection.end.row) - (unsigned int)(top_row) < (unsigned int)(nrow) - (unsigned int)(top_row)) 
      || !(( )(selection.end.row) - ( )(top_row) < ( )(nrow) - ( )(top_row))
      || (check_more == 1
          && current_screen == selection.screen
          && !((((screen.cur).row) < ((selection.beg).row)) || ((((screen.cur).row) == ((selection.beg).row)) && (((screen.cur).col) < ((selection.beg).col))))
          && ((((screen.cur).row) < ((selection.end).row)) || ((((screen.cur).row) == ((selection.end).row)) && (((screen.cur).col) < ((selection.end).col)))))
      || (check_more == 2
          && ((((selection.beg).row) < ((pos).row)) || ((((selection.beg).row) == ((pos).row)) && (((selection.beg).col) < ((pos).col))))
          && ((((selection.end).row) > ((pos).row)) || ((((selection.end).row) == ((pos).row)) && (((selection.end).col) > ((pos).col)))))
      || (check_more == 3
          && ((((selection.end).row) > ((pos).row)) || ((((selection.end).row) == ((pos).row)) && (((selection.end).col) > ((pos).col)))))
      || (check_more == 4 /* screen width change */
          && (selection.beg.row != selection.end.row
              || selection.end.col > ncol)))
    selection.beg.row = selection.beg.col = selection.end.row = selection.end.col = 0;
}

/* ------------------------------------------------------------------------- */
/*
* Paste a selection direct to the command fd 
 */

// removed rxvt_term.selection_request =function(Time tm,  selnum){ 
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::paste (char *data, unsigned int len){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_paste (Window win, Atom prop, bool delete_prop){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::incr_cb (ev::timer &w, int revents){ 
rxvt_term.incr_cb =function(ev::timer &w,  revents){ 
  selection_wait = 0 /* Not waiting */;

  incr_buf_size = 0;
  free (incr_buf);

  rxvt_warn ("data loss: timeout on INCR selection paste, ignoring.\n");
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_property (Window win, Atom prop){ 
//CMNT: js_style_functions c_keyword ^|       int rxvt_term::selection_request_other (Atom target, int selnum){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_clear (){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_make (Time tm){ 
//CMNT: js_style_functions ^|       bool rxvt_term::selection_grab (Time tm){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_click (int clicks, int x, int y){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_start_colrow (int col, int row){ 
//CMNT: c_keyword ^|       /* what do we want: spaces/tabs are delimiters or cutchars or non-cutchars */ 
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_extend (int x, int y, int flag){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_rotate (int x, int y){ 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::selection_send (const XSelectionRequestEvent &rq){ 
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
//CMNT: js_style_variables ^|             rend_t r = (0 | Color_Black | (Color_Yellow << 7 /* 0 .. maxTermCOLOR*/)); 
 var r= (0 | Color_Black | (Color_Yellow << 7 /* 0 .. maxTermCOLOR*/)); 

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

//CMNT: c_keyword ^|         for (int y = 0; y < ov.h; y++){ 
  for ( y = 0; y < ov.h; y++){
      delete [] ov.text[y];
      delete [] ov.rend[y];
    }

  delete [] ov.text; ov.text = 0;
  delete [] ov.rend; ov.rend = 0;
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::scr_overlay_set (int x, int y, text_t text, rend_t rend){ 
rxvt_term.scr_overlay_set =function( x,  y, text_t text,  rend){ 
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
//CMNT: c_keyword js_style_variables ^|             int width = (((unsigned int)(t) - (unsigned int)(0x20) <= (unsigned int)(0x7e) - (unsigned int)(0x20)) ? 1 : wcwidth (t)); 
 var width= ((( )(t) - ( )(0x20) < = ( )(0x7e) - ( )(0x20)) ? 1 : wcwidth (t));

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
//CMNT: c_keyword ^|         if (((unsigned int)(screen.cur.col - ov.x) - (unsigned int)(0) < (unsigned int)(ov.w) - (unsigned int)(0)) 
  if ((( )(screen.cur.col - ov.x) - ( )(0) < ( )(ov.w) - ( )(0))
//CMNT: c_keyword ^|             && ((unsigned int)(screen.cur.row - ov.y) - (unsigned int)(0) < (unsigned int)(ov.h) - (unsigned int)(0))) 
      && (( )(screen.cur.row - ov.y) - ( )(0) < ( )(ov.h) - ( )(0)))
    screen.flags &= ~(1<<1) /* cursor visible?                   */;

  // swap screen mem with overlay
//CMNT: c_keyword ^|         for (int y = ov.h; y--; ){ 
  for ( y = ov.h; y--; ){
//CMNT: possible_pointer ^|             text_t *t1 = ov.text[y]; 
      text_t  t 1 = ov.text[y];
//CMNT: c_keyword possible_pointer ^|             rend_t *r1 = ov.rend[y]; 
        r 1 = ov.rend[y];

//CMNT: c_keyword possible_pointer ^|             text_t *t2 = (this)->row_buf [(((((this))->term_start + int(y + ov.y + view_start)) + (((this))->total_rows)) % (((this))->total_rows))].t + ov.x; 
      text_t  t 2 = (this)->row_buf [(((((this))->term_start + (y + ov.y + view_start)) + (((this))->total_rows)) % (((this))->total_rows))].t + ov.x;
//CMNT: c_keyword possible_pointer ^|             rend_t *r2 = (this)->row_buf [(((((this))->term_start + int(y + ov.y + view_start)) + (((this))->total_rows)) % (((this))->total_rows))].r + ov.x; 
        r 2 = (this)->row_buf [(((((this))->term_start + (y + ov.y + view_start)) + (((this))->total_rows)) % (((this))->total_rows))].r + ov.x;

//CMNT: c_keyword ^|             for (int x = ov.w; x--; ){ 
      for ( x = ov.w; x--; ){
//CMNT: possible_pointer ^|                 text_t t = *t1; *t1++ = *t2; *t2++ = t; 
          text_t t =  t 1;  t 1++ =  t 2;  t 2++ = t;
//CMNT: js_style_variables possible_pointer ^|                 rend_t r = *r1; *r1++ = *r2; *r2++ = (((r) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (t)) << 24)); 
 var r=  r 1;  r 1++  =  r 2;  r 2++ = (((r) & ~0xff000000UL /* plenty(?) of fonts, includes RS_Careful*/) | (((this)->fontset[0]->find_font (t)) << 24));
        }
    }
}


/* ------------------------------------------------------------------------- */