// command.C
void key_press (XKeyEvent &ev);
void key_release (XKeyEvent &ev);
unsigned int cmd_write (const char *str, unsigned int count);

wchar_t next_char () ;
wchar_t cmd_getc () ;
uint32_t next_octet () ;
uint32_t cmd_get8 () ;

void cmd_parse ();
void mouse_report (XButtonEvent &ev);
void button_press (XButtonEvent &ev);
void button_release (XButtonEvent &ev);
void focus_in ();
void focus_out ();

void set_urgency (bool enable) { }

void update_fade_color (unsigned int idx);

FILE *popen_printer ();
int pclose_printer (FILE *stream);

void process_print_pipe ();
void process_nonprinting (unicode_t ch);
void process_escape_vt52 (unicode_t ch);
void process_escape_seq ();
void process_csi_seq ();
void process_window_ops (const int *args, unsigned int nargs);
char *get_to_st (unicode_t &ends_how);
void process_dcs_seq ();
void process_osc_seq ();
void process_color_seq (int report, int color, const char *str, char resp);
void process_xterm_seq (int op, const char *str, char resp);
int privcases (int mode, unsigned long bit);
void process_terminal_mode (int mode, int priv, unsigned int nargs, const int *arg);
void process_sgr_mode (unsigned int nargs, const int *arg);
void process_graphics ();
// init.C
void init_vars ();
const char **init_resources (int argc, const char *const *argv);
void init (int argc, const char *const *argv, stringvec *envv);
void init_env ();
void set_locale (const char *locale);
void init_xlocale ();
void init_command (const char *const *argv);
void run_command (const char *const *argv);
int run_child (const char *const *argv);
void color_aliases (int idx);
void create_windows (int argc, const char *const *argv);
void get_colours ();
void get_ourmods ();
// main.C
void tt_winch ();
rxvt_term ();
~rxvt_term ();
void destroy ();
void emergency_cleanup ();
void recolour_cursor ();
void resize_all_windows (unsigned int newwidth, unsigned int newheight, int ignoreparent);
void window_calc (unsigned int newwidth, unsigned int newheight);
bool set_fonts ();
void set_string_property (Atom prop, const char *str, int len = -1);
void set_utf8_property (Atom prop, const char *str, int len = -1);
void set_title (const char *str);
void set_icon_name (const char *str);
void set_window_color (int idx, const char *color);
void set_colorfgbg ();
bool set_color (rxvt_color &color, const char *name);
void alias_color (int dst, int src);
void set_widthheight (unsigned int newwidth, unsigned int newheight);
void get_window_origin (int &x, int &y);
Pixmap get_pixmap_property (int prop_id);

// screen.C

void lalloc (line_t &l) const
{
  l.t = (text_t *)talloc->alloc ();
  l.r = (rend_t *)ralloc->alloc ();
}
//# 1316 "rxvt.h"
void lresize (line_t &l) const
{
  if (!l.t)
    return;

  l.t = (text_t *)talloc->alloc (l.t, prev_ncol * sizeof (text_t));
  l.r = (rend_t *)ralloc->alloc (l.r, prev_ncol * sizeof (rend_t));

  l.l = min (l.l, ncol);

  if (ncol > prev_ncol)
    scr_blank_line (l, prev_ncol, ncol - prev_ncol, (0 | Color_fg | (Color_bg << 7 /* 0 .. maxTermCOLOR*/)));
}

int fgcolor_of (rend_t r) const
{
  int base = (((r) & 0x0000007fUL /* 128 colors*/));

  if (r & 0x00004000UL /* value 1*/

      && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR)))
    base += minBrightCOLOR - minCOLOR;

  return base;
}

int bgcolor_of (rend_t r) const
{
  int base = (((r) & 0x00003f80UL /* 128 colors*/)>>7 /* 0 .. maxTermCOLOR*/);

  if (r & 0x00010000UL /* blink*/

      && ((unsigned int)(base) - (unsigned int)(minCOLOR) <= (unsigned int)(minBrightCOLOR) - (unsigned int)(minCOLOR)))
    base += minBrightCOLOR - minCOLOR;

  return base;
}

bool option (uint8_t opt) const
{
  if (!opt)
    return 0;

  --opt;
  return options[opt >> 3] & (1 << (opt & 7));
}

void set_option (uint8_t opt, bool set = true){
  if (!opt)
    return;

  --opt;
  if (set)
    options[opt >> 3] |= (1 << (opt & 7));
  else
    options[opt >> 3] &= ~(1 << (opt & 7));
}

void set_privmode (unsigned bit, int set){
  if (set)
    priv_modes |= bit;
  else
    priv_modes &= ~bit;
}

// modifies first argument(!)
void paste (char *data, unsigned int len) ;
void scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs) const ;
void scr_blank_screen_mem (line_t &l, rend_t efs) const ;
void scr_kill_char (line_t &l, int col) const ;
int scr_scroll_text (int row1, int row2, int count) ;
void scr_reset ();
void scr_release () ;
void scr_clear (bool really = false) ;
void scr_refresh () ;
bool scr_refresh_rend (rend_t mask, rend_t value) ;
void scr_erase_screen (int mode) ;

void scr_touch (bool refresh) ;
void scr_expose (int x, int y, int width, int height, bool refresh) ;
void scr_recolour () ;
void scr_remap_chars () ;
void scr_remap_chars (line_t &l) ;

enum cursor_mode { SAVE, RESTORE };

void scr_poweron ();
void scr_soft_reset () ;
void scr_cursor (cursor_mode mode) ;
void scr_do_wrap () ;
void scr_swap_screen () ;
void scr_change_screen (int scrn);
void scr_color (unsigned int color, int fgbg) ;
void scr_rendition (int set, int style) ;
void scr_add_lines (const wchar_t *str, int len, int minlines = 0) ;
void scr_backspace () ;
void scr_tab (int count, bool ht = false) ;
void scr_gotorc (int row, int col, int relative) ;
void scr_index (enum page_dirn direction) ;
void scr_erase_line (int mode) ;
void scr_E () ;
void scr_insdel_lines (int count, int insdel) ;
void scr_insdel_chars (int count, int insdel) ;
void scr_scroll_region (int top, int bot) ;
void scr_cursor_visible (int mode) ;
void scr_autowrap (int mode) ;
void scr_relative_origin (int mode) ;
void scr_insert_mode (int mode) ;
void scr_set_tab (int mode) ;
void scr_rvideo_mode (bool on) ;
void scr_report_position () ;
void set_font_style () ;
void scr_charset_choose (int set) ;
void scr_charset_set (int set, unsigned int ch) ;
void scr_move_to (int y, int len) ;
bool scr_page (enum page_dirn direction, int nlines) ;
bool scr_changeview (int new_view_start) ;
void scr_bell () ;
void scr_printscreen (int fullhist) ;
void scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2) ;
void scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle) ;
void scr_reverse_selection () ;
void scr_dump (int fd) ;

void selection_check (int check_more) ;
void selection_paste (Window win, Atom prop, bool delete_prop) ;
void selection_property (Window win, Atom prop) ;
void selection_request (Time tm, int selnum = 0x01) ;
int selection_request_other (Atom target, int selnum) ;
void selection_clear () ;
void selection_make (Time tm);
bool selection_grab (Time tm) ;
void selection_start_colrow (int col, int row) ;
void selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret) ;
void selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange) ;
void selection_remove_trailing_spaces () ;
void selection_send (const XSelectionRequestEvent &rq) ;
void selection_click (int clicks, int x, int y) ;
void selection_extend (int x, int y, int flag) ;
void selection_rotate (int x, int y) ;

// xdefaults.C
void get_options (int argc, const char *const *argv);
int parse_keysym (const char *str, const char *arg);
const char *x_resource (const char *name);
void extract_resources ();
};
//# 51 "command.C" 2
//# 1 "rxvtperl.h" 1
/*
 * rxvtperl.h
 */
//# 52 "command.C" 2
//# 1 "version.h" 1
// VERSION _must_ be \d.\d+
//# 53 "command.C" 2
//# 1 "command.h" 1
/*
 * command.h
 */


// STRING_MAX __MUST__ not be larger than what CBUFSIZ can hold.
//# 48 "command.h"
/*
 * ESC-Z processing:
 *
 * By stealing a sequence to which other xterms respond, and sending the
 * same number of characters, but having a distinguishable sequence,
 * we can avoid having a timeout (when not under an rxvt) for every login
 * shell to auto-set its DISPLAY.
 *
 * This particular sequence is even explicitly stated as obsolete since
 * about 1985, so only very old software is likely to be confused, a
 * confusion which can likely be remedied through termcap or TERM. Frankly,
 * I doubt anyone will even notice.  We provide a #ifdef just in case they
 * don't care about auto-display setting.  Just in case the ancient
 * software in question is broken enough to be case insensitive to the 'c'
 * character in the answerback string, we make the distinguishing
 * characteristic be capitalization of that character. The length of the
 * two strings should be the same so that identical read (2) calls may be
 * used.
 */
//# 54 "command.C" 2

//# 1 "/usr/include/c++/4.0.0/csignal" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

//
// ISO C++ 14882: 20.4.6  C library
//

/** @file csignal
 *  This is a Standard C++ Library file.  You should @c #include this file
 *  in your programs, rather than any of the "*.h" implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c signal.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std.
 */


       
//# 48 "/usr/include/c++/4.0.0/csignal" 3

//# 1 "/usr/include/signal.h" 1 3 4
/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)signal.h	8.3 (Berkeley) 3/30/94
 */
//# 50 "/usr/include/c++/4.0.0/csignal" 2 3

