/*----------------------------------------------------------------------*
 * File:	command.C 
 *----------------------------------------------------------------------* 

MY NOTES , ME BEING PADDY
cmdbuf_ptr is a global variable defined in rxvt.h
make globable variable named cmdbuf_ptr_i  which will represent cmdbuf_ptr's index
lookup function strchr line 1559




 *
 * All portions of code are copyright by their respective author/s. 
 * Copyright (c) 1992      John Bovey, University of Kent at Canterbury <jdb@ukc.ac.uk> 
 *				- original version 
 * Copyright (c) 1994      Robert Nation <nation@rocket.sanders.lockheed.com> 
 * 				- extensive modifications 
 * Copyright (c) 1995      Garrett D'Amore <garrett@netcom.com> 
 *				- vt100 printing 
 * Copyright (c) 1995      Steven Hirsch <hirsch@emba.uvm.edu> 
 *				- X11 mouse report mode and support for 
 *				  DEC "private mode" save/restore functions. 
 * Copyright (c) 1995      Jakub Jelinek <jj@gnu.ai.mit.edu> 
 *				- key-related changes to handle Shift+function 
 *				  keys properly. 
 * Copyright (c) 1997      MJ Olesen <olesen@me.queensu.ca> 
 *				- extensive modifications 
 * Copyright (c) 1997      Raul Garcia Garcia <rgg@tid.es> 
 *				- modification and cleanups for Solaris 2.x 
 *				  and Linux 1.2.x 
 * Copyright (c) 1997,1998 Oezguer Kesim <kesim@math.fu-berlin.de> 
 * Copyright (c) 1998-2001 Geoff Wing <gcw@pobox.com> 
 * 				- extensive modifications 
 * Copyright (c) 1998      Alfredo K. Kojima <kojima@windowmaker.org> 
 * Copyright (c) 2001      Marius Gedminas 
 *				- Ctrl/Mod4+Tab works like Meta+Tab (options) 
 * Copyright (c) 2003      Rob McMullen <robm@flipturn.org> 
 * Copyright (c) 2003-2007 Marc Lehmann <pcg@goof.com> 
 * Copyright (c) 2007      Emanuele Giaquinta <e.giaquinta@glauco.it> 
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

 *** in emacs I used the following keyboard macros to fix misedits from my regular expressions
I bound them to "C-H u" "C-H o" and "C-H p"
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

(fset 'paddy-change-to-fixed
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("CMNTFIXED" 0 "%d")) arg)))
(fset 'paddy-next-CMNT
   (lambda (&optional arg) "Keyboard macro." (interactive "p") (kmacro-exec-ring-item (quote ("CMNT" 0 "%d")) arg)))

(local-set-key (kbd "H-C-n") 'paddy-next-possible_pointer)
  (modify-syntax-entry ?\_ "w"  c-mode-syntax-table)
  (set-syntax-table c-mode-syntax-table)

(defun revert-and-js2  
   (revert-buffer) 
   (js2-mode))
 *----------------------------------------------------------------------*/ 

/*{{{ includes: */

/*
#include "../config.h"
#include "rxvt.h"
#include "rxvtperl.h"
#include "version.h"
#include "command.h"

#ifdef KEYSYM_RESOURCE
# include "keyboard.h"
#endif

#include <csignal>

#if LINUX_YIELD_HACK
# include <ctime>
#endif
*/
/*----------------------------------------------------------------------*/

#include "rxvt.h.js"
//#de fine IS_CONTRO L(ch) !((ch) & 0xffffff60UL)
#define IS_CONTROL(ch) !((ch) & 0xffffff60)  


//REMOVED: more code related to ISO_14755
//REMOVED: ^|#if ISO_14755
//REMOVED: c_keyword ^|  void     rxvt_term::iso14755_54 (int x, int y) 
//REMOVED: c_keyword ^|       void rxvt_term::iso14755_51 (unicode_t ch, rend_t r, int x, int y) 
//REMOVED: ^| rxvt_term::commit_iso14755 ()        function ()
//REMOVED: c_keyword ^|       static int  hex_keyval (XKeyEvent &ev)
//REMOVED: c_keyword ^|       static inline KeySym  translate_keypad (KeySym keysym, bool kp)
//REMOVED: c_keyword ^|       static inline int  //FIXME  map_function_key (KeySym keysym)
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::key_press (XKeyEvent &ev) 
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::flush ()
rxvt_term.flush =function(){ 
  flush_ev.stop ();

#ifdef HAVE_BG_PIXMAP
  if (bgPixmap.check_clearChanged ()){
//      scr_clear (true); This needs to be researched further!
      scr_touch (false);
    }
#endif

  if (want_refresh){ //FIXME note will probable have to wait for the macro expansion to be able to figure out whats going on
      if (SHOULD_INVOKE (HOOK_LINE_UPDATE)){
          var row= view_start;   //int row = view_start;  ### js_style_variables 
          var end_row= row + nrow;   //int end_row = row + nrow;  ### js_style_variables 
          while (row > top_row && ROW (row - 1).is_longer ())
            --row;
          do
            {
                var start_row= row;   //int start_row = row;  ### js_style_variables 
                var  l ;  //line_t *l;  ### possible_pointer 
              do

                {
                  l = ROW (row++);  //                  l = &ROW (row++);
                  if (!(l.f & LINE_FILTERED)){
                      // line not filtered, mark it as filtered
                      l.f |= LINE_FILTERED;
                      while (l.is_longer ()){
                        l = ROW (row++);  //                          l = &ROW (row++);
                          l.f |= LINE_FILTERED;
                        }
                      // and filter it
                      HOOK_INVOKE ((this, HOOK_LINE_UPDATE, DT_INT, start_row, DT_END));
                      break;
                    }
                }
              while (l.is_longer () && row < end_row);
            }
          while (row < end_row);
        }

      scr_refresh ();
      scrollBar.show (1);
#ifdef USE_XIM
      //      IMSendSpot ();
#endif
    }

  display.flush (); //FIXME what is display again
}
                            /*
                            // checks wether a refresh is requested and starts the refresh timer 
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::refresh_check () 
rxvt_term.refresh_check =function(){ 
  if (want_refresh && !flush_ev.is_active ())
    flush_ev.start (1. / 60.); // refresh at max. 60 Hz normally

  display->flush ();
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::flush_cb (ev::timer &w, int revents) 
rxvt_term.flush_cb =function(ev::timer &w,  revents) 
  make_current ();

  refresh_count = 0;
  flush ();
}

#ifdef CURSOR_BLINK
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::cursor_blink_cb (ev::timer &w, int revents) 
rxvt_term.cursor_blink_cb =function(ev::timer &w,  revents) 
  hidden_cursor = !hidden_cursor;
  want_refresh = 1;
  refresh_check ();
}
#endif

#ifdef TEXT_BLINK
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::text_blink_cb (ev::timer &w, int revents) 
rxvt_term.text_blink_cb =function(ev::timer &w,  revents) 
  if (scr_refresh_rend (RS_Blink, RS_Blink)){
      hidden_text = !hidden_text;
      want_refresh = 1;
      refresh_check ();
    }
  else
    w.stop ();
}
#endif
                            */
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::cont_scroll_cb (ev::timer &w, int revents) 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::sel_scroll_cb (ev::timer &w, int revents) 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::slip_wheel_cb (ev::timer &w, int revents) 
//THE following removal was related to the LINUX_YIELD_HACK
//REMOVED: c_keyword ^|       static struct event_handler 