// Get rid of those macros defined in <signal.h> in lieu of real functions.
namespace std
{
  using ::sig_atomic_t;
  using ::signal;
  using ::raise;
}
//# 60 "command.C" 2

/*----------------------------------------------------------------------*/
//# 78 "command.C"

void
rxvt_term::iso14755_54 (int x, int y){
  x = ((int32_t)((int32_t)(x)) / (int32_t)fwidth);
  y = ((int32_t)((int32_t)(y)) / (int32_t)fheight);

  if (!((unsigned int)(x) - (unsigned int)(0) < (unsigned int)(ncol) - (unsigned int)(0))
      || !((unsigned int)(y) - (unsigned int)(0) < (unsigned int)(nrow) - (unsigned int)(0)))
    return;

  for (;;){
    const line_t &l = (this)->row_buf [(((((this))->term_start + int(y + view_start)) + (((this))->total_rows)) % (((this))->total_rows))];

    text_t t = l.t[x];

    if (t != NOCHAR || !x){
      iso14755_51 (l.t[x], l.r[x], x, y);
      iso14755buf = 0x10000000UL /* code feedback (section 5.4)*/;
      break;
    }

    x--;
  }
}

void
rxvt_term::iso14755_51 (unicode_t ch, rend_t r, int x, int y){
  rxvt_fontset *fs = (this)->fontset[0];
  rxvt_font *f = (*fs)[fs->find_font (ch)];
  wchar_t *chr, *alloc, ch2, *fname;
  int len;

  fname = rxvt_utf8towcs (f->name);
  //# 182 "command.C"
  {
    ch2 = ch;

    alloc = 0;
    chr = &ch2;
    len = 1;
  }

  char attr[80]; // plenty

  sprintf (attr, "%08x = fg %d bg %d%s%s%s%s%s%s",
           (int)r,
           fgcolor_of (r), bgcolor_of (r),
           r & 0x00004000UL /* value 1*/ ? " bold" : "",
           r & 0x00008000UL /* value 2*/ ? " italic" : "",
           r & 0x00010000UL /* blink*/ ? " blink" : "",
           r & 0x00020000UL /* reverse video*/ ? " rvid" : "",
           r & 0x00040000UL /* underline*/ ? " uline" : "",
           r & 0x80000000UL /* be careful when drawing these */ ? " careful" : "");

  int width = wcswidth (fname, wcslen (fname));

  max_it (width, 8+5); // for char + hex
  max_it (width, (strlen)(attr));

  if (y >= 0){
    y = (y >= nrow - len - 4 && x < width + 2) ? 0 : -1;
    x = 0;
  }

  scr_overlay_new (x, y, width, len + 2);

  r = ((((0 | Color_Black | (Color_Yellow << 7 /* 0 .. maxTermCOLOR*/))) & ~(0x00004000UL /* value 1*/ | 0x00008000UL /* value 2*/)) | (((((r) & (0x00004000UL /* value 1*/ | 0x00008000UL /* value 2*/)) >> 14)) << 14));

  for (int y = 0; y < len; y++){
    char buf[9];

    ch = *chr++;

    sprintf (buf, "%8x", ch);
    scr_overlay_set (0, y, buf);
    scr_overlay_set (9, y, '=');

    if (ch >= 0x10000)
      ch = 0xfffd;

    scr_overlay_set (11, y, ch, r);

    if ((((unsigned int)(ch) - (unsigned int)(0x20) <= (unsigned int)(0x7e) - (unsigned int)(0x20)) ? 1 : wcwidth (ch)) >= 2)
      scr_overlay_set (12, y, NOCHAR, r);
  }

  //  {
  //    char buf[4+4+3+1];
  //    snprintf (buf, sizeof (buf), "(%.4d|%.4d)", x, y);
  //    scr_overlay_set (0, 0, buf);
  //  }
  scr_overlay_set (0, len , attr);
  scr_overlay_set (0, len + 1, fname);

  free (fname);

}
void
rxvt_term::commit_iso14755 (){
  wchar_t ch[2];

  ch[0] = iso14755buf & 0x0fffffffUL;
  ch[1] = 0;

  if (iso14755buf & 0x40000000UL /* basic (section 5.1)*/){
    char mb[16];
    int len;

    // allow verbatim 0-bytes and control-bytes to be entered
    if (ch[0] >= 0x20)
      len = wcstombs (mb, ch, 16);
    else {
      mb[0] = ch[0];
      len = 1;
    }

    if (len > 0)
      tt_write (mb, len);
    else
      scr_bell ();
  }

  iso14755buf = 0;
}

//# 966 "command.C"
void
rxvt_term::flush (){
  flush_ev.stop ();
  //# 979 "command.C"
  if (want_refresh){
    if (false){
      int row = view_start;
      int end_row = row + nrow;

      while (row > top_row && (this)->row_buf [(((((this))->term_start + int(row - 1)) + (((this))->total_rows)) % (((this))->total_rows))].is_longer ())
        --row;

      do
        {
          int start_row = row;
          line_t *l;

          do
            {
              l = &(this)->row_buf [(((((this))->term_start + int(row++)) + (((this))->total_rows)) % (((this))->total_rows))];

              if (!(l->f & 0x0002 /* line has been filtered*/)){
                // line not filtered, mark it as filtered
                l->f |= 0x0002 /* line has been filtered*/;
                while (l->is_longer ()){
                  l = &(this)->row_buf [(((((this))->term_start + int(row++)) + (((this))->total_rows)) % (((this))->total_rows))];
                  l->f |= 0x0002 /* line has been filtered*/;
                }

                // and filter it
                false;

                break;
              }
            }
          while (l->is_longer () && row < end_row);
        }
      while (row < end_row);
    }

    scr_refresh ();
    scrollBar.show (1);

  }

  display->flush ();
}

/* checks wether a refresh is requested and starts the refresh timer */
void
rxvt_term::refresh_check (){
  if (want_refresh && !flush_ev.is_active ())
    flush_ev.start (1. / 60.); // refresh at max. 60 Hz normally

  display->flush ();
}

void
rxvt_term::flush_cb (ev::timer &w, int revents){
  make_current ();

  refresh_count = 0;
  flush ();
}
//# 1059 "command.C"
void
rxvt_term::text_blink_cb (ev::timer &w, int revents){
  if (scr_refresh_rend (0x00010000UL /* blink*/, 0x00010000UL /* blink*/)){
    hidden_text = !hidden_text;
    want_refresh = 1;
    refresh_check ();
  }
  else
    w.stop ();
}
//# 1149 "command.C"
bool
rxvt_term::pty_fill (){
  ssize_t n = cmdbuf_endp - cmdbuf_ptr;

  if (2048 /* size of command buffer*/ == n){
    rxvt_warn ("PLEASE REPORT: pty_fill on full buffer, draining input, continuing.\n");
    n = 0;
  }

  memmove (cmdbuf_base, cmdbuf_ptr, n);
  cmdbuf_ptr = cmdbuf_base;
  cmdbuf_endp = cmdbuf_ptr + n;

  ssize_t r = read (pty->pty, cmdbuf_endp, 2048 /* size of command buffer*/ - n);

  if (r > 0){
    cmdbuf_endp += r;
    return true;
  }
  else if (r < 0 && ((*__error()) == 35 /* Resource temporarily unavailable */ || (*__error()) == 4 /* Interrupted system call */)){


  }
  else {
    pty_ev.stop ();

    if (!option (Opt_hold))
      destroy ();
  }

  return false;
}

void
rxvt_term::pty_cb (ev::io &w, int revents){
  make_current ();

  if (revents & ev::READ)
    // loop, but don't allow a single term to monopolize us
    for (int i = 8 /* never call pty_fill/cmd_parse more than this often in a row*/; i-- && pty_fill (); )
      cmd_parse ();

  if (revents & ev::WRITE)
    pty_write ();

  refresh_check ();
}

void
rxvt_term::pointer_unblank (){
  XDefineCursor (dpy, vt, TermWin_cursor);
  recolour_cursor ();



}
//# 1241 "command.C"
void
rxvt_term::mouse_report (XButtonEvent &ev){
  int button_number, key_state = 0;
  int x, y;
  int code = 32;

  x = ((int32_t)((int32_t)(ev.x)) / (int32_t)fwidth);
  y = ((int32_t)((int32_t)(ev.y)) / (int32_t)fheight);
  if (ev.type == 6){
    if (x == mouse_row && y == mouse_col)
      return;
    mouse_row = x;
    mouse_col = y;
    code += 32;
  }

  if (MEvent.button == 0L /* special Button Code, passed to GrabButton */)
    button_number = 3;
  else {
    button_number = MEvent.button - 1;
    /* add 0x3D for wheel events, like xterm does */
    if (button_number >= 3)
      button_number += (64 - 3);
  }

  if (priv_modes & (1UL<<12)){
    /*
     * do not report ButtonRelease
     * no state info allowed
     */
    key_state = 0;
    if (button_number == 3)
      return;
  }
  else {
    /* XTerm mouse reporting needs these values:
     *   4 = Shift
     *   8 = Meta
     *  16 = Control
     * plus will add in our own Double-Click reporting
     *  32 = Double Click
     */
    key_state = ((MEvent.state & (1<<0)) ? 4 : 0)
      + ((MEvent.state & ModMetaMask) ? 8 : 0)
      + ((MEvent.state & (1<<2)) ? 16 : 0);

  }
  //# 1312 "command.C"
  tt_printf ("\033[M%c%c%c",
             (code + button_number + key_state),
             (32 + x + 1),
             (32 + y + 1));
}

/*{{{ process an X event */
void
rxvt_term::x_cb (XEvent &ev){
  make_current ();

  Display * const dpy = this->dpy;

  if (ev.xany.window == vt
      && false
      && false)
    return;

  // for XQueryPointer
  Window unused_root, unused_child;
  int unused_root_x, unused_root_y;
  unsigned int unused_mask;

  switch (ev.type){
  case 2:
    key_press (ev.xkey);
    break;

  case 3:
    key_release (ev.xkey);
    break;

  case 4:
    button_press (ev.xbutton);
    break;

  case 5:
    button_release (ev.xbutton);
    break;

  case 33:
    if (ev.xclient.format == 32
        && !false){
      if (ev.xclient.message_type == xa[XA_WM_PROTOCOLS]){
        if (!false){
          if (ev.xclient.data.l[0] == xa[XA_WM_DELETE_WINDOW]){
            if (!false)
              destroy ();
          }


        }
      }
      //# 1384 "command.C"
    }
    break;

    /*
     * XXX: this is not the _current_ arrangement
     * Here's my conclusion:
     * If the window is completely unobscured, use bitblt's
     * to scroll. Even then, they're only used when doing partial
     * screen scrolling. When partially obscured, we have to fill
     * in the GraphicsExpose parts, which means that after each refresh,
     * we need to wait for the graphics expose or Noexpose events,
     * which ought to make things real slow!
     */
  case 15:
    switch (ev.xvisibility.state){
    case 0:
      refresh_type = FAST_REFRESH;
      break;
    case 1:
      refresh_type = SLOW_REFRESH;
      break;
    default:
      refresh_type = NO_REFRESH;
      break;
    }
    break;

  case 9:
    if (ev.xfocus.detail != 2
        && ev.xfocus.detail != 5
        && ev.xfocus.mode != 1)
      focus_in ();
    break;

  case 10:
    if (ev.xfocus.detail != 2
        && ev.xfocus.detail != 5
        && ev.xfocus.mode != 1)
      focus_out ();
    break;

  case 22:
    /*fprintf (stderr, "ConfigureNotify for %X, parent is %X, geom is %dx%d%+d%+d, old geom was %dx%d\n",
      ev.xconfigure.window, parent[0], ev.xconfigure.width, ev.xconfigure.height, ev.xconfigure.x, ev.xconfigure.y,
      szHint.width, szHint.height);*/
    if (ev.xconfigure.window == parent[0]){
      while (XCheckTypedWindowEvent (dpy, ev.xconfigure.window, 22, &ev))
        ;

      if (szHint.width != ev.xconfigure.width || szHint.height != ev.xconfigure.height){
        seen_resize = 1;
        resize_all_windows (ev.xconfigure.width, ev.xconfigure.height, 1);
      }
      else {
        //# 1451 "command.C"
      }

      false;
    }
    break;

  case 28:
    if (!false)
      if (ev.xproperty.atom == xa[XA_VT_SELECTION]
          && ev.xproperty.state == 0)
        selection_property (ev.xproperty.window, ev.xproperty.atom);

    break;

  case 29:
    selection_clear ();
    break;

  case 31:
    if (selection_wait == 0x01 /* normal selection */)
      selection_paste (ev.xselection.requestor, ev.xselection.property, true);
    break;

  case 30:
    selection_send (ev.xselectionrequest);
    break;

  case 19:
    //# 1495 "command.C"
    mapped = 1;

    text_blink_ev.start ();

    false;
    break;

  case 18:
    mapped = 0;

    text_blink_ev.stop ();

    false;
    break;

  case 13:
  case 12:
    if (ev.xany.window == vt){
      do
        {
          scr_expose (ev.xexpose.x, ev.xexpose.y,
                      ev.xexpose.width, ev.xexpose.height, 0);
        }
      while (XCheckTypedWindowEvent (dpy, vt, ev.xany.type, &ev));

      ev.xany.type = ev.xany.type == 12 ? 13 : 12;

      while (XCheckTypedWindowEvent (dpy, vt, ev.xany.type, &ev)){
        scr_expose (ev.xexpose.x, ev.xexpose.y,
                    ev.xexpose.width, ev.xexpose.height, 0);
      }

      want_refresh = 1;
    }
    else {
      XEvent unused_event;

      while (XCheckTypedWindowEvent (dpy, ev.xany.window, 12, &unused_event))
        ;
      while (XCheckTypedWindowEvent (dpy, ev.xany.window, 13, &unused_event))
        ;

      if (scrollBar.state && ev.xany.window == scrollBar.win){
        scrollBar.state = STATE_IDLE;
        scrollBar.show (0);
      }
    }
    break;

  case 6:


    if ((priv_modes & (1UL<<20) && ev.xbutton.state & ((1<<8)|(1<<9)|(1<<10)))
        || priv_modes & (1UL<<21))
      mouse_report (ev.xbutton);
    if ((priv_modes & ((1UL<<12)|(1UL<<13)|(1UL<<20)|(1UL<<21))) && !bypass_keystate)
      break;

    if (ev.xany.window == vt){
      if (false
          && false)
        ; // nop
      else if (ev.xbutton.state & ((1<<8) | (1<<10))){
        while (XCheckTypedWindowEvent (dpy, vt, 6, &ev))
          ;

        XQueryPointer (dpy, vt,
                       &unused_root, &unused_child,
                       &unused_root_x, &unused_root_y,
                       &ev.xbutton.x, &ev.xbutton.y,
                       &ev.xbutton.state);

        /* deal with a `jumpy' mouse */
        if ((ev.xmotion.time - MEvent.time) > 50){
          // 5.4
          if (iso14755buf & (0x80000000UL | 0x10000000UL /* code feedback (section 5.4)*/)){
            iso14755_54 (ev.xbutton.x, ev.xbutton.y);
            break;
          }

          selection_extend (ev.xbutton.x, ev.xbutton.y,
                            ev.xbutton.state & (1<<10) ? 2 : 0);
          //# 1636 "command.C"
        }

      }
    }
    else if (scrollBar.state == STATE_MOTION && ev.xany.window == scrollBar.win){
      while (XCheckTypedWindowEvent (dpy, scrollBar.win,
                                     6, &ev))
        ;

      XQueryPointer (dpy, scrollBar.win,
                     &unused_root, &unused_child,
                     &unused_root_x, &unused_root_y,
                     &ev.xbutton.x, &ev.xbutton.y,
                     &unused_mask);
      scr_move_to (((ev.xbutton.y) - scrollBar.beg) - csrO,
                   scrollBar.size ());
      want_refresh = 1;
      scrollBar.show (1);
    }
    break;
  }
  //# 1686 "command.C"
  refresh_check ();
}
//# 1705 "command.C"
void
rxvt_term::focus_in (){
  if (!focus){
    focus = 1;
    want_refresh = 1;
    //# 1736 "command.C"
    false;
  }
}

void
rxvt_term::focus_out (){
  if (focus){
    focus = 0;
    want_refresh = 1;


    if (iso14755buf){
      iso14755buf = 0;

      scr_overlay_off ();

    }
    //# 1779 "command.C"
    false;
  }
}

void
rxvt_term::update_fade_color (unsigned int idx){
  //# 1794 "command.C"
}
//# 1829 "command.C"
void
rxvt_term::button_press (XButtonEvent &ev){
  int reportmode = 0, clickintime;

  bypass_keystate = ev.state & (ModMetaMask | (1<<0));

  if (!bypass_keystate)
    reportmode = !! (priv_modes & ((1UL<<12)|(1UL<<13)|(1UL<<20)|(1UL<<21)));

  /*
   * VT window processing of button press
   */
  if (ev.window == vt){
    if (false)
      return;
    // 5.4
    if (iso14755buf & (0x80000000UL | 0x10000000UL /* code feedback (section 5.4)*/)){
      iso14755_54 (ev.x, ev.y);
      return;
    }
    clickintime = ev.time - MEvent.time < 500;

    if (reportmode){
      /* mouse report from vt window */
      /* save the xbutton state (for ButtonRelease) */
      MEvent.state = ev.state;
      //# 1888 "command.C"
      MEvent.button = ev.button;
      mouse_report (ev);
    }
    else {
      if (ev.button != MEvent.button)
        MEvent.clicks = 0;

      switch (ev.button){
      case 1:
        /* allow meta + click to select rectangular areas */
        /* should be done in screen.C */

        selection.rect = false;
        /* allow shift+left click to extend selection */
        if (ev.state & (1<<0) && !(priv_modes & ((1UL<<12)|(1UL<<13)|(1UL<<20)|(1UL<<21)))){
          if (MEvent.button == 1 && clickintime)
            selection_rotate (ev.x, ev.y);
          else
            selection_extend (ev.x, ev.y, 1);
        }
        else {
          if (MEvent.button == 1 && clickintime)
            MEvent.clicks++;
          else
            MEvent.clicks = 1;

          selection_click (MEvent.clicks, ev.x, ev.y);
        }

        MEvent.button = 1;
        break;

      case 3:
        if (MEvent.button == 3 && clickintime)
          selection_rotate (ev.x, ev.y);
        else
          selection_extend (ev.x, ev.y, 1);

        MEvent.button = 3;
        break;
      }
    }

    MEvent.time = ev.time;
    return;
  }

  /*
   * Scrollbar window processing of button press
   */
  if (scrollBar.state && ev.window == scrollBar.win){
    page_dirn direction = NO_DIR;

    if (scrollBar.upButton (ev.y))
      direction = UP; /* up */
    else if (scrollBar.dnButton (ev.y))
      direction = DN; /* down */

    scrollBar.state = STATE_IDLE;
    /*
     * Rxvt-style scrollbar:
     * move up if mouse is above slider
     * move dn if mouse is below slider
     *
     * XTerm-style scrollbar:
     * Move display proportional to pointer location
     * pointer near top -> scroll one line
     * pointer near bot -> scroll full page
     */

    if (reportmode){
      /*
       * Mouse report disabled scrollbar:
       * arrow buttons - send up/down
       * click on scrollbar - send pageup/down
       */
      if (direction == UP)
        tt_printf ("\033[A");
      else if (direction == DN)
        tt_printf ("\033[B");
      else
        switch (ev.button){
        case 2:
          tt_printf ("\014");
          break;
        case 1:
          tt_printf ("\033[6~");
          break;
        case 3:
          tt_printf ("\033[5~");
          break;
        }
    }
    else

      {
        if (direction != NO_DIR){


          if (scr_page (direction, 1)){
            if (direction == UP)
              scrollBar.state = STATE_UP;
            else
              scrollBar.state = STATE_DOWN;
          }
        }
        else
          switch (ev.button){
          case 2:
            switch (scrollBar.align){
            case 1:
              csrO = 0;
              break;
            case 0:
              csrO = (scrollBar.bot - scrollBar.top) / 2;
              break;
            case 2:
              csrO = scrollBar.bot - scrollBar.top;
              break;
            }

            if (scrollBar.style == 2
                || ((ev.y) < scrollBar.top)
                || ((ev.y) > scrollBar.bot))
              scr_move_to (((ev.y) - scrollBar.beg) - csrO, scrollBar.size ());

            scrollBar.state = STATE_MOTION;
            break;

          case 1:
            if (scrollBar.align == 0)
              csrO = ev.y - scrollBar.top;
            /* FALLTHROUGH */

          case 3:
            if (scrollBar.style != 2){
              if (((ev.y) < scrollBar.top))

                scr_page (UP, nrow - 1);

              else if (((ev.y) > scrollBar.bot))

                scr_page (DN, nrow - 1);

              else
                scrollBar.state = STATE_MOTION;
            }
            else {
              scr_page ((ev.button == 1 ? DN : UP),
                        (nrow
                         * ((ev.y) - scrollBar.beg)
                         / scrollBar.size ()));
            }

            break;
          }
      }

    return;
  }
}