// this is probably where I should enter text into the system
//REWRITE: js_style_functions ^|       bool rxvt_term::pty_fill () 
rxvt_term.pty_fill =function(){ 
    /*
  ssize_t n = cmdbuf_endp - cmdbuf_ptr;

  if (CBUFSIZ == n){
      rxvt_warn ("PLEASE REPORT: pty_fill on full buffer, draining input, continuing.\n");
      n = 0;
    }

  memmove (cmdbuf_base, cmdbuf_ptr, n);
  cmdbuf_ptr = cmdbuf_base, cmdbuf_ptr_i =0;
  cmdbuf_endp = cmdbuf_ptr_i + n;

  ssize_t r = read (pty->pty, cmdbuf_endp, CBUFSIZ - n);

  if (r > 0){
      cmdbuf_endp += r;
      return true;
    }
  else if (r < 0 && (errno == EAGAIN || errno == EINTR)){
#if LINUX_YIELD_HACK
      if (display->is_local)
        event_handler.yield_ev.start ();
#endif
    }
  else{
      pty_ev.stop ();

      if (!option (Opt_hold))
        destroy ();
    }
    */
  return false;
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::pty_cb (ev::io &w, int revents) 
rxvt_term.pty_cb =function(w,  revents){ 
    /*
  make_current ();

  if (revents & ev::READ)
    // loop, but don't allow a single term to monopolize us
//CMNT: c_keyword ^|           for (int i = CBUFCNT; i-- && pty_fill (); ) 
    for (i = CBUFCNT; i-- && pty_fill (); )
      cmd_parse ();

  if (revents & ev::WRITE)
    pty_write ();

  refresh_check ();
}

  void rxvt_term::pointer_unblank (){ 
  XDefineCursor (dpy, vt, TermWin_cursor);
  recolour_cursor ();

#ifdef POINTER_BLANK
  hidden_pointer = 0; 

  if (option (Opt_pointerBlank)) 
    pointer_ev.start (pointerBlankDelay); 
#endif
*/
}

#ifdef POINTER_BLANK
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::pointer_blank () 
rxvt_term.pointer_blank =function(){ 
    if (!option (Opt_pointerBlank))   //FIXME
    return;

  XDefineCursor (dpy, vt, display.blank_cursor);
  XFlush (dpy);

  hidden_pointer = 1; 
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::pointer_cb (ev::timer &w, int revents) 
rxvt_term.pointer_cb =function(w,  revents){ 
  make_current ();

  pointer_blank (); 
}
#endif

//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::mouse_report (XButtonEvent &ev) 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::x_cb (XEvent &ev) 

#if ENABLE_FRILLS
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::set_urgency (bool enable) 
rxvt_term.set_urgency =function(enable){ 
         if (enable == urgency_hint) 
    return;

//CMNT: c_keyword possible_pointer ^|         if (XWMHints *h = XGetWMHints (dpy, parent[0])){ 
  if (XWMHs  h  = XGetWMHs (dpy, parent[0])){
    h->flags = h->flags & ~XUrgencyHint | (enable ? XUrgencyHint : 0); 
    XSetWMHints (dpy, parent[0], h); 
    urgency_hint = enable; 
    }
}
#endif

//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::focus_in () 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::focus_out () 
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::update_fade_color (unsigned int idx) 
rxvt_term.update_fade_color =function(idx){ 
#if OFF_FOCUS_FADING
  if (rs[Rs_fade]){
      rgba c;
      pix_colors [Color_fade].get (c);
      pix_colors_focused [idx].fade (this, atoi (rs[Rs_fade]), pix_colors_unfocused [idx], c);
    }
#endif
}

//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::rootwin_cb (XEvent &ev) 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::button_press (XButtonEvent &ev) 
//REMOVED: js_style_functions c_keyword ^|       void rxvt_term::button_release (XButtonEvent &ev) 

/*}}} */

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::cmd_parse () 
rxvt_term.cmd_parse =function(){ 
  var ch= NOCHAR;  //wchar_t ch = NOCHAR;        ###  js_style_variables
  var seq_begin;   // char *seq_begin; // remember start of esc-sequence here ### possible_pointer

  for (;;){
      if (expect_false (ch == NOCHAR)){
          seq_begin = cmdbuf_ptr; 
          ch = next_char (); 

          if (ch == NOCHAR)
            break;
        }

      if (expect_true (!IS_CONTROL (ch) || ch == C0_LF || ch == C0_CR || ch == C0_HT)){
          if (expect_false (!seen_input)){
              seen_input = 1;
              // many badly-written programs (e.g. jed) contain a race condition:
              // they first read the screensize and then install a SIGWINCH handler.
              // some window managers resize the window early, and these programs
              // then sometimes get the size wrong.
              // unfortunately other programs are even more buggy and dislike
              // being sent SIGWINCH, so only do it when we were in fact being
              // resized.
              if (seen_resize && cmd_pid)
                kill (-cmd_pid, SIGWINCH);
            }

          /* Read a text string from the input buffer */
          var buf = new Array(UBUFSIZ);  //wchar_t buf[UBUFSIZ];  ### c_keyword  js_style_array
          var refreshnow = false;
          var nlines= 0;  //int nlines = 0;        ###  js_style_variables
          var str = buf, str_i = 0; //                  wchar_t *str = buf;  ###  c_keyword possible_pointer inserted_var should_work
          var eol = str.length + min (ncol, UBUFSIZ); //                  wchar_t *eol = str + min (ncol, UBUFSIZ);  ###  c_keyword possible_pointer inserted_var
          for (;;){
              if (expect_false (ch == NOCHAR || (IS_CONTROL (ch) && ch != C0_LF && ch != C0_CR && ch != C0_HT)))
                break;
              str[str_i++]=ch  //str++ = ch;  ### possible_pointer  FIXME pre/post increment
              if (expect_false (ch == C0_LF || str.length >= eol)){
                  if (ch == C0_LF)
                    nlines++;
                  refresh_count++;
                  if (!option (Opt_jumpScroll) || refresh_count >= nrow - 1){
                      refresh_count = 0;
                      if (!option (Opt_skipScroll) || ev_time () > ev::now () + 1. / 60.){  //FIXME
                          refreshnow = true;
                          ch = NOCHAR;
                          break;
                        }
                    }
                  // scr_add_lines only works for nlines <= nrow - 1.
                  if (nlines >= nrow - 1){
                      if (!(SHOULD_INVOKE (HOOK_ADD_LINES)
                            && HOOK_INVOKE ((this, HOOK_ADD_LINES, DT_WCS_LEN, buf, str - buf, DT_END))))
//CMNT   scr_add_lines (buf, str - buf, nlines);  //FIXME pointermath
                          scr_add_lines (buf, str.length - buf.length, nlines);  //FIXME pointermath
                      nlines = 0;
                      str = buf;
                      eol = str.length + min (ncol, UBUFSIZ);  // FIXME should_work
                    }

                  if (str.length >= eol){   // FIXME should_work
                      if (eol >= buf.length + UBUFSIZ){  // FIXME should_work
                          ch = NOCHAR;
                          break;
                        }
                      else
                        eol = min (eol + ncol, buf.length + UBUFSIZ);  // FIXME should_work
                    }
              }

              seq_begin = cmdbuf_ptr;
              ch = next_char (); 
          }

          if (!(SHOULD_INVOKE (HOOK_ADD_LINES)
//FIXED          && HOOK_INVOKE ((this, HOOK_ADD_LINES, DT_WCS_LEN, buf, str - buf, DT_END))))
                && HOOK_INVOKE ((this, HOOK_ADD_LINES, DT_WCS_LEN, buf, str.length - buf.length, DT_END)))){

//FIXED   scr_add_lines (buf, str - buf, nlines);  //FIXME pointermath
          
              scr_add_lines (buf, str.length - buf.length, nlines);  //FIXME pointermath

          }          /*
           * If there have been a lot of new lines, then update the screen 
           * What the heck we'll cheat and only refresh less than every page-full. 
           * if skipScroll is enabled. 
           */
          if (refreshnow){
              scr_refresh ();
              want_refresh = 1;
            }
      }
      else{
          try    {
              process_nonprinting (ch); 
            }
//CMNT: c_keyword ^|                 catch (const class out_of_input &o){ 
          catch ( out_of_input){  //FIXME exception
              // we ran out of input, retry later
              cmdbuf_ptr = seq_begin;
              break;
            }

          ch = NOCHAR;
        }
    }
}

// read the next character 
//FIXED: js_style_functions c_keyword ^|       wchar_t rxvt_term::next_char () 
rxvt_term.next_char =function(){ 
  while (cmdbuf_ptr < cmdbuf_endp){
      // assume 7-bit to be ascii ALWAYS
//CMNT: c_cast  c_keyword possible_pointer ^|             if (expect_true ((unsigned char)*cmdbuf_ptr <= 0x7f && *cmdbuf_ptr != 0x1b))  
      if (expect_true ( cmdbuf_ptr <= 0x7f &&  cmdbuf_ptr != 0x1b)) //FIXME what the fuck why do we care about the memory address of a pointer?
          return cmdbuf_ptr_i++;  //return *cmdbuf_ptr++;  ### possible_pointer  FIXME pointer_math

      var wc; //wchar_t wc;        ###  c_keyword
      //      size_t len = mbrtowc (&wc, cmdbuf_ptr, cmdbuf_endp - cmdbuf_ptr, mbstate);  //FIXME wtf

      if (len == (size_t)-2){
          // the mbstate stores incomplete sequences. didn't know this :/
          cmdbuf_ptr = cmdbuf_endp;
          break;
        }

      if (len == (size_t)-1){
          mbrtowc (0, 0, 0, mbstate); // reset now undefined conversion state
//CMNT: c_cast c_keyword possible_pointer ^|                 return (unsigned char)*cmdbuf_ptr++; // the _occasional_ latin1 character is allowed to slip through 
          return  cmdbuf_ptr_i++; // the _occasional_ latin1 character is allowed to slip through POINTER_MATH
        }

      // assume wchar == unicode 
      cmdbuf_ptr_i += len; //POINTER_MATH
      //      return wc & UN ICODE_MASK;
    }

  return NOCHAR;
}

// read the next octet
//FIXED: js_style_functions ^| uint32_t rxvt_term::next_octet () NOTHROW 
rxvt_term.next_octet =function() NOTHROW {
    //FIXME ternary
  return cmdbuf_ptr_i < cmdbuf_endp
  ?  cmdbuf_ptr[cmdbuf_ptr_i++]  //                ? (unsigned char)*cmdbuf_ptr++   ###  c_cast c_keyword possible_pointer 
         : NOCHAR;
}

//CMNT: c_keyword ^|       static class out_of_input out_of_input; 
//they just created their own exception class with a null defintion
// class out_of_input out_of_input;

/* rxvt_cmd_getc () - Return next input character */ 
/*
 * Return the next input character after first passing any keyboard input 
 * to the command. 
 */
//FIXED: js_style_functions c_keyword ^|       wchar_t rxvt_term::cmd_getc () THROW ((class out_of_input))
rxvt_term.cmd_getc =function() THROW ((class out_of_input)){ 
    var c= next_char ();   //wchar_t c = next_char ();  ### c_keyword js_style_variables 

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}

//  uint32_t rxvt_term::cmd_get8 () THROW ((class out_of_input)){
    rxvt_term.cmd_get8 = function () {
  var c = next_octet (); //uint32_t c = next_octet ();        ###  c_keyword

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}

/* *INDENT-OFF* */ 
/* enum {
  C1_40 = 0x40,
          C1_41 , C1_BPH, C1_NBH, C1_44 , C1_NEL, C1_SSA, C1_ESA,
  C1_HTS, C1_HTJ, C1_VTS, C1_PLD, C1_PLU, C1_RI , C1_SS2, C1_SS3,
  C1_DCS, C1_PU1, C1_PU2, C1_STS, C1_CCH, C1_MW , C1_SPA, C1_EPA,
  C1_SOS, C1_59 , C1_SCI, C1_CSI, CS_ST , C1_OSC, C1_PM , C1_APC,
};
*/
/* *INDENT-ON* */ 

/*{{{ process non-printing single characters */ 
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::process_nonprinting (unicode_t ch)
rxvt_term.process_nonprinting =function(ch){ 
  switch (ch){
      case C0_ESC:
        process_escape_seq ();
        break;
      case C0_ENQ:	/* terminal Status */
        if (rs[Rs_answerbackstring])
          tt_write (rs [Rs_answerbackstring], strlen (rs [Rs_answerbackstring]));
        else
          tt_write (VT100_ANS, strlen (VT100_ANS));
        break;
      case C0_BEL:	/* bell */
        scr_bell ();
        break;
      case C0_BS:		/* backspace */
        scr_backspace ();
        break;
      case C0_HT:		/* tab */
        scr_tab (1);
        break;
      case C0_CR:		/* carriage return */
        scr_gotorc (0, 0, R_RELATIVE);
        break;
      case C0_VT:		/* vertical tab, form feed */
      case C0_FF:
      case C0_LF:		/* line feed */
        scr_index (UP);
        break;
      case C0_SO:		/* shift out - acs */
      scr_charset_choose (1); 
        break;
      case C0_SI:		/* shift in - acs */
      scr_charset_choose (0); 
        break;

#ifdef EIGHT_BIT_CONTROLS
      // 8-bit controls
      case 0x90: 	/* DCS */
        process_dcs_seq ();
        break;
      case 0x9b: 	/* CSI */
        process_csi_seq ();
        break;
      case 0x9d: 	/* OSC */
        process_osc_seq ();
        break;
#endif
    }
}
/*}}} */


/*{{{ process VT52 escape sequences */

//FIXED: c_keyword ^| void       rxvt_term::process_escape_vt52 (unicode_t ch){ 
rxvt_term.process_escape_vt52 = function (ch){
  var row, col; //          int row, col;  ###  c_keyword inserted_var

  switch (ch){
      case 'A':		/* cursor up */
        scr_gotorc (-1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'B':		/* cursor down */
        scr_gotorc (1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'C':		/* cursor right */
        scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
        break;
      case 'D':		/* cursor left */
        scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
        break;
      case 'H':		/* cursor home */
        scr_gotorc (0, 0, 0);
        break;
      case 'I':		/* cursor up and scroll down if needed */
        scr_index (DN);
        break;
      case 'J':		/* erase to end of screen */
        scr_erase_screen (0);
        break;
      case 'K':		/* erase to end of line */
        scr_erase_line (0);
        break;
      case 'Y':         	/* move to specified row and col */
        /* full command is 'ESC Y row col' where row and col
         * are encoded by adding 32 and sending the ascii 
         * character.  eg. SPACE = 0, '+' = 13, '0' = 18, 
         * etc. */ 
        row = cmd_getc () - ' ';
        col = cmd_getc () - ' ';
        scr_gotorc (row, col, 0);
        break;
      case 'Z':		/* identify the terminal type */
        tt_printf ("\033/Z");	/* I am a VT100 emulating a VT52 */ 
        break;
      case '<':		/* turn off VT52 mode */
        set_privmode (PrivMode_vt52, 0);
        break;
  case 'F':     	/* use special graphics character set */ 
  case 'G':           /* use regular character set */ 
        /* unimplemented */
        break;
      case '=':     	/* use alternate keypad mode */
      case '>':           /* use regular keypad mode */
        /* unimplemented */
        break;
    }
}
/*}}} */


/*{{{ process escape sequences */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::process_escape_seq () 
rxvt_term.process_escape_seq =function(){ 
  var ch= cmd_getc ();  //unicode_t ch = cmd_getc ();        ###  js_style_variables

  if (priv_modes & PrivMode_vt52){
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
      scr_charset_set (0,cmd_getc ()); 
        break;
      case ')':
      scr_charset_set (1,cmd_getc ()); 
        break;
  case '*': 
      scr_charset_set (2,cmd_getc ()); 
        break;
      case '+':
      scr_charset_set (3,cmd_getc ()); 
        break;
#if !ENABLE_MINIMAL
      case '6':
        scr_backindex ();
        break;
#endif
      case '7':
        scr_cursor (SAVE);
        break;
      case '8':
        scr_cursor (RESTORE);
        break;
#if !ENABLE_MINIMAL
      case '9':
        scr_forwardindex ();
        break;
#endif
      case '=':
      case '>':
        set_privmode (PrivMode_aplKP, ch == '=');
        break;

      case C1_40:
        cmd_getc ();
        break;
      case C1_44:
        scr_index (UP);
        break;

        /* 8.3.87: NEXT LINE */
      case C1_NEL:		/* ESC E */
        {
            var nlcr= [ C0_LF, C0_CR ] ;   //wchar_t nlcr[] = { C0_LF, C0_CR };  ### js_style_variables js_style_arrays 
          scr_add_lines (nlcr, sizeof (nlcr) / sizeof (nlcr [0]), 1);
        }
        break;

        /* kidnapped escape sequence: Should be 8.3.48 */
      case C1_ESA:		/* ESC G */
        process_graphics ();
        break;

        /* 8.3.63: CHARACTER TABULATION SET */
      case C1_HTS:		/* ESC H */
        scr_set_tab (1);
        break;

        /* 8.3.105: REVERSE LINE FEED */
      case C1_RI:			/* ESC M */
        scr_index (DN);
        break;

        /* 8.3.142: SINGLE-SHIFT TWO */
      /*case C1_SS2: scr_single_shift (2);   break; */

        /* 8.3.143: SINGLE-SHIFT THREE */
      /*case C1_SS3: scr_single_shift (3);   break; */

        /* 8.3.27: DEVICE CONTROL STRING */
      case C1_DCS:		/* ESC P */
        process_dcs_seq ();
        break;

        /* 8.3.110: SINGLE CHARACTER INTRODUCER */
      case C1_SCI:		/* ESC Z */
        tt_write (ESCZ_ANSWER, sizeof (ESCZ_ANSWER) - 1);
        break;			/* steal obsolete ESC [ c */

        /* 8.3.16: CONTROL SEQUENCE INTRODUCER (CSI) */
      case C1_CSI:		/* ESC [ */
        process_csi_seq ();
        break;

        /* 8.3.90: OPERATING SYSTEM COMMAND (OSC) */
      case C1_OSC:		/* ESC ] */
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
/*
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
*/
#define make_byte(b7,b6,b5,b4,b3,b2,b1,b0)			\
    (((b7) << 7) | ((b6) << 6) | ((b5) << 5) | ((b4) << 4)	\
     | ((b3) << 3) | ((b2) << 2) | ((b1) << 1) | (b0))
#define get_byte_array_bit(array, bit)				\
    (!! ((array)[ (bit) / 8] & (128 >> ((bit) & 7))))

//CMNT: c_keyword ^|       const unsigned char csi_defaults[] = 
   csi_defaults = [
  
    make_byte (1,1,1,1,1,1,1,1),	/* @, A, B, C, D, E, F, G, */
    make_byte (1,1,0,0,1,1,0,0),	/* H, I, J, K, L, M, N, O, */
    make_byte (1,0,1,1,1,1,1,0),	/* P, Q, R, S, T, U, V, W, */
    make_byte (1,1,1,0,0,0,1,0),	/* X, Y, Z, [, \, ], ^, _, */
    make_byte (1,1,1,0,1,1,1,0),	/* `, a, b, c, d, e, f, g, */
    make_byte (0,0,1,1,0,0,0,0),	/* h, i, j, k, l, m, n, o, */
    make_byte (0,0,0,0,0,0,0,0),	/* p, q, r, s, t, u, v, w, */
    make_byte (0,0,0,0,0,0,0,0)	/* x, y, z, {, |, }, ~,    */
                   ];
/* *INDENT-ON* */ 

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_csi_seq ()
rxvt_term.process_csi_seq =function(){ 
  var ch, priv, i; //          unicode_t ch, priv, i;  ###  c_keyword inserted_var
  var nargs, p; //          unsigned int nargs, p;  ###  c_keyword inserted_var
  var n, ndef; //          int n, ndef;  ###  c_keyword inserted_var
  var arg = new Array(ESC_ARGS); //          int arg[ESC_ARGS] = { };  ###  c_keyword inserted_var

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
          if (nargs < ESC_ARGS)
            arg[nargs++] = n;
          n = -1;
        }
      else if (IS_CONTROL (ch))
        process_nonprinting (ch); 

      ch = cmd_getc ();
    }

  if (ch > CSI_7F)
    return;

  if (nargs < ESC_ARGS)
    arg[nargs++] = n;

  i = ch - CSI_ICH;
  ndef = get_byte_array_bit (csi_defaults, i);
  for (p = 0; p < nargs; p++)
    if (arg[p] == -1)
      arg[p] = ndef;

  /*
   * private mode handling 
   */
  if (priv){
      switch (priv){
          case '>':
            if (ch == CSI_DA)	/* secondary device attributes */
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

                var pm_h= [ 7, 25 ] ;   //static const int pm_h[] = { 7, 25 };  ### js_style_variables js_style_arrays 
                var pm_l= [ 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 ] ;   //static const int pm_l[] = { 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 };  ### js_style_variables js_style_arrays 

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

      case CSI_CUU:		/* 8.3.22: (1) CURSOR UP */
      case CSI_VPR:		/* 8.3.161: (1) LINE POSITION FORWARD */
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CUD:		/* 8.3.19: (1) CURSOR DOWN */
      case CSI_VPB:		/* 8.3.160: (1) LINE POSITION BACKWARD */
        scr_gotorc (arg[0], 0, RELATIVE);
        break;

      case CSI_CUB:		/* 8.3.18: (1) CURSOR LEFT */
      case CSI_HPB: 		/* 8.3.59: (1) CHARACTER POSITION BACKWARD */
#ifdef ISO6429
        arg[0] = -arg[0];
#else				/* emulate common DEC VTs */
        arg[0] = arg[0] ? -arg[0] : -1;
#endif
        /* FALLTHROUGH */
      case CSI_CUF:		/* 8.3.20: (1) CURSOR RIGHT */
      case CSI_HPR:		/* 8.3.60: (1) CHARACTER POSITION FORWARD */
#ifdef ISO6429
        scr_gotorc (0, arg[0], RELATIVE);
#else				/* emulate common DEC VTs */
        scr_gotorc (0, arg[0] ? arg[0] : 1, RELATIVE);
#endif
        break;

      case CSI_CPL:		/* 8.3.13: (1) CURSOR PRECEDING LINE */
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CNL:		/* 8.3.12: (1) CURSOR NEXT LINE */
        scr_gotorc (arg[0], 0, R_RELATIVE);
        break;

      case CSI_CHA:		/* 8.3.9: (1) CURSOR CHARACTER ABSOLUTE */
      case CSI_HPA:		/* 8.3.58: (1) CURSOR POSITION ABSOLUTE */
        scr_gotorc (0, arg[0] - 1, R_RELATIVE);
        break;

      case CSI_VPA:		/* 8.3.159: (1) LINE POSITION ABSOLUTE */
        scr_gotorc (arg[0] - 1, 0, C_RELATIVE);
        break;

      case CSI_CUP:		/* 8.3.21: (1,1) CURSOR POSITION */
      case CSI_HVP:		/* 8.3.64: (1,1) CHARACTER AND LINE POSITION */
        scr_gotorc (arg[0] - 1, nargs < 2 ? 0 : (arg[1] - 1), 0);
        break;

      case CSI_CBT:		/* 8.3.7: (1) CURSOR BACKWARD TABULATION */
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CHT:		/* 8.3.10: (1) CURSOR FORWARD TABULATION */
        scr_tab (arg[0]);
        break;

      case CSI_ED:		/* 8.3.40: (0) ERASE IN PAGE */
        scr_erase_screen (arg[0]);
        break;

      case CSI_EL:		/* 8.3.42: (0) ERASE IN LINE */
        scr_erase_line (arg[0]);
        break;

      case CSI_ICH:		/* 8.3.65: (1) INSERT CHARACTER */
      scr_insdel_chars (arg[0], INSERT); 
        break;

      case CSI_IL:		/* 8.3.68: (1) INSERT LINE */
        scr_insdel_lines (arg[0], INSERT);
        break;

      case CSI_DL:		/* 8.3.33: (1) DELETE LINE */
        scr_insdel_lines (arg[0], DELETE);
        break;

      case CSI_ECH:		/* 8.3.39: (1) ERASE CHARACTER */
      scr_insdel_chars (arg[0], ERASE); 
        break;

      case CSI_DCH:		/* 8.3.26: (1) DELETE CHARACTER */
      scr_insdel_chars (arg[0], DELETE); 
        break;

      case CSI_SD:		/* 8.3.114: (1) SCROLL DOWN */
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_SU:		/* 8.3.148: (1) SCROLL UP */
        scr_scroll_text (screen.tscroll, screen.bscroll, arg[0]);
        break;

      case CSI_DA:		/* 8.3.24: (0) DEVICE ATTRIBUTES */
        tt_write (VT100_ANS, sizeof (VT100_ANS) - 1);
        break;

      case CSI_SGR:		/* 8.3.118: (0) SELECT GRAPHIC RENDITION */
        process_sgr_mode (nargs, arg);
        break;

      case CSI_DSR:		/* 8.3.36: (0) DEVICE STATUS REPORT */
        switch (arg[0]){
            case 5:			/* DSR requested */
              tt_printf ("\033[0n"); 
              break;
            case 6:			/* CPR requested */
              scr_report_position ();
              break;
            case 7:			/* unofficial extension */
              if (option (Opt_insecure))
                tt_printf ("%-.250s\012", rs[Rs_display_name]); 
              break;
            case 8:			/* unofficial extension */
                // FIXME process_xterm_seq (XTerm_title, RESNAME "-" VERSION, CHAR_ST);
              break;
          }
        break;

      case CSI_TBC:		/* 8.3.155: (0) TABULATION CLEAR */
        switch (arg[0]){
        case 0:			/* char tab stop cleared at active position */ 
              scr_set_tab (0);
              break;
              /* case 1: */		/* line tab stop cleared in active line */
              /* case 2: */		/* char tab stops cleared in active line */ 
        case 3:			/* all char tab stops are cleared */ 
              /* case 4: */		/* all line tab stops are cleared */
        case 5:			/* all tab stops are cleared */
          scr_set_tab (-1);
              break;
          }
        break;

      case CSI_CTC:		/* 8.3.17: (0) CURSOR TABULATION CONTROL */
        switch (arg[0]){
        case 0:			/* char tab stop set at active position */ 
              scr_set_tab (1);
              break;		/* = ESC H */
              /* case 1: */		/* line tab stop set at active line */
        case 2:			/* char tab stop cleared at active position */ 
              scr_set_tab (0);
              break;		/* = ESC [ 0 g */
              /* case 3: */		/* line tab stop cleared at active line */
              /* case 4: */		/* char tab stops cleared at active line */ 
        case 5:			/* all char tab stops are cleared */ 
              scr_set_tab (-1);
              break;		/* = ESC [ 3 g */
              /* case 6: */		/* all line tab stops are cleared */
          }
        break;

      case CSI_RM:		/* 8.3.107: RESET MODE */
        if (arg[0] == 4)
          scr_insert_mode (0);
        else if (arg[0] == 20)
          priv_modes &= ~PrivMode_LFNL;
        break;

      case CSI_SM:		/* 8.3.126: SET MODE */
        if (arg[0] == 4)
          scr_insert_mode (1);
        else if (arg[0] == 20)
          priv_modes |= PrivMode_LFNL;
        break;

        /*
         * PRIVATE USE beyond this point.  All CSI_7? sequences here 
         */
      case CSI_72:		/* DECSTBM: set top and bottom margins */
        if (nargs == 1)
          scr_scroll_region (arg[0] - 1, MAX_ROWS - 1);
        else if (nargs == 0 || arg[0] >= arg[1])
          scr_scroll_region (0, MAX_ROWS - 1);
        else
          scr_scroll_region (arg[0] - 1, arg[1] - 1);
        break;

      case CSI_73:
        scr_cursor (SAVE);
        break;
      case CSI_75:
        scr_cursor (RESTORE);
        break;

#if !ENABLE_MINIMAL
      case CSI_74:
        process_window_ops (arg, nargs);
        break;
#endif

      case CSI_78:		/* DECREQTPARM */
        if (arg[0] == 0 || arg[0] == 1)
          tt_printf ("\033[%d;1;1;128;128;1;0x", arg[0] + 2); 
        break;

      default:
        break;
    }
}
/*}}} */

#if !ENABLE_MINIMAL
/* ARGSUSED */
//FIXED: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_window_ops (const int *args, unsigned int nargs)
rxvt_term.process_window_ops =function( args,   nargs){ 
  var x, y; //          int x, y;  ###  c_keyword inserted_var
  XWindowAttributes wattr;
  Window wdummy;

//CMNT: possible_pointer ^|         dLocal (Display *, dpy); 
  dLocal (Display  ,  dpy);

  if (nargs == 0)
    return;

  switch (args[0]){
      /*
       * commands 
       */
      case 1:			/* deiconify window */
        XMapWindow (dpy, parent[0]);
        break;
      case 2:			/* iconify window */
        XIconifyWindow (dpy, parent[0], display.screen);
        break;
      case 3:			/* set position (pixels) */
        XMoveWindow (dpy, parent[0], args[1], args[2]);
        break;
      case 4:			/* set size (pixels) */
        set_widthheight (args[2] //set_widthheight ((unsigned int)args[2], (unsigned int)args[1]);        , ()args[1]);###  c_keyword c_cast
        break;
      case 5:			/* raise window */
        XRaiseWindow (dpy, parent[0]);
        break;
      case 6:			/* lower window */
        XLowerWindow (dpy, parent[0]);
        break;
      case 7:			/* refresh window */
        scr_touch (true);
        break;
  case 8:			/* set size (chars) */ 
                         set_widthheight ( (args[2] *   fwidth), //set_widthheight ((unsigned int) (args[2] * fwidth),        ###  c_keyword  c_cast
                            (args[1]    fheight)); //unsigned int) (args[1] * fheight));        ###  c_keyword 
        break;

      //case 9: NYI, TODO, restore maximized window or maximize window
      default:
        if (args[0] >= 24)	/* set height (chars) */ 
          set_widthheight (width, //set_widthheight ((unsigned int)width,        ###  c_keyword c_cast
                            (args[1]    fheight)); //unsigned int) (args[1] * fheight));        ###  c_keyword  c_cast
        break;

      /*
       * reports - some output format copied from XTerm 
       */
      case 11:			/* report window state */
        XGetWindowAttributes (dpy, parent[0], &wattr);
                         tt_printf ("\033[%dt", wattr.map_state == IsViewable ? 1 : 2); 
        break;
      case 13:			/* report window position */
        XGetWindowAttributes (dpy, parent[0], &wattr);
        XTranslateCoordinates (dpy, parent[0], wattr.root,
                               -wattr.border_width, -wattr.border_width,
                               &x, &y, &wdummy);
                         tt_printf ("\033[3;%d;%dt", x, y); 
        break;
      case 14:			/* report window size (pixels) */
        XGetWindowAttributes (dpy, parent[0], &wattr);
                         tt_printf ("\033[4;%d;%dt", wattr.height, wattr.width); 
        break;
  case 18:			/* report text area size (chars) */ 
    tt_printf ("\033[8;%d;%dt", nrow, ncol); 
        break;
  case 19:			/* report window size (chars) */ 
    tt_printf ("\033[9;%d;%dt", nrow, ncol); 
        break;
                         /* these won't be needed, there will be nothign to report this back to
        case 20:			// report icon label 
        {
          var s ; //                  char *s;  ###  c_keyword possible_pointer inserted_var
          XGetIconName (dpy, parent[0], &s);
          tt_printf ("\033]L%-.250s\234", option (Opt_insecure) && s ? s : "");	// 8bit ST 
          XFree (s);
        }
        break;
        case 21:			//report window title 
        {
          var s ; //                  char *s;  ###  c_keyword possible_pointer inserted_var
          XFetchName (dpy, parent[0], &s);
          tt_printf ("\033]l%-.250s\234", option (Opt_insecure) && s ? s : "");	// 8bit ST 
          XFree (s);
        }
        break;
                         */
    }
}
#endif

/*----------------------------------------------------------------------*/
/*
 * get input up until STRING TERMINATOR (or BEL) 
 * ends_how is terminator used. returned input must be free()'d 
 */
//CMNT: js_style_functions c_keyword ^| char *       rxvt_term::get_to_st (unicode_t &ends_how) 
rxvt_term.get_to_st =function(ends_how){ 
  var ch; //          unicode_t ch;  ###  c_keyword inserted_var
  var seen_esc = false; //   bool seen_esc = false; c_keyword inserted_var
  var n = 0; //          unsigned int n = 0;  ###  c_keyword inserted_var
  var string_ = new Array(STRING_MAX); //          wchar_t string[STRING_MAX];  ###  c_keyword inserted_var js_style_array

  while ((ch = cmd_getc ()) != NOCHAR){
      if (seen_esc){
          if (ch == 0x5c)	/* 7bit ST */
            break;
          else
            return NULL;
        }
      else if (ch == C0_ESC){
          seen_esc = true;
          continue;
        }
      else if (ch == C0_BEL || ch == CHAR_ST)
        break;
      else if (ch == C0_SYN)
        ch = cmd_get8 ();
      else if (ch < 0x20)
        return NULL;	/* other control character - exit */ 

      seen_esc = false;

      if (n >= STRING_MAX - 1)
        // stop at some sane length
        return NULL;

      string_[n++] = ch;
    }

  string_[n++] = '\0';

  ends_how = (ch == 0x5c ? C0_ESC : ch);

  return rxvt_wcstombs (string_); //FIXME rxvt_wcstombs what the hell does it do, seems to take wide_chars and return regualr chars
}

/*----------------------------------------------------------------------*/
/*
 * process DEVICE CONTROL STRING `ESC P ... (ST|BEL)' or `0x90 ... (ST|BEL)' 
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_dcs_seq () 
rxvt_term.process_dcs_seq =function(){ 
  var s ; //          char *s;  ###  c_keyword possible_pointer inserted_var
  var eh; //          unicode_t eh;  ###  c_keyword inserted_var

  /*
   * Not handled yet 
   */
  s = get_to_st (eh);
//POINTER_MATH non_applicable
//  if (s)
//    free (s);

  return;
}

/*----------------------------------------------------------------------*/
/*
 * process OPERATING SYSTEM COMMAND sequence `ESC ] Ps ; Pt (ST|BEL)' 
 */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::process_osc_seq () 
rxvt_term.process_osc_seq =function(){ 
  var ch, eh; //          unicode_t ch, eh;  ###  c_keyword inserted_var
  var arg; //          int arg;  ###  c_keyword inserted_var

  ch = cmd_getc ();
  for (arg = 0; isdigit (ch); ch = cmd_getc ())
      arg = arg * 10 + (ch - '0'); 

  if (ch == ';'){
    var s= get_to_st (eh);   //             char *s = get_to_st (eh);   ###  js_style_variables possible_pointer 

      if (s){
          process_xterm_seq (arg, s, eh);
          free (s);
        }
    }
}

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_color_seq (int report, int color, const char *str, char resp) 
rxvt_term.process_color_seq =function(report,  color,    str,  resp){ 
  if (str[0] == '?' && !str[1]){
    var c;  //      rgba c;
      pix_colors_focused[color].get (c);

#if XFT
     if (c.a != rgba::MAX_CC)
        tt_printf ("\033]%d;rgba:%04x/%04x/%04x/%04x%c", report, c.a, c.r, c.g, c.b, resp); 
      else

#endif
        tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp); 
    }
  else
    set_window_color (color, str);
}

/*
 * XTerm escape sequences: ESC ] Ps;Pt (ST|BEL) 
 */
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_xterm_seq (int op, const char *str, char resp) 
rxvt_term.process_xterm_seq =function(op,    str,  resp){ 
  var color; //          int color;  ###  c_keyword inserted_var
  var buf,  name, buf_i =0, name_i=0; //          char *buf, *name;  ###  c_keyword possible_pointer inserted_var
  var query = str[0] == '?' && !str[1]; //   bool query = str[0] == '?' && !str[1]; ### c_keyword inserted_var
  var saveop= op;  //          int saveop = op;   js_style_variables 

//CMNT: possible_pointer ^|         dLocal (Display *, dpy); 
//  dLocal (Display  ,  dpy);

  assert (str != NULL);

  if (HOOK_INVOKE ((this, HOOK_OSC_SEQ, DT_INT, op, DT_STR, str, DT_END)))
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
            /*
        if (str[0] == '?'){
            //Atom prop = display->atom (str + 1);
            //Atom actual_type;
            var actual_format; //                    int actual_format;  ###  c_keyword inserted_var
            var nitems; //                    unsigned long nitems;  ###  c_keyword inserted_var
            var bytes_after; //                    unsigned long bytes_after;  ###  c_keyword inserted_var
            var value = 0; //                    unsigned char *value = 0;  ###  c_keyword possible_pointer inserted_var
            var str = ""; //                    const char *str = "";  ###  c_keyword possible_pointer inserted_var

            if (prop
                && XGetWindowProperty (dpy, parent[0],
                                       prop, 0, 1<<16, 0, AnyPropertyType,
                                       &actual_type, &actual_format,
                                       &nitems, &bytes_after, &value) == Success
                && actual_type != None
                && actual_format == 8)
//CMNT: c_keyword possible_pointer ^|                     str = (const char *)(value); 
              str = ( ) (value);

            tt_printf ("\033]%d;%s%c", op, str, resp); 

            XFree (value);

          }
        else{
//CMNT: c_keyword possible_pointer ^|                   char *eq = strchr (str, '='); // constness lost, but verified to be ok 
              eq = strchr (str, '='); // constness lost, but verified to be ok

            if (eq){
                eq = 0;  //eq = 0;  ### possible_pointer 
                set_utf8_property (display->atom (str), eq + 1);
              }
            else
              XDeleteProperty (dpy, parent[0],
                               display->atom (str));
          }*/
        break;

      case XTerm_Color:
//CMNT: c_keyword possible_pointer ^|               for (buf = (char *)str; buf && *buf;)
          for (buf =  str; buf &&  buf;){  //POINTER_MATH ????
            if ((name = strchr (buf, ';')) == NULL)
              break;

            name[name_i++] = '\0';  //name++ = '\0';  ### possible_pointer POINTER_MATH
            color = atoi (buf) + minCOLOR;

            if (!IN_RANGE_INC (color, minCOLOR, maxTermCOLOR))
              break;

            if ((buf = strchr (name, ';')) != NULL)
                buf[buf_i++] = '\0';  //buf++ = '\0';  ### possible_pointer POINTER_MATH

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
#ifndef NO_CURSORCOLOR
      case XTerm_Color_cursor:
        process_color_seq (op, Color_cursor, str, resp);
        break;
#endif
  case XTerm_Color_pointer_fg: 
        process_color_seq (op, Color_pointer_fg, str, resp); 
        break;
  case XTerm_Color_pointer_bg: 
      process_color_seq (op, Color_pointer_bg, str, resp); 
        break;
#ifndef NO_BOLD_UNDERLINE_REVERSE
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
#endif
      case URxvt_Color_border:
        process_color_seq (op, Color_border, str, resp);
        break;
#if ENABLE_TRANSPARENCY
  case URxvt_Color_tint: 
    process_color_seq (op, Color_tint, str, resp); 
        {
          bool changed = false;

          if (ISSET_PIXCOLOR (Color_tint)) 
            changed = bgPixmap.set_tint (pix_colors_focused [Color_tint]); 
          else
            changed = bgPixmap.unset_tint (); 

          if (changed)
            update_background ();
        }

        break;
#endif

#if BG_IMAGE_FROM_FILE
      case Rxvt_Pixmap:
        if (!strcmp (str, "?")){
          var str[256]; //                    char str[256];  ###  c_keyword inserted_var

          sprintf (str, "[%dx%d+%d+%d]",	/* can't presume snprintf () ! */ 
                     min (bgPixmap.h_scale, 32767), min (bgPixmap.v_scale, 32767),
                     min (bgPixmap.h_align, 32767), min (bgPixmap.v_align, 32767));
            process_xterm_seq (XTerm_title, str, CHAR_ST);
          }
        else{
//CMNT: js_style_variables ^|                   int changed = 0; 
 var changed= 0; 

//CMNT: possible_pointer ^|                   if (*str != ';'){ 
            if (str != ';'){
                /* reset to default scaling :*/
                bgPixmap.unset_geometry ();
                if (bgPixmap.set_file (str))	/* change pixmap */
                  changed++;
                str = strchr (str, ';');
                if (str == NULL)
                  bgPixmap.set_defaultGeometry ();
              }

            while (str){
                str++;
                if (bgPixmap.set_geometry (str))
                  changed++;
                str = strchr (str, ';');
              }

            if (changed)
              update_background ();
          }
        break;
#endif

      case XTerm_logfile:
        // TODO, when secure mode?
        break;

#if 0
      case Rxvt_dumpscreen:	/* no error notices */
        {
          var fd; //                  int fd;  ###  c_keyword inserted_var
          if ((fd = open (str, O_RDWR | O_CREAT | O_EXCL, 0600)) >= 0){
              scr_dump (fd);
              close (fd);
            }
        }
        break;
#endif
      case XTerm_font:
        op = URxvt_font;
      case URxvt_font:
#if ENABLE_STYLES
      case URxvt_boldFont:
      case URxvt_italicFont:
      case URxvt_boldItalicFont:

#endif
          /* REWRITE
        if (query)
          tt_printf ("\33]%d;%-.250s%c", saveop, 
                     option (Opt_insecure) && fontset[op - URxvt_font]->fontdesc
                       ? fontset[op - URxvt_font]->fontdesc : "",
                     resp);
        else{
//CMNT: c_keyword possible_pointer ^|                   const char *&res = rs[Rs_font + (op - URxvt_font)]; 
            & res = rs[Rs_font + (op - URxvt_font)];  //FIXME wtf

            res = strdup (str);
//CMNT: c_keyword possible_pointer ^|                   allocated.push_back ((void *)res); 
            allocated.push_back (() res);
            set_fonts ();
          }
          */
        break;

      case URxvt_version:
        if (query)
          tt_printf ("\33]%d;rxvt-unicode;%-.20s;%c;%c%c", 
                     op,
                     rs[Rs_name], VERSION[0], VERSION[2],
                     resp);
        break;

#if !ENABLE_MINIMAL
      case URxvt_locale:
        if (query)
          tt_printf ("\33]%d;%-.250s%c", op, option (Opt_insecure) ? locale : "", resp); 
        else{
            set_locale (str);
            pty.set_utf8_mode (enc_utf8);
            init_xlocale ();
          }
        break;

      case URxvt_view_up:
      case URxvt_view_down:
        {
//CMNT: js_style_variables ^|                 int lines = atoi (str); 
 var lines= atoi (str); 

          if (lines)
            scr_page (op == URxvt_view_up ? UP : DN, lines);
          else
            scr_erase_savelines ();
        }

        break;
#endif

#if ENABLE_PERL
      case URxvt_perl:
        HOOK_INVOKE ((this, HOOK_OSC_SEQ_PERL, DT_STR, str, DT_STR_LEN, &resp, 1, DT_END));
        break;
#endif
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
//FIXED: js_style_functions c_keyword ^|       int rxvt_term::privcases (int mode, unsigned long bit)
rxvt_term.privcases =function(mode,   bit){ 
  var state; //          int state;  ###  c_keyword inserted_var

  if (mode == 's'){
      SavedModes |= (priv_modes & bit);
      return -1;
    }
  else{
      if (mode == 'r')
        state = (SavedModes & bit) ? 1 : 0;	/* no overlapping */
      else
        state = (mode == 't') ? ! (priv_modes & bit) : mode;
      set_privmode (bit, state);
    }

  return state;
}


  /* 

var rxvt_t_proto = {
//    struct rxvt_hidden : *h,
    TermWin_t    :   TermWin,
    scrollBar_t  :  scrollBar,
    menuBar_t    :   menuBar,
    Display      :  *Xdisplay,
    unsigned long:   Options,
    XSizeHints   :   szHint,
    Colormap     :   Xcmap,
    Pixel        :  *PixColors,
    short        :   numPixColors,
    Cursor       :   TermWin_cursor,	//cursor for vt window 
        int          :   Xdepth,
    int          :   sb_shadow,	        //scrollbar shadow width                    
        int          :   Xfd,	        //file descriptor of X server connection   
        int          :   cmd_fd,	// pty file descriptor, connected to command 
        int          :   tty_fd,	// tty file descriptor, connected to child   
        int          :   num_fds,	// number of file descriptors being used     
        int          :   numlock_state,
    text_t       : **drawn_text,	// text drawn on screen (characters)         
        rend_t       : **drawn_rend,	// text drawn on screen (rendition)          
        text_t       : **buf_text,
    rend_t       : **buf_rend,
    char         :  *tabs,	        //per location: 1 == tab-stop               
        screen_t     :   screen,
    screen_t     :   swap,
    selection_t  :   selection,
    sstyle_t     :   selection_style,
    ENC_METHOD   :   encoding_method,
}
*/
/* we're not using priv _yet_ */
/*//CMNT: macro_expansion_error js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_terminal_mode (int mode, int priv UN USED, unsigned int nargs, const int *arg) */
rxvt_term.process_terminal_mode =function(mode,  __unused__,   nargs,    arg){ 
    var i, j; //  unsigned int i, j; 
    var state; //  int state; 
  //FIXME I already made this

    var argtopriv  = [
{ 1: PrivMode_aplCUR },       // DECCKM
                  { 2: PrivMode_vt52 },
                  { 3: PrivMode_132 },          // DECCOLM
                  { 4: PrivMode_smoothScroll }, // DECSCLM
                  { 5: PrivMode_rVideo },       // DECSCNM
                  { 6: PrivMode_relOrigin },    // DECOM
                  { 7: PrivMode_Autowrap },     // DECAWM
                 // 8: auto-repeat keys         // DECARM
                  { 9: PrivMode_MouseX10 },
                  // 18 end FF to printer after print screen 
                  // 19 Print screen prints full screen/scorll region 
                  { 25: PrivMode_VisibleCursor }, // cnorm/cvvis/civis
#ifdef scrollBar_esc
                  { scrollBar_esc: PrivMode_scrollBar },
#endif
                  { 35: PrivMode_ShiftKeys },   // rxvt extension
                 // 38: tektronix mode          // DECTEK
{ 40: PrivMode_132OK },
                 // 41 xterm more fixes NYI
                 // 45 margin bell NYI
                 // 46 start logging
                  { 47: PrivMode_Screen },
                  { 66: PrivMode_aplKP },       // DECPAM/DECPNM
#ifndef NO_BACKSPACE_KEY
                  { 67: PrivMode_BackSpace },   // DECBKM
#endif
                  { 1000: PrivMode_MouseX11 },
                  { 1002: PrivMode_MouseBtnEvent },
                  { 1003: PrivMode_MouseAnyEvent },
                  { 1010: PrivMode_TtyOutputInh }, // rxvt extension
                  { 1011: PrivMode_Keypress }, // rxvt extension
                 // 1035 enable modifiers for alt, numlock NYI
                 // 1036 send ESC for meta keys NYI
                 // 1037 send DEL for keypad delete NYI
                  { 1047: PrivMode_Screen },
                 // 1048 save and restore cursor
                  { 1049: PrivMode_Screen }, /* xterm extension, clear screen on ti rather than te */
                 // 1051, 1052, 1060, 1061 keyboard emulation NYI
                  { 2004: PrivMode_BracketPaste }
                      ];

  if (nargs == 0)
    return;

  /* make lo/hi boolean */
  if (mode == 'l')
    mode = 0;		/* reset */
  else if (mode == 'h')
    mode = 1;		/* set */

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
#if ENABLE_STYLES
          case 1021:
              set_option (Opt_intensityStyles, mode); 
              scr_touch (true);
            break;
#endif
          case 1048:		/* alternative cursor save */
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
            case 2:			/* VT52 mode */
              /* oddball mode.  should be set regardless of set/reset
               * parameter.  Return from VT52 mode with an ESC < from 
               * within VT52 mode 
               */
              set_privmode (PrivMode_vt52, 1);
              break;
            case 3:			/* 80/132 */
              if (priv_modes & PrivMode_132OK)
                  set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight); 
              break;
            case 4:			/* smooth scrolling */
              set_option (Opt_jumpScroll, !state);
              break;
            case 5:			/* reverse video */
              scr_rvideo_mode (state);
              break;
            case 6:			/* relative/absolute origins  */
              scr_relative_origin (state);
              break;
            case 7:			/* autowrap */
              scr_autowrap (state);
              break;
            /* case 8:	- auto repeat, can't do on a per window basis */
            case 9:			/* X10 mouse reporting */
              if (state)		/* orthogonal */
                priv_modes &= ~(PrivMode_MouseX11|PrivMode_MouseBtnEvent|PrivMode_MouseAnyEvent);
              break;
#ifdef scrollBar_esc
            case scrollBar_esc:
              if (scrollBar.map (state)){
                  resize_all_windows (0, 0, 0);
                  scr_touch (true);
                }
              break;
#endif
            case 25:		/* visible/invisible cursor */
              scr_cursor_visible (state);
              break;
            /* case 35:	- shift keys */
            /* case 40:	- 80 <--> 132 mode */
            case 47:		/* secondary screen */
              scr_change_screen (state);
              break;
            /* case 66:	- application key pad */
            /* case 67:	- backspace key */
            case 1000:		/* X11 mouse reporting */
              if (state)		/* orthogonal */
                priv_modes &= ~(PrivMode_MouseX10|PrivMode_MouseBtnEvent|PrivMode_MouseAnyEvent);
              break;
            case 1002:
            case 1003:
              if (state){
                  priv_modes &= ~(PrivMode_MouseX10|PrivMode_MouseX11);
                  priv_modes &= arg[i] == 1003 ? ~PrivMode_MouseBtnEvent : ~PrivMode_MouseAnyEvent;
                  vt_emask_mouse = PointerMotionMask; 
                }
              else
                vt_emask_mouse = NoEventMask;

              vt_select_input ();
              break;
            case 1010:		/* scroll to bottom on TTY output inhibit */
              set_option (Opt_scrollTtyOutput, !state);
              break;
            case 1011:		/* scroll to bottom on key press */
              set_option (Opt_scrollTtyKeypress, state);
              break;
            case 1047:		/* secondary screen w/ clearing last */
              if (option (Opt_secondaryScreen))
                if (!state)
                  scr_erase_screen (2);

              scr_change_screen (state);
              break;
            case 1049:		/* secondary screen w/ clearing first */
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
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_sgr_mode (unsigned int nargs, const int *arg) 
rxvt_term.process_sgr_mode =function(nargs,    arg){ 
  var i; //          unsigned int i;  ###  c_keyword inserted_var
  var rendset; //          short rendset;  ###  c_keyword inserted_var
  var rendstyle; //          int rendstyle;  ###  c_keyword inserted_var

  if (nargs == 0){
      scr_rendition (0, ~RS_None);
      return;
    }

  for (i = 0; i < nargs; i++){
      rendset = -1;
      switch (arg[i]){
          case 0:
            rendset = 0, rendstyle = ~RS_None;
            break;
          case 1:
            rendset = 1, rendstyle = RS_Bold;
            break;
            //case 2: // low intensity 
          case 3:
            rendset = 1, rendstyle = RS_Italic;
            break;
          case 4:
            rendset = 1, rendstyle = RS_Uline;
            break;
          case 5: // slowly blinking
          case 6: // rapidly blinking
            rendset = 1, rendstyle = RS_Blink;
            break;
          //case 6: // scoansi light background
          case 7:
            rendset = 1, rendstyle = RS_RVid;
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
            rendset = 0, rendstyle = RS_Bold;
            break;
      case 22: // normal intensity 
            rendset = 0, rendstyle = RS_Bold;
            break;
          case 23: // disable italic
            rendset = 0, rendstyle = RS_Italic;
            break;
          case 24:
            rendset = 0, rendstyle = RS_Uline;
            break;
          case 25:
            rendset = 0, rendstyle = RS_Blink;
            break;
          case 26: // variable spacing (iso 8613)
            rendset = 0, rendstyle = RS_Blink;
            break;
          case 27:
            rendset = 0, rendstyle = RS_RVid;
            break;
          //case 28: // visible. NYI
          //case 29: // not crossed-out
        }

      if (rendset != -1){
          scr_rendition (rendset, rendstyle);
          continue;		/* for (;i;) */
        }

      switch (arg[i]){
          case 30:
          case 31:		/* set fg color */
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          //FIXME
          //          scr_color ( (minCOLOR +  //scr_color ((unsigned int) (minCOLOR + (arg[i] - 30)), Color_fg);        (arg[i] - 30)), Color_fg);###  c_keyword c_cast
            break;
          case 38: // set fg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
                //FIXME scr_color ( (minCOLOR +  //scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_fg);        arg[i + 2]), Color_fg);###  c_keyword c_cast
                i += 2;
              }
            break;
          case 39:		/* default fg */
            scr_color (Color_fg, Color_fg);
            break;

          case 40:
          case 41:		/* set bg color */
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          //FIXME  scr_color ( (minCOLOR +  //scr_color ((unsigned int) (minCOLOR + (arg[i] - 40)), Color_bg);        (arg[i] - 40)), Color_bg);###  c_keyword c_cast
            break;
          case 48: // set bg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
                //FIXME scr_color ( (minCOLOR +  //scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_bg);        arg[i + 2]), Color_bg);###  c_keyword c_cast
                i += 2;
              }
            break;
          case 49:		/* default bg */
            scr_color (Color_bg, Color_bg);
            break;

          //case 50: // not variable spacing

#if !ENABLE_MINIMAL
          case 90:
          case 91:		/* set bright fg color */
          case 92:
          case 93:
          case 94:
          case 95:
          case 96:
          case 97:
                          //FIXME scr_color ( (minBrightCOLOR //scr_color ((unsigned int) (minBrightCOLOR + (arg[i] - 90)), Color_fg);        LOR + (arg[i] - 90)), Color_fg);###  c_keyword c_cast
            break;
          case 100:
          case 101:		/* set bright bg color */
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
                          //FIXME        scr_color ( (minBrightCOLOR //scr_color ((unsigned int) (minBrightCOLOR + (arg[i] - 100)), Color_bg);        LOR + (arg[i] - 100)), Color_bg);###  c_keyword c_cast
            break;
#endif
        }
    }
}
/*}}} */

/*{{{ (do not) process Rob Nation's own graphics mode sequences */
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::process_graphics () 
rxvt_term.process_graphics =function(){ 
                                       var ch, cmd = cmd_getc (); //          unicode_t ch, cmd = cmd_getc ();  ###  c_keyword inserted_var

  if (cmd == 'Q'){
      /* query graphics */
    tt_printf ("\033G0\012");	/* no graphics */ 
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
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::tt_printf (const char *fmt,...) 
rxvt_term.tt_printf =function( fmt){ 
    var arg_ptr; //  va_list arg_ptr;
  var buf = new Array(256); //char buf[256];        ###  c_keyword js_style_array

     va_start (arg_ptr, fmt);
//CMNT: c_keyword possible_pointer ^|         vsnprintf ((char *)buf, 256, fmt, arg_ptr); 
  vsnprintf ( buf, 256, fmt, arg_ptr);  //c_cast POINTER_MATH
  va_end (arg_ptr);
  tt_write (buf, strlen (buf));
}

/* ---------------------------------------------------------------------- */
/* Write data to the pty as typed by the user, pasted with the mouse,
 * or generated by us in response to a query ESC sequence. 
 */
//CMNT: c_keyword ^|       const unsigned int MAX_PTY_WRITE = 255; // minimum MAX_INPUT 
   MAX_PTY_WRITE = 255; // minimum MAX_INPUT

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::tt_write (const char *data, unsigned int len) 
rxvt_term.tt_write =function( data,   len){ 
  if (HOOK_INVOKE ((this, HOOK_TT_WRITE, DT_STR_LEN, data, len, DT_END)))
    return;

  if (pty.pty < 0)
    return;

  if (v_buflen == 0){
      //      ssize_t written = write (pty.pty, data, min (len, MAX_PTY_WRITE));
      var written = write (pty.pty, data, min (len, MAX_PTY_WRITE)); 

      if (written == len) //if ((unsigned int)written == len)        ###  c_keyword c_cast
        return;

      data += written;
      len  -= written;
    }

//CMNT: c_keyword possible_pointer ^|         v_buffer = (char *)realloc (v_buffer, v_buflen + len); 
  v_buffer =  realloc (v_buffer, v_buflen + len); //###c_cast

  memcpy (v_buffer + v_buflen, data, len);
  v_buflen += len;

  //  pty_ev.set (ev::READ | ev::WRITE);
}

//FIXED: js_style_functions c_keyword ^|       void rxvt_term::pty_write () 
rxvt_term.pty_write =function(){ 
//CMNT: js_style_variables ^|         int written = write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE)); 
 var written= write (pty.pty, v_buffer, min (v_buflen, MAX_PTY_WRITE)); 

  if (written > 0){
      v_buflen -= written;

      if (v_buflen == 0){
          free (v_buffer);
          v_buffer = 0;

          //          pty_ev.set (ev::READ);
          return;
        }

      memmove (v_buffer, v_buffer + written, v_buflen);
    }
  else if (written != -1 || (errno != EAGAIN && errno != EINTR))
      cmdbuf_ptr;
      //    pty_ev.set (ev::READ);
}

/*----------------------- end-of-file (C source) -----------------------*/