void
rxvt_term::button_release (XButtonEvent &ev){
  int reportmode = 0;

  csrO = 0; /* reset csr Offset */
  if (!bypass_keystate)
    reportmode = !! (priv_modes & ((1UL<<12)|(1UL<<13)|(1UL<<20)|(1UL<<21)));

  if (scrollBar.state == STATE_UP || scrollBar.state == STATE_DOWN){
    scrollBar.state = STATE_IDLE;
    scrollBar.show (0);
  }

  if (ev.window == vt){
    if (false)
      return;
    // 5.4
    if (iso14755buf & (0x80000000UL | 0x10000000UL /* code feedback (section 5.4)*/))
      return;
    if (reportmode){
      /* mouse report from vt window */
      /* don't report release of wheel "buttons" */
      if (ev.button >= 4)
        return;
      //# 2123 "command.C"
      MEvent.button = 0L /* special Button Code, passed to GrabButton */;
      mouse_report (ev);

      return;
    }

    /*
     * dumb hack to compensate for the failure of click-and-drag
     * when overriding mouse reporting
     */
    if (priv_modes & ((1UL<<12)|(1UL<<13)|(1UL<<20)|(1UL<<21))
        && bypass_keystate
        && ev.button == 1 && MEvent.clicks <= 1)
      selection_extend (ev.x, ev.y, 0);

    switch (ev.button){
    case 1:
    case 3:
      selection_make (ev.time);
      break;

    case 2:
      if (((unsigned int)(ev.x) - (unsigned int)(0) < (unsigned int)(width) - (unsigned int)(0)) && ((unsigned int)(ev.y) - (unsigned int)(0) < (unsigned int)(height) - (unsigned int)(0))) // inside window?
        selection_request (ev.time, ev.state & ModMetaMask ? 0x03 : 0x01);
      break;
      //# 2185 "command.C"
    }
  }
}

/*}}} */

void
rxvt_term::cmd_parse (){
  wchar_t ch = NOCHAR;
  char *seq_begin; // remember start of esc-sequence here

  for (;;){
    if (__builtin_expect (((ch == NOCHAR) != 0),(0))){
      seq_begin = cmdbuf_ptr;
      ch = next_char ();

      if (ch == NOCHAR)
        break;
    }

    if (__builtin_expect (((!!((ch) & 0xffffff60UL) || ch == C0_LF || ch == C0_CR || ch == C0_HT) != 0),(1))){
      if (__builtin_expect (((!seen_input) != 0),(0))){
        seen_input = 1;
        // many badly-written programs (e.g. jed) contain a race condition:
        // they first read the screensize and then install a SIGWINCH handler.
        // some window managers resize the window early, and these programs
        // then sometimes get the size wrong.
        // unfortunately other programs are even more buggy and dislike
        // being sent SIGWINCH, so only do it when we were in fact being
        // resized.
        if (seen_resize && cmd_pid)
          kill (-cmd_pid, 28 /* window size changes */);
      }

      /* Read a text string from the input buffer */
      wchar_t buf[2048 /* character buffer*/];
      bool refreshnow = false;
      int nlines = 0;
      wchar_t *str = buf;
      wchar_t *eol = str + min (ncol, 2048 /* character buffer*/);

      for (;;){
        if (__builtin_expect (((ch == NOCHAR || (!((ch) & 0xffffff60UL) && ch != C0_LF && ch != C0_CR && ch != C0_HT)) != 0),(0)))
          break;

        *str++ = ch;

        if (__builtin_expect (((ch == C0_LF || str >= eol) != 0),(0))){
          if (ch == C0_LF)
            nlines++;

          refresh_count++;

          if (!option (Opt_jumpScroll) || refresh_count >= nrow - 1){
            refresh_count = 0;

            if (!option (Opt_skipScroll) || ev_time () > ev::now () + 1. / 60.){
              refreshnow = true;
              ch = NOCHAR;
              break;
            }
          }

          // scr_add_lines only works for nlines <= nrow - 1.
          if (nlines >= nrow - 1){
            if (!(false
                  && false))
              scr_add_lines (buf, str - buf, nlines);

            nlines = 0;
            str = buf;
            eol = str + min (ncol, 2048 /* character buffer*/);
          }

          if (str >= eol){
            if (eol >= buf + 2048 /* character buffer*/){
              ch = NOCHAR;
              break;
            }
            else
              eol = min (eol + ncol, buf + 2048 /* character buffer*/);
          }

        }

        seq_begin = cmdbuf_ptr;
        ch = next_char ();
      }

      if (!(false
            && false))
        scr_add_lines (buf, str - buf, nlines);

      /*
       * If there have been a lot of new lines, then update the screen
       * What the heck we'll cheat and only refresh less than every page-full.
       * if skipScroll is enabled.
       */
      if (refreshnow){
        scr_refresh ();
        want_refresh = 1;
      }
    }
    else {
      try
        {
          process_nonprinting (ch);
        }
      catch (const class out_of_input &o){
        // we ran out of input, retry later
        cmdbuf_ptr = seq_begin;
        break;
      }

      ch = NOCHAR;
    }
  }
}

// read the next character
wchar_t
rxvt_term::next_char (){
  while (cmdbuf_ptr < cmdbuf_endp){
    // assume 7-bit to be ascii ALWAYS
    if (__builtin_expect ((((unsigned char)*cmdbuf_ptr <= 0x7f && *cmdbuf_ptr != 0x1b) != 0),(1)))
      return *cmdbuf_ptr++;

    wchar_t wc;
    size_t len = mbrtowc (&wc, cmdbuf_ptr, cmdbuf_endp - cmdbuf_ptr, mbstate);

    if (len == (size_t)-2){
      // the mbstate stores incomplete sequences. didn't know this :/
      cmdbuf_ptr = cmdbuf_endp;
      break;
    }

    if (len == (size_t)-1){
      mbrtowc (0, 0, 0, mbstate); // reset now undefined conversion state
      return (unsigned char)*cmdbuf_ptr++; // the _occasional_ latin1 character is allowed to slip through
    }

    // assume wchar == unicode
    cmdbuf_ptr += len;
    return wc & 0x1fffffUL;
  }

  return NOCHAR;
}

// read the next octet
uint32_t
rxvt_term::next_octet (){
  return cmdbuf_ptr < cmdbuf_endp
    ? (unsigned char)*cmdbuf_ptr++
    : NOCHAR;
}

static class out_of_input out_of_input;

/* rxvt_cmd_getc () - Return next input character */
/*
 * Return the next input character after first passing any keyboard input
 * to the command.
 */
wchar_t
rxvt_term::cmd_getc (){
  wchar_t c = next_char ();

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}

uint32_t
rxvt_term::cmd_get8 (){
  uint32_t c = next_octet ();

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}

/*{{{ print pipe */
/*----------------------------------------------------------------------*/

FILE *
rxvt_term::popen_printer (){
  FILE *stream = popen (rs[Rs_print_pipe] ? rs[Rs_print_pipe] : "lpr", "w");

  if (stream == __null)
    rxvt_warn ("can't open printer pipe, not printing.\n");

  return stream;
}

int
rxvt_term::pclose_printer (FILE *stream){
  fflush (stream);
  return pclose (stream);
}

/*
 * simulate attached vt100 printer
 */
void
rxvt_term::process_print_pipe (){
  FILE *fd = popen_printer ();

  if (!fd)
    return;

  /*
   * Send all input to the printer until either ESC[4i or ESC[?4i
   * is received.
   */
  for (int done = 0; !done; ){
    unsigned char buf[8];
    unicode_t ch;
    unsigned int i, len;

    if ((ch = cmd_getc ()) != C0_ESC){
      if (putc (ch, fd) == (-1))
        break; /* done = 1 */
    }
    else {
      len = 0;
      buf[len++] = ch;

      if ((buf[len++] = cmd_getc ()) == '['){
        if ((ch = cmd_getc ()) == '?'){
          buf[len++] = '?';
          ch = cmd_getc ();
        }
        if ((buf[len++] = ch) == '4'){
          if ((buf[len++] = cmd_getc ()) == 'i')
            break; /* done = 1 */
        }
      }

      for (i = 0; i < len; i++)
        if (putc (buf[i], fd) == (-1)){
          done = 1;
          break;
        }
    }
  }

  pclose_printer (fd);
}

/*}}} */

/* *INDENT-OFF* */
enum {
  C1_40 = 0x40,
  C1_41 , C1_BPH, C1_NBH, C1_44 , C1_NEL, C1_SSA, C1_ESA,
  C1_HTS, C1_HTJ, C1_VTS, C1_PLD, C1_PLU, C1_RI , C1_SS2, C1_SS3,
  C1_DCS, C1_PU1, C1_PU2, C1_STS, C1_CCH, C1_MW , C1_SPA, C1_EPA,
  C1_SOS, C1_59 , C1_SCI, C1_CSI, CS_ST , C1_OSC, C1_PM , C1_APC,
};
/* *INDENT-ON* */

/*{{{ process non-printing single characters */
void
rxvt_term::process_nonprinting (unicode_t ch){
  switch (ch){
  case C0_ESC:
    process_escape_seq ();
    break;
  case C0_ENQ: /* terminal Status */
    if (rs[Rs_answerbackstring])
      tt_write (rs [Rs_answerbackstring], (strlen)(rs [Rs_answerbackstring]));
    else
      tt_write ("\033[?1;2c" /* vt100 answerback */, (strlen)("\033[?1;2c" /* vt100 answerback */));
    break;
  case C0_BEL: /* bell */
    scr_bell ();
    break;
  case C0_BS: /* backspace */
    scr_backspace ();
    break;
  case C0_HT: /* tab */
    scr_tab (1);
    break;
  case C0_CR: /* carriage return */
    scr_gotorc (0, 0, R_RELATIVE);
    break;
  case C0_VT: /* vertical tab, form feed */
  case C0_FF:
  case C0_LF: /* line feed */
    scr_index (UP);
    break;
  case C0_SO: /* shift out - acs */
    scr_charset_choose (1);
    break;
  case C0_SI: /* shift in - acs */
    scr_charset_choose (0);
    break;
    //# 2532 "command.C"
  }
}
/*}}} */
/*{{{ process VT52 escape sequences */
void
rxvt_term::process_escape_vt52 (unicode_t ch){
  int row, col;

  switch (ch){
  case 'A': /* cursor up */
    scr_gotorc (-1, 0, R_RELATIVE | C_RELATIVE);
    break;
  case 'B': /* cursor down */
    scr_gotorc (1, 0, R_RELATIVE | C_RELATIVE);
    break;
  case 'C': /* cursor right */
    scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
    break;
  case 'D': /* cursor left */
    scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
    break;
  case 'H': /* cursor home */
    scr_gotorc (0, 0, 0);
    break;
  case 'I': /* cursor up and scroll down if needed */
    scr_index (DN);
    break;
  case 'J': /* erase to end of screen */
    scr_erase_screen (0);
    break;
  case 'K': /* erase to end of line */
    scr_erase_line (0);
    break;
  case 'Y': /* move to specified row and col */
    /* full command is 'ESC Y row col' where row and col
     * are encoded by adding 32 and sending the ascii
     * character.  eg. SPACE = 0, '+' = 13, '0' = 18,
     * etc. */
    row = cmd_getc () - ' ';
    col = cmd_getc () - ' ';
    scr_gotorc (row, col, 0);
    break;
  case 'Z': /* identify the terminal type */
    tt_printf ("\033/Z"); /* I am a VT100 emulating a VT52 */
    break;
  case '<': /* turn off VT52 mode */
    set_privmode ((1UL<<18), 0);
    break;
  case 'F': /* use special graphics character set */
  case 'G': /* use regular character set */
    /* unimplemented */
    break;
  case '=': /* use alternate keypad mode */
  case '>': /* use regular keypad mode */
    /* unimplemented */
    break;
  }
}
/*}}} */
/*{{{ process escape sequences */
void
rxvt_term::process_escape_seq (){
  unicode_t ch = cmd_getc ();

  if (priv_modes & (1UL<<18)){
    process_escape_vt52 (ch);
    return;
  }

  switch (ch){
    /* case 1:        do_tek_mode (); break; */
  case '#':
    if (cmd_getc () == '8')
      scr_E ();
    break;
  case '(':
    scr_charset_set (0, (unsigned int)cmd_getc ());
    break;
  case ')':
    scr_charset_set (1, (unsigned int)cmd_getc ());
    break;
  case '*':
    scr_charset_set (2, (unsigned int)cmd_getc ());
    break;
  case '+':
    scr_charset_set (3, (unsigned int)cmd_getc ());
    break;

  case '7':
    scr_cursor (SAVE);
    break;
  case '8':
    scr_cursor (RESTORE);
    break;

  case '=':
  case '>':
    set_privmode ((1UL<<7), ch == '=');
    break;

  case C1_40:
    cmd_getc ();
    break;
  case C1_44:
    scr_index (UP);
    break;

    /* 8.3.87: NEXT LINE */
  case C1_NEL: /* ESC E */
    {
      wchar_t nlcr[] = { C0_LF, C0_CR };
      scr_add_lines (nlcr, sizeof (nlcr) / sizeof (nlcr [0]), 1);
    }
    break;

    /* kidnapped escape sequence: Should be 8.3.48 */
  case C1_ESA: /* ESC G */
    process_graphics ();
    break;

    /* 8.3.63: CHARACTER TABULATION SET */
  case C1_HTS: /* ESC H */
    scr_set_tab (1);
    break;

    /* 8.3.105: REVERSE LINE FEED */
  case C1_RI: /* ESC M */
    scr_index (DN);
    break;

    /* 8.3.142: SINGLE-SHIFT TWO */
    /*case C1_SS2: scr_single_shift (2);   break; */

    /* 8.3.143: SINGLE-SHIFT THREE */
    /*case C1_SS3: scr_single_shift (3);   break; */

    /* 8.3.27: DEVICE CONTROL STRING */
  case C1_DCS: /* ESC P */
    process_dcs_seq ();
    break;

    /* 8.3.110: SINGLE CHARACTER INTRODUCER */
  case C1_SCI: /* ESC Z */
    tt_write ("\033[?1;2c" /* vt100 answerback */ /* obsolete ANSI ESC[c */, sizeof ("\033[?1;2c" /* vt100 answerback */ /* obsolete ANSI ESC[c */) - 1);
    break; /* steal obsolete ESC [ c */

    /* 8.3.16: CONTROL SEQUENCE INTRODUCER (CSI) */
  case C1_CSI: /* ESC [ */
    process_csi_seq ();
    break;

    /* 8.3.90: OPERATING SYSTEM COMMAND (OSC) */
  case C1_OSC: /* ESC ] */
    process_osc_seq ();
    break;

    /* 8.3.106: RESET TO INITIAL STATE (RIS) */
  case 'c':
    mbstate.reset ();
    scr_poweron ();
    scrollBar.show (1);
    break;

    /* 8.3.79: LOCKING-SHIFT TWO (see ISO2022) */
  case 'n':
    scr_charset_choose (2);
    break;

    /* 8.3.81: LOCKING-SHIFT THREE (see ISO2022) */
  case 'o':
    scr_charset_choose (3);
    break;
  }
}
/*}}} */

/*{{{ process CONTROL SEQUENCE INTRODUCER (CSI) sequences `ESC[' */
/* *INDENT-OFF* */
enum {
  CSI_ICH = 0x40,
  CSI_CUU, CSI_CUD, CSI_CUF, CSI_CUB, CSI_CNL, CSI_CPL, CSI_CHA,
  CSI_CUP, CSI_CHT, CSI_ED , CSI_EL , CSI_IL , CSI_DL , CSI_EF , CSI_EA ,
  CSI_DCH, CSI_SEE, CSI_CPR, CSI_SU , CSI_SD , CSI_NP , CSI_PP , CSI_CTC,
  CSI_ECH, CSI_CVT, CSI_CBT, CSI_SRS, CSI_PTX, CSI_SDS, CSI_SIMD, CSI_5F,
  CSI_HPA, CSI_HPR, CSI_REP, CSI_DA , CSI_VPA, CSI_VPR, CSI_HVP, CSI_TBC,
  CSI_SM , CSI_MC , CSI_HPB, CSI_VPB, CSI_RM , CSI_SGR, CSI_DSR, CSI_DAQ,
  CSI_70 , CSI_71 , CSI_72 , CSI_73 , CSI_74 , CSI_75 , CSI_76 , CSI_77 ,
  CSI_78 , CSI_79 , CSI_7A , CSI_7B , CSI_7C , CSI_7D , CSI_7E , CSI_7F
};



const unsigned char csi_defaults[] =

/* *INDENT-ON* */

void
rxvt_term::process_csi_seq (){
  unicode_t ch, priv, i;
  unsigned int nargs, p;
  int n, ndef;
  int arg[32 /* max # of args for esc sequences */] = { };

  nargs = 0;

  priv = 0;
  ch = cmd_getc ();
  if ((ch >= '<' && ch <= '?') || ch == '!'){
    /* '<' '=' '>' '?' '!' */
    priv = ch;
    ch = cmd_getc ();
  }

  /* read any numerical arguments */
  for (n = -1; ch < CSI_ICH; ){
    if (isdigit (ch)){
      if (n < 0)
        n = ch - '0';
      else
        n = n * 10 + ch - '0';
    }
    else if (ch == ';'){
      if (nargs < 32 /* max # of args for esc sequences */)
        arg[nargs++] = n;
      n = -1;
    }
    else if (!((ch) & 0xffffff60UL))
      process_nonprinting (ch);

    ch = cmd_getc ();
  }

  if (ch > CSI_7F)
    return;

  if (nargs < 32 /* max # of args for esc sequences */)
    arg[nargs++] = n;

  i = ch - CSI_ICH;
  ndef = (!! ((csi_defaults)[ (i) / 8] & (128 >> ((i) & 7))));
  for (p = 0; p < nargs; p++)
    if (arg[p] == -1)
      arg[p] = ndef;

  /*
   * private mode handling
   */
  if (priv){
    switch (priv){
    case '>':
      if (ch == CSI_DA) /* secondary device attributes */
        {
          // first parameter is normally 0 for vt100, 1 for vt220, 'R' for rxvt,
          // 'U' for rxvt-unicode != 7.[34] (where it was broken).
          //
          // second parameter is xterm patch level for xterm, MMmmpp (e.g. 20703) for rxvt
          // and Mm (e.g. 72 for 7.2) for urxvt <= 7.2, 94 for urxvt <= 8.3, and 95 for later
          // versions.
          //
          tt_printf ("\033[>%d;95;0c", 'U');
        }
      break;

    case '?':
      if (ch == 'h' || ch == 'l' || ch == 'r' || ch == 's' || ch == 't')
        process_terminal_mode (ch, priv, nargs, arg);
      break;

    case '!':
      if (ch == CSI_70){
        /* DECSTR: soft terminal reset, used by our terminfo since 9.06 */
        scr_soft_reset ();

        static const int pm_h[] = { 7, 25 };
        static const int pm_l[] = { 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 };

        process_terminal_mode ('h', 0, sizeof (pm_h) / sizeof (pm_h[0]), pm_h);
        process_terminal_mode ('l', 0, sizeof (pm_l) / sizeof (pm_l[0]), pm_l);
      }
      break;
    }

    return;
  }

  switch (ch){
    /*
     * ISO/IEC 6429:1992 (E) CSI sequences (defaults in parentheses)
     */

  case CSI_MC: /* 8.3.83: (0) MEDIA COPY */
    switch (arg[0]){
    case 0: /* initiate transfer to primary aux device */
      scr_printscreen (0);
      break;
    case 5: /* start relay to primary aux device */
      process_print_pipe ();
      break;
    }
    break;
  case CSI_CUU: /* 8.3.22: (1) CURSOR UP */
  case CSI_VPR: /* 8.3.161: (1) LINE POSITION FORWARD */
    arg[0] = -arg[0];
    /* FALLTHROUGH */
  case CSI_CUD: /* 8.3.19: (1) CURSOR DOWN */
  case CSI_VPB: /* 8.3.160: (1) LINE POSITION BACKWARD */
    scr_gotorc (arg[0], 0, RELATIVE);
    break;

  case CSI_CUB: /* 8.3.18: (1) CURSOR LEFT */
  case CSI_HPB: /* 8.3.59: (1) CHARACTER POSITION BACKWARD */

    arg[0] = arg[0] ? -arg[0] : -1;

    /* FALLTHROUGH */
  case CSI_CUF: /* 8.3.20: (1) CURSOR RIGHT */
  case CSI_HPR: /* 8.3.60: (1) CHARACTER POSITION FORWARD */

    scr_gotorc (0, arg[0] ? arg[0] : 1, RELATIVE);

    break;

  case CSI_CPL: /* 8.3.13: (1) CURSOR PRECEDING LINE */
    arg[0] = -arg[0];
    /* FALLTHROUGH */
  case CSI_CNL: /* 8.3.12: (1) CURSOR NEXT LINE */
    scr_gotorc (arg[0], 0, R_RELATIVE);
    break;

  case CSI_CHA: /* 8.3.9: (1) CURSOR CHARACTER ABSOLUTE */
  case CSI_HPA: /* 8.3.58: (1) CURSOR POSITION ABSOLUTE */
    scr_gotorc (0, arg[0] - 1, R_RELATIVE);
    break;

  case CSI_VPA: /* 8.3.159: (1) LINE POSITION ABSOLUTE */
    scr_gotorc (arg[0] - 1, 0, C_RELATIVE);
    break;

  case CSI_CUP: /* 8.3.21: (1,1) CURSOR POSITION */
  case CSI_HVP: /* 8.3.64: (1,1) CHARACTER AND LINE POSITION */
    scr_gotorc (arg[0] - 1, nargs < 2 ? 0 : (arg[1] - 1), 0);
    break;

  case CSI_CBT: /* 8.3.7: (1) CURSOR BACKWARD TABULATION */
    arg[0] = -arg[0];
    /* FALLTHROUGH */
  case CSI_CHT: /* 8.3.10: (1) CURSOR FORWARD TABULATION */
    scr_tab (arg[0]);
    break;

  case CSI_ED: /* 8.3.40: (0) ERASE IN PAGE */
    scr_erase_screen (arg[0]);
    break;

  case CSI_EL: /* 8.3.42: (0) ERASE IN LINE */
    scr_erase_line (arg[0]);
    break;

  case CSI_ICH: /* 8.3.65: (1) INSERT CHARACTER */
    scr_insdel_chars (arg[0], INSERT);
    break;

  case CSI_IL: /* 8.3.68: (1) INSERT LINE */
    scr_insdel_lines (arg[0], INSERT);
    break;

  case CSI_DL: /* 8.3.33: (1) DELETE LINE */
    scr_insdel_lines (arg[0], DELETE);
    break;

  case CSI_ECH: /* 8.3.39: (1) ERASE CHARACTER */
    scr_insdel_chars (arg[0], ERASE);
    break;

  case CSI_DCH: /* 8.3.26: (1) DELETE CHARACTER */
    scr_insdel_chars (arg[0], DELETE);
    break;

  case CSI_SD: /* 8.3.114: (1) SCROLL DOWN */
    arg[0] = -arg[0];
    /* FALLTHROUGH */
  case CSI_SU: /* 8.3.148: (1) SCROLL UP */
    scr_scroll_text (screen.tscroll, screen.bscroll, arg[0]);
    break;

  case CSI_DA: /* 8.3.24: (0) DEVICE ATTRIBUTES */
    tt_write ("\033[?1;2c" /* vt100 answerback */, sizeof ("\033[?1;2c" /* vt100 answerback */) - 1);
    break;

  case CSI_SGR: /* 8.3.118: (0) SELECT GRAPHIC RENDITION */
    process_sgr_mode (nargs, arg);
    break;

  case CSI_DSR: /* 8.3.36: (0) DEVICE STATUS REPORT */
    switch (arg[0]){
    case 5: /* DSR requested */
      tt_printf ("\033[0n");
      break;
    case 6: /* CPR requested */
      scr_report_position ();
      break;
    case 7: /* unofficial extension */
      if (option (Opt_insecure))
        tt_printf ("%-.250s\012", rs[Rs_display_name]);
      break;
    case 8: /* unofficial extension */
      process_xterm_seq (XTerm_title, "urxvt" "-" "9.06", 0x9c /* 0234 */);
      break;
    }
    break;

  case CSI_TBC: /* 8.3.155: (0) TABULATION CLEAR */
    switch (arg[0]){
    case 0: /* char tab stop cleared at active position */
      scr_set_tab (0);
      break;
      /* case 1: */ /* line tab stop cleared in active line */
      /* case 2: */ /* char tab stops cleared in active line */
    case 3: /* all char tab stops are cleared */
      /* case 4: */ /* all line tab stops are cleared */
    case 5: /* all tab stops are cleared */
      scr_set_tab (-1);
      break;
    }
    break;

  case CSI_CTC: /* 8.3.17: (0) CURSOR TABULATION CONTROL */
    switch (arg[0]){
    case 0: /* char tab stop set at active position */
      scr_set_tab (1);
      break; /* = ESC H */
      /* case 1: */ /* line tab stop set at active line */
    case 2: /* char tab stop cleared at active position */
      scr_set_tab (0);
      break; /* = ESC [ 0 g */
      /* case 3: */ /* line tab stop cleared at active line */
      /* case 4: */ /* char tab stops cleared at active line */
    case 5: /* all char tab stops are cleared */
      scr_set_tab (-1);
      break; /* = ESC [ 3 g */
      /* case 6: */ /* all line tab stops are cleared */
    }
    break;

  case CSI_RM: /* 8.3.107: RESET MODE */
    if (arg[0] == 4)
      scr_insert_mode (0);
    else if (arg[0] == 20)
      priv_modes &= ~(1UL<<19);
    break;

  case CSI_SM: /* 8.3.126: SET MODE */
    if (arg[0] == 4)
      scr_insert_mode (1);
    else if (arg[0] == 20)
      priv_modes |= (1UL<<19);
    break;

    /*
     * PRIVATE USE beyond this point.  All CSI_7? sequences here
     */
  case CSI_72: /* DECSTBM: set top and bottom margins */
    if (nargs == 1)
      scr_scroll_region (arg[0] - 1, 10000 - 1);
    else if (nargs == 0 || arg[0] >= arg[1])
      scr_scroll_region (0, 10000 - 1);
    else
      scr_scroll_region (arg[0] - 1, arg[1] - 1);
    break;

  case CSI_73:
    scr_cursor (SAVE);
    break;
  case CSI_75:
    scr_cursor (RESTORE);
    break;



  case CSI_78: /* DECREQTPARM */
    if (arg[0] == 0 || arg[0] == 1)
      tt_printf ("\033[%d;1;1;128;128;1;0x", arg[0] + 2);
    break;

  default:
    break;
  }
}
/*}}} */
//# 3171 "command.C"
/*----------------------------------------------------------------------*/
/*
 * get input up until STRING TERMINATOR (or BEL)
 * ends_how is terminator used. returned input must be free()'d
 */
char *
rxvt_term::get_to_st (unicode_t &ends_how){
  unicode_t ch;
  bool seen_esc = false;
  unsigned int n = 0;
  wchar_t string[2048 /* max string size for process_rxvt_xterm_seq() */];

  while ((ch = cmd_getc ()) != NOCHAR){
    if (seen_esc){
      if (ch == 0x5c) /* 7bit ST */
        break;
      else
        return __null;
    }
    else if (ch == C0_ESC){
      seen_esc = true;
      continue;
    }
    else if (ch == C0_BEL || ch == 0x9c /* 0234 */)
      break;
    else if (ch == C0_SYN)
      ch = cmd_get8 ();
    else if (ch < 0x20)
      return __null; /* other control character - exit */

    seen_esc = false;

    if (n >= 2048 /* max string size for process_rxvt_xterm_seq() */ - 1)
      // stop at some sane length
      return __null;

    string[n++] = ch;
  }

  string[n++] = '\0';

  ends_how = (ch == 0x5c ? C0_ESC : ch);

  return rxvt_wcstombs (string);
}

/*----------------------------------------------------------------------*/
/*
 * process DEVICE CONTROL STRING `ESC P ... (ST|BEL)' or `0x90 ... (ST|BEL)'
 */
void
rxvt_term::process_dcs_seq (){
  char *s;
  unicode_t eh;

  /*
   * Not handled yet
   */
  s = get_to_st (eh);
  if (s)
    free (s);

  return;
}

/*----------------------------------------------------------------------*/
/*
 * process OPERATING SYSTEM COMMAND sequence `ESC ] Ps ; Pt (ST|BEL)'
 */
void
rxvt_term::process_osc_seq (){
  unicode_t ch, eh;
  int arg;

  ch = cmd_getc ();
  for (arg = 0; isdigit (ch); ch = cmd_getc ())
    arg = arg * 10 + (ch - '0');

  if (ch == ';'){
    char *s = get_to_st (eh);

    if (s){
      process_xterm_seq (arg, s, eh);
      free (s);
    }
  }
}

void
rxvt_term::process_color_seq (int report, int color, const char *str, char resp){
  if (str[0] == '?' && !str[1]){
    rgba c;
    pix_colors_focused[color].get (c);


    tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp);
  }
  else
    set_window_color (color, str);
}

/*
 * XTerm escape sequences: ESC ] Ps;Pt (ST|BEL)
 */
void
rxvt_term::process_xterm_seq (int op, const char *str, char resp){
  int color;
  char *buf, *name;
  bool query = str[0] == '?' && !str[1];
  int saveop = op;

  Display * const dpy = this->dpy;

  (__builtin_expect(!(str != __null), 0) ? __assert_rtn(__func__, "command.C", 3299, "str != NULL") : (void)0);

  if (false)
    return;

  switch (op){
  case XTerm_name:
    set_title (str);
    /* FALLTHROUGH */
  case XTerm_iconName:
    set_icon_name (str);
    break;
  case XTerm_title:
    set_title (str);
    break;
  case XTerm_property:
    if (str[0] == '?'){
      Atom prop = display->atom (str + 1);
      Atom actual_type;
      int actual_format;
      unsigned long nitems;
      unsigned long bytes_after;
      unsigned char *value = 0;
      const char *str = "";

      if (prop
          && XGetWindowProperty (dpy, parent[0],
                                 prop, 0, 1<<16, 0, 0L /* special Atom, passed to GetProperty */,
                                 &actual_type, &actual_format,
                                 &nitems, &bytes_after, &value) == 0 /* everything's okay */
          && actual_type != 0L /* universal null resource or null atom */
          && actual_format == 8)
        str = (const char *)(value);

      tt_printf ("\033]%d;%s%c", op, str, resp);

      XFree (value);
    }
    else {
      char *eq = strchr (str, '='); // constness lost, but verified to be ok

      if (eq){
        *eq = 0;
        set_utf8_property (display->atom (str), eq + 1);
      }
      else
        XDeleteProperty (dpy, parent[0],
                         display->atom (str));
    }
    break;

  case XTerm_Color:
    for (buf = (char *)str; buf && *buf;){
      if ((name = strchr (buf, ';')) == __null)
        break;

      *name++ = '\0';
      color = atoi (buf) + minCOLOR;

      if (!((unsigned int)(color) - (unsigned int)(minCOLOR) <= (unsigned int)(maxTermCOLOR) - (unsigned int)(minCOLOR)))
        break;

      if ((buf = strchr (name, ';')) != __null)
        *buf++ = '\0';

      process_color_seq (op, color, name, resp);
    }
    break;
  case Rxvt_restoreFG:
  case XTerm_Color00:
    process_color_seq (op, Color_fg, str, resp);
    break;
  case Rxvt_restoreBG:
  case XTerm_Color01:
    process_color_seq (op, Color_bg, str, resp);
    break;

  case XTerm_Color_cursor:
    process_color_seq (op, Color_cursor, str, resp);
    break;

  case XTerm_Color_pointer_fg:
    process_color_seq (op, Color_pointer_fg, str, resp);
    break;
  case XTerm_Color_pointer_bg:
    process_color_seq (op, Color_pointer_bg, str, resp);
    break;

  case XTerm_Color_RV:
    process_color_seq (op, Color_RV, str, resp);
    break;
  case Rxvt_Color_BD:
  case URxvt_Color_BD:
    process_color_seq (op, Color_BD, str, resp);
    break;
  case Rxvt_Color_UL:
  case URxvt_Color_UL:
    process_color_seq (op, Color_UL, str, resp);
    break;
  case URxvt_Color_IT:
    process_color_seq (op, Color_IT, str, resp);
    break;

  case URxvt_Color_border:
    process_color_seq (op, Color_border, str, resp);
    break;
    //# 3468 "command.C"
  case XTerm_logfile:
    // TODO, when secure mode?
    break;
    //# 3484 "command.C"
  case XTerm_font:
    op = URxvt_font;
  case URxvt_font:

    if (query)
      tt_printf ("\33]%d;%-.250s%c", saveop,
                 option (Opt_insecure) && fontset[op - URxvt_font]->fontdesc
                 ? fontset[op - URxvt_font]->fontdesc : "",
                 resp);
    else {
      const char *&res = rs[Rs_font + (op - URxvt_font)];

      res = strdup (str);
      allocated.push_back ((void *)res);
      set_fonts ();
    }
    break;

  case URxvt_version:
    if (query)
      tt_printf ("\33]%d;rxvt-unicode;%-.20s;%c;%c%c",
                 op,
                 rs[Rs_name], "9.06"[0], "9.06"[2],
                 resp);
    break;
    //# 3546 "command.C"
  }
}
/*----------------------------------------------------------------------*/

/*{{{ process DEC private mode sequences `ESC [ ? Ps mode' */
/*
 * mode can only have the following values:
 *      'l' = low
 *      'h' = high
 *      's' = save
 *      'r' = restore
 *      't' = toggle
 * so no need for fancy checking
 */
int
rxvt_term::privcases (int mode, unsigned long bit){
  int state;

  if (mode == 's'){
    SavedModes |= (priv_modes & bit);
    return -1;
  }
  else {
    if (mode == 'r')
      state = (SavedModes & bit) ? 1 : 0; /* no overlapping */
    else
      state = (mode == 't') ? ! (priv_modes & bit) : mode;
    set_privmode (bit, state);
  }

  return state;
}

/* we're not using priv _yet_ */
void
rxvt_term::process_terminal_mode (int mode, int priv __attribute__((unused)), unsigned int nargs, const int *arg){
  unsigned int i, j;
  int state;

  static const struct
  {
    const int argval;
    const unsigned long bit;
  } argtopriv[] = {
    { 1, (1UL<<6) }, // DECCKM
    { 2, (1UL<<18) },
    { 3, (1UL<<0) }, // DECCOLM
    { 4, (1UL<<17) }, // DECSCLM
    { 5, (1UL<<2) }, // DECSCNM
    { 6, (1UL<<3) }, // DECOM
    { 7, (1UL<<5) }, // DECAWM
    // 8, auto-repeat keys         // DECARM
    { 9, (1UL<<12) },
    // 18 end FF to printer after print screen
    // 19 Print screen prints full screen/scorll region
    { 25, (1UL<<11) }, // cnorm/cvvis/civis

    { 30, (1UL<<14) },

    { 35, (1UL<<10) }, // rxvt extension
    // 38, tektronix mode          // DECTEK
    { 40, (1UL<<1) },
    // 41 xterm more fixes NYI
    // 45 margin bell NYI
    // 46 start logging
    { 47, (1UL<<4) },
    { 66, (1UL<<7) }, // DECPAM/DECPNM

    { 1000, (1UL<<13) },
    { 1002, (1UL<<20) },
    { 1003, (1UL<<21) },
    { 1010, (1UL<<15) }, // rxvt extension
    { 1011, (1UL<<16) }, // rxvt extension
    // 1035 enable modifiers for alt, numlock NYI
    // 1036 send ESC for meta keys NYI
    // 1037 send DEL for keypad delete NYI
    { 1047, (1UL<<4) },
    // 1048 save and restore cursor
    { 1049, (1UL<<4) }, /* xterm extension, clear screen on ti rather than te */
    // 1051, 1052, 1060, 1061 keyboard emulation NYI
    { 2004, (1UL<<22) },
  };

  if (nargs == 0)
    return;

  /* make lo/hi boolean */
  if (mode == 'l')
    mode = 0; /* reset */
  else if (mode == 'h')
    mode = 1; /* set */

  for (i = 0; i < nargs; i++){
    state = -1;

    /* basic handling */
    for (j = 0; j < (sizeof (argtopriv)/sizeof (argtopriv[0])); j++)
      if (argtopriv[j].argval == arg[i]){
        state = privcases (mode, argtopriv[j].bit);
        break;
      }

    /* extra handling for values with state unkept  */
    switch (arg[i]){



    case 1048: /* alternative cursor save */
      if (option (Opt_secondaryScreen))
        if (mode == 0)
          scr_cursor (RESTORE);
        else if (mode == 1)
          scr_cursor (SAVE);
      break;
    }

    if (state >= 0)
      /* extra handling for values with valid 0 or 1 state */
      switch (arg[i]){
        /* case 1:	- application cursor keys */
      case 2: /* VT52 mode */
        /* oddball mode.  should be set regardless of set/reset
         * parameter.  Return from VT52 mode with an ESC < from
         * within VT52 mode
         */
        set_privmode ((1UL<<18), 1);
        break;
      case 3: /* 80/132 */
        if (priv_modes & (1UL<<1))
          set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight);
        break;
      case 4: /* smooth scrolling */
        set_option (Opt_jumpScroll, !state);
        break;
      case 5: /* reverse video */
        scr_rvideo_mode (state);
        break;
      case 6: /* relative/absolute origins  */
        scr_relative_origin (state);
        break;
      case 7: /* autowrap */
        scr_autowrap (state);
        break;
        /* case 8:	- auto repeat, can't do on a per window basis */
      case 9: /* X10 mouse reporting */
        if (state) /* orthogonal */
          priv_modes &= ~((1UL<<13)|(1UL<<20)|(1UL<<21));
        break;

      case 30:
        if (scrollBar.map (state)){
          resize_all_windows (0, 0, 0);
          scr_touch (true);
        }
        break;

      case 25: /* visible/invisible cursor */
        scr_cursor_visible (state);
        break;
        /* case 35:	- shift keys */
        /* case 40:	- 80 <--> 132 mode */
      case 47: /* secondary screen */
        scr_change_screen (state);
        break;
        /* case 66:	- application key pad */
        /* case 67:	- backspace key */
      case 1000: /* X11 mouse reporting */
        if (state) /* orthogonal */
          priv_modes &= ~((1UL<<12)|(1UL<<20)|(1UL<<21));
        break;
      case 1002:
      case 1003:
        if (state){
          priv_modes &= ~((1UL<<12)|(1UL<<13));
          priv_modes &= arg[i] == 1003 ? ~(1UL<<20) : ~(1UL<<21);
          vt_emask_mouse = (1L<<6);
        }
        else
          vt_emask_mouse = 0L;

        vt_select_input ();
        break;
      case 1010: /* scroll to bottom on TTY output inhibit */
        set_option (Opt_scrollTtyOutput, !state);
        break;
      case 1011: /* scroll to bottom on key press */
        set_option (Opt_scrollTtyKeypress, state);
        break;
      case 1047: /* secondary screen w/ clearing last */
        if (option (Opt_secondaryScreen))
          if (!state)
            scr_erase_screen (2);

        scr_change_screen (state);
        break;
      case 1049: /* secondary screen w/ clearing first */
        if (option (Opt_secondaryScreen))
          if (state)
            scr_cursor (SAVE);

        scr_change_screen (state);

        if (option (Opt_secondaryScreen))
          if (state)
            scr_erase_screen (2);
          else
            scr_cursor (RESTORE);
        break;
      default:
        break;
      }
  }
}
/*}}} */

/*{{{ process sgr sequences */
void
rxvt_term::process_sgr_mode (unsigned int nargs, const int *arg){
  unsigned int i;
  short rendset;
  int rendstyle;

  if (nargs == 0){
    scr_rendition (0, ~0);
    return;
  }

  for (i = 0; i < nargs; i++){
    rendset = -1;
    switch (arg[i]){
    case 0:
      rendset = 0, rendstyle = ~0;
      break;
    case 1:
      rendset = 1, rendstyle = 0x00004000UL /* value 1*/;
      break;
      //case 2: // low intensity
    case 3:
      rendset = 1, rendstyle = 0x00008000UL /* value 2*/;
      break;
    case 4:
      rendset = 1, rendstyle = 0x00040000UL /* underline*/;
      break;
    case 5: // slowly blinking
    case 6: // rapidly blinking
      rendset = 1, rendstyle = 0x00010000UL /* blink*/;
      break;
      //case 6: // scoansi light background
    case 7:
      rendset = 1, rendstyle = 0x00020000UL /* reverse video*/;
      break;
    case 8:
      // invisible. NYI
      break;
      //case 9: // crossed out
      //case 10: // scoansi acs off, primary font
      //case 11: // scoansi acs on, first alt font
      //case 12: // scoansi acs on, |0x80, second alt font
      //...
      //case 19: // ninth alt font
      //case 20: // gothic
    case 21: // disable bold, faint, sometimes doubly underlined (iso 8613)
      rendset = 0, rendstyle = 0x00004000UL /* value 1*/;
      break;
    case 22: // normal intensity
      rendset = 0, rendstyle = 0x00004000UL /* value 1*/;
      break;
    case 23: // disable italic
      rendset = 0, rendstyle = 0x00008000UL /* value 2*/;
      break;
    case 24:
      rendset = 0, rendstyle = 0x00040000UL /* underline*/;
      break;
    case 25:
      rendset = 0, rendstyle = 0x00010000UL /* blink*/;
      break;
    case 26: // variable spacing (iso 8613)
      rendset = 0, rendstyle = 0x00010000UL /* blink*/;
      break;
    case 27:
      rendset = 0, rendstyle = 0x00020000UL /* reverse video*/;
      break;
      //case 28: // visible. NYI
      //case 29: // not crossed-out
    }

    if (rendset != -1){
      scr_rendition (rendset, rendstyle);
      continue; /* for (;i;) */
    }

    switch (arg[i]){
    case 30:
    case 31: /* set fg color */
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
      scr_color ((unsigned int) (minCOLOR + (arg[i] - 30)), Color_fg);
      break;
    case 38: // set fg color, ISO 8613-6
      if (nargs > i + 2 && arg[i + 1] == 5){
        scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_fg);
        i += 2;
      }
      break;
    case 39: /* default fg */
      scr_color (Color_fg, Color_fg);
      break;

    case 40:
    case 41: /* set bg color */
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
      scr_color ((unsigned int) (minCOLOR + (arg[i] - 40)), Color_bg);
      break;
    case 48: // set bg color, ISO 8613-6
      if (nargs > i + 2 && arg[i + 1] == 5){
        scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_bg);
        i += 2;
      }
      break;
    case 49: /* default bg */
      scr_color (Color_bg, Color_bg);
      break;

      //case 50: // not variable spacing
      //# 3926 "command.C"
    }
  }
}
/*}}} */

/*{{{ (do not) process Rob Nation's own graphics mode sequences */
void
rxvt_term::process_graphics (){
  unicode_t ch, cmd = cmd_getc ();

  if (cmd == 'Q'){
    /* query graphics */
    tt_printf ("\033G0\012"); /* no graphics */
    return;
  }
  /* swallow other graphics sequences until terminating ':' */
  do
    ch = cmd_getc ();
  while (ch != ':');
}
/*}}} */

/* ------------------------------------------------------------------------- */

/*
 * Send printf () formatted output to the command.
 * Only use for small amounts of data.
 */
void
rxvt_term::tt_printf (const char *fmt,...){
  va_list arg_ptr;
  char buf[256];

  __builtin_va_start(arg_ptr,fmt);
  vsnprintf ((char *)buf, 256, fmt, arg_ptr);
  __builtin_va_end(arg_ptr);
  tt_write (buf, (strlen)(buf));
}

/* ---------------------------------------------------------------------- */
/* Write data to the pty as typed by the user, pasted with the mouse,
 * or generated by us in response to a query ESC sequence.
 */
const unsigned int MAX_PTY_WRITE = 255; // minimum MAX_INPUT

void
rxvt_term::tt_write (const char *data, unsigned int len){
  if (false)
    return;

  if (pty->pty < 0)
    return;

  if (v_buflen == 0){
    ssize_t written = write (pty->pty, data, min (len, MAX_PTY_WRITE));

    if ((unsigned int)written == len)
      return;

    data += written;
    len -= written;
  }

  v_buffer = (char *)realloc (v_buffer, v_buflen + len);

  (memcpy)(v_buffer + v_buflen,data,len);
  v_buflen += len;

  pty_ev.set (ev::READ | ev::WRITE);
}

void rxvt_term::pty_write (){
  int written = write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE));

  if (written > 0){
    v_buflen -= written;

    if (v_buflen == 0){
      free (v_buffer);
      v_buffer = 0;

      pty_ev.set (ev::READ);
      return;
    }

    memmove (v_buffer, v_buffer + written, v_buflen);
  }
  else if (written != -1 || ((*__error()) != 35 /* Resource temporarily unavailable */ && (*__error()) != 4 /* Interrupted system call */))
    pty_ev.set (ev::READ);
}

/*----------------------- end-of-file (C source) -----------------------*/
