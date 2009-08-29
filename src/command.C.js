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
//REMOVED:#if ISO_14755
//REMOVED:void  rxvt_term::iso14755_54 (int x, int y) 
//REMOVED:void rxvt_term::iso14755_51 (unicode_t ch, rend_t r, int x, int y) 
//REMOVED:rxvt_term::commit_iso14755 ()        function ()
//REMOVED:static int  hex_keyval (XKeyEvent &ev)
//REMOVED:static inline KeySym  translate_keypad (KeySym keysym, bool kp)
//REMOVED:static inline int  //  map_function_key (KeySym keysym)
//REMOVED:void rxvt_term::key_press (XKeyEvent &ev) 

//unsigned int rxvt_term::cmd_write (const char *str, unsigned int count)


 rxvt_term.prototype.cmd_write = function( str,  count){
         //FUNCTION_DEBUG("cmd_write");

     /*         
     var str_ptr=0;
     var n, s; //  unsigned int 
         
     n = this.cmdbuf_ptr - this.cmdbuf_base;
     s = this.cmdbuf_base + CBUFSIZ - 1 - this.cmdbuf_endp;

     if (n > 0 && s < count){
       memmove (this.cmdbuf_base, this.cmdbuf_ptr,
                (this.cmdbuf_endp - this.cmdbuf_ptr));
       this.cmdbuf_ptr = this.cmdbuf_base;
       this.cmdbuf_endp -= n;
       s += n;
     }

     if (count > s)    {
       //rxvt_warn ("data loss: cmd_write too large, continuing.\n");
       count = s;
       }
     for (; count--;)
       this.cmdbuf[this.cmdbuf_endp++] = str[str_ptr++];
     this.cmd_parse ();
     */
         //console.log(str);
         //str=str + chr(NOCHAR);
         //console.log(str);
         //console.log("cmd_write");
         if(this.cmdbuf_endp == this.cmdbuf_ptr){
             //console.log("resetting cmd_buf to the incoming string");
             this.cmdbuf=str;   
             this.cmdbuf_ptr=0;
             }
         else {
             //console.log("concatting cmdbuf ");
             this.cmdbuf= this.cmdbuf.concat(str);             
             //this.cmdbuf= this.cmdbuf.slice(0,this.cmdbuf.length-1).concat(str);
         }
     this.cmdbuf_endp=this.cmdbuf.length;

     this.cmd_parse ();



  return 0;
}




//void rxvt_term::flush ()
rxvt_term.prototype.minimum_buf_size=40;

rxvt_term.prototype.flush =function(){ 
  FUNCTION_DEBUG("flush");
  flush_ev.stop ();

#ifdef HAVE_BG_PIXMAP
  if (bgPixmap.check_clearChanged ()){
    //this.scr_clear (true); This needs to be researched further!
      this.scr_touch (false);
    }
#endif

  if (this.want_refresh){ //FIXME note will probable have to wait for the macro expansion to be able to figure out whats going on
      if (SHOULD_INVOKE (HOOK_LINE_UPDATE)){
          var row= view_start;   //int row = view_start; 
          var end_row= row + nrow;   //int end_row = row + nrow;
          while (row > top_row && ROW (row - 1).is_longer ())
            --row;
          do
            {
                var start_row= row;   //int start_row = row; 
                var  l ;  //line_t *l;  
              do

                {
                  l = ROW (row++);  //l = &ROW (row++);
                  if (!(l.f & LINE_FILTERED)){
                      // line not filtered, mark it as filtered
                      l.f |= LINE_FILTERED;
                      while (l.is_longer ()){
                        l = ROW (row++);  //l = &ROW (row++);
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

      this.scr_refresh();
      //lscrollBar.show (1);
#ifdef USE_XIM
      //IMSendSpot ();
#endif
    }

  display.flush (); //FIXME what is display again
}
/*
// checks wether a refresh is requested and starts the refresh timer 
//REWRITE:void rxvt_term::refresh_check () 
rxvt_term.prototype.refresh_check =function(){ 
FUNCTION_DEBUG("refresh_check");

  if (want_refresh && !flush_ev.is_active ())
    flush_ev.start (1. / 60.); // refresh at max. 60 Hz normally

  display->flush ();
}

//void rxvt_term::flush_cb (ev::timer &w, int revents) 
rxvt_term.prototype.flush_cb =function(ev::timer &w,  revents) 
FUNCTION_DEBUG("flush_cb");

  make_current ();

  refresh_count = 0;
  flush ();
}

#ifdef CURSOR_BLINK
//CMNTvoid rxvt_term::cursor_blink_cb (ev::timer &w, int revents) 
rxvt_term.prototype.cursor_blink_cb =function(ev::timer &w,  revents) 
FUNCTION_DEBUG("cursor");

  hidden_cursor = !hidden_cursor;
  want_refresh = 1;
  refresh_check ();
}
#endif

#ifdef TEXT_BLINK
//void rxvt_term::text_blink_cb (ev::timer &w, int revents) 
rxvt_term.prototype.text_blink_cb =function(ev::timer &w,  revents) 
FUNCTION_DEBUG("text");

  if (this.scr_refresh_rend (RS_Blink, RS_Blink)){
      hidden_text = !hidden_text;
      want_refresh = 1;
      refresh_check ();
    }
  else
    w.stop ();
}
#endif
                            */
//REMOVED:void rxvt_term::cont_scroll_cb (ev::timer &w, int revents) 
//REMOVED:void rxvt_term::sel_scroll_cb (ev::timer &w, int revents) 
//REMOVED:void rxvt_term::slip_wheel_cb (ev::timer &w, int revents) 
//REMOVED:static struct event_handler // related to the LINUX_YIELD_HACK

/*
// this is probably where I should enter text into the system
//REWRITE:bool rxvt_term::pty_fill () 
rxvt_term.prototype.pty_fill =function(){ 
    FUNCTION_DEBUG("pty");

    //ssize_t    
    n = cmdbuf_endp - cmdbuf_ptr;

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
  else{
      pty_ev.stop ();

      if (!this.option (Opt_hold))
        destroy ();
    }
    
  return false;
}

//void rxvt_term::pty_cb (ev::io &w, int revents) 
rxvt_term.prototype.pty_cb =function(w,  revents){ 
    FUNCTION_DEBUG("pty");

    
  make_current ();

  if (revents & ev::READ)
    // loop, but don't allow a single term to monopolize us
//CMNT: c_keyword ^|           for (int i = CBUFCNT; i-- && pty_fill (); ) 
    for (i = CBUFCNT; i-- && pty_fill (); )
      this.cmd_parse ();

  if (revents & ev::WRITE)
    pty_write ();

  refresh_check ();
}

  void rxvt_term::pointer_unblank (){ 
  XDefineCursor (dpy, vt, TermWin_cursor);
  recolour_cursor ();

#ifdef POINTER_BLANK
  hidden_pointer = 0; 

  if (this.option (Opt_pointerBlank)) 
    pointer_ev.start (pointerBlankDelay); 
#endif

}
*/
#ifdef POINTER_BLANK
//void rxvt_term::pointer_blank () 
rxvt_term.prototype.pointer_blank =function(){ 
    FUNCTION_DEBUG("pointer_blank");

    /*    if (!this.option (Opt_pointerBlank))   //FIXME
    return;

  XDefineCursor (dpy, vt, display.blank_cursor);
  XFlush (dpy);
    */
  this.hidden_pointer = 1; 
}

//void rxvt_term::pointer_cb (ev::timer &w, int revents) 
rxvt_term.prototype.pointer_cb =function(w,  revents){ 
    FUNCTION_DEBUG("pointer_cb");

  this.make_current ();

  this.pointer_blank (); 
}
#endif

//REMOVED:void rxvt_term::mouse_report (XButtonEvent &ev) 
//REMOVED:void rxvt_term::x_cb (XEvent &ev) 

#if ENABLE_FRILLS
//void rxvt_term::set_urgency (bool enable) 
rxvt_term.prototype.set_urgency =function(enable){ 
    FUNCTION_DEBUG("set_urgency");

         if (enable == this.urgency_hint) 
    return;

//if (XWMHints *h = XGetWMHints (dpy, parent[0])){ 
/*  if (XWMHs  h  = XGetWMHs (dpy, parent[0])){
    h->flags = h->flags & ~XUrgencyHint | (enable ? XUrgencyHint : 0); 
    XSetWMHints (dpy, parent[0], h); 
    urgency_hint = enable; 
    }
*/
}
#endif

//REMOVED:void rxvt_term::focus_in () 
//REMOVED:void rxvt_term::focus_out () 
//void rxvt_term::update_fade_color (unsigned int idx) 
rxvt_term.prototype.update_fade_color =function(idx){
//FUNCTION_DEBUG("update_fade_color");

//FIXME
#if OFF_FOCUS_FADING 
  if (rs[Rs_fade]){
      rgba c;
      this.pix_colors [this.Color_fade].get (c);
      this.pix_colors_focused [idx].fade (this, atoi (rs[Rs_fade]), pix_colors_unfocused [idx], c);
    }
#endif
}

//REMOVED:void rxvt_term::rootwin_cb (XEvent &ev) 
//REMOVED:void rxvt_term::button_press (XButtonEvent &ev) 
//REMOVED:void rxvt_term::button_release (XButtonEvent &ev) 

/*}}} */

//void rxvt_term::cmd_parse () 
rxvt_term.prototype.cmd_parse =function(){
    //FUNCTION_DEBUG("cmd_parse");

    var och= NOCHAR;  //wchar_t ch = NOCHAR;
    var seq_begin;   // char *seq_begin; // remember start of esc-sequence here 
    //VAR_DEBUG("!this.option (Opt_jumpScroll) ",!this.option (Opt_jumpScroll) )
    for (;;){ //outer_for_loop
#ifdef chr_debug_loop
    och = ord(this.next_char()); 
    if (och == NOCHAR){
        break;
    }
    CHR_VAR_DEBUG("och",och);
    if(och == 10 || och == 13){
        CHR_VAR_DEBUG("cmdbuf_ptr", this.cmdbuf_ptr);
    }
#endif     
#ifndef chr_debug_loop
        //FUNCTION_DEBUG("outer_for_loop")
        //FUNCTION_DEBUG(och)
        
        if (expect_false (och == NOCHAR)){
            FUNCTION_DEBUG("och == NOCHAR)){");
            seq_begin = this.cmdbuf_ptr; 
            och = ord(this_next_char()); 
            if (och == NOCHAR){
                FUNCTION_DEBUG("DOUBLE NOCHAR");
                break;
            }
        }

        if (expect_true (!IS_CONTROL (och) || och == C0_LF || och == C0_CR || och == C0_HT)){
            
            //FUNCTION_DEBUG("expect_true (!IS_CONTROL (ch) || ch == C0_LF || ch == C0_CR || ch == C0_HT))");
            if (expect_false (!this.seen_input)){
                //   FUNCTION_DEBUG("expect_false (!this.seen_input)){");
                this.seen_input = 1;}

            /* Read a text string from the input buffer */
            var buf = new Array(UBUFSIZ);  //wchar_t buf[UBUFSIZ];  
            var refreshnow = false;
            var nlines= 0; 
            var str = buf, str_i = 0; //wchar_t *str = buf;
            //var eol = str.length + mi_n (this.ncol, UBUFSIZ); //wchar_t *eol = str + min (ncol, UBUFSIZ);
            var eol = str_i + mi_n (this.ncol, UBUFSIZ); //wchar_t *eol = str + min (ncol, UBUFSIZ);
            for (;;){//inner_for_loop
                FUNCTION_DEBUG("inner_for_loop")
                //FUNCTION_DEBUG(och)

              if (expect_false (och == NOCHAR || (IS_CONTROL (och) && och != C0_LF && och != C0_CR && och != C0_HT))) { //IS_CONTROL
                  FUNCTION_DEBUG(" is_ctrl 2266")
                    break;}
              VAR_DEBUG("och",och);
              str[str_i++]=chr(och);  //str++ = ch; 
              if(str_i >= eol){FUNCTION_DEBUG("str >= eol");}
              //VAR_DEBUG("str.length", str_i);
              //VAR_DEBUG("eol", eol);
              if (expect_false (och == C0_LF || str_i >= eol)){
                    FUNCTION_DEBUG("Linefeed, eol")
                    if (och == C0_LF){
                      FUNCTION_DEBUG("LF nlines++");
                        nlines++;}
                    FUNCTION_DEBUG("refresh_count++;");
                    this.refresh_count++;
                    VAR_DEBUG("refresh_count",this.refresh_count);
                    VAR_DEBUG("this.nrow", this.nrow );

                    if ((!this.option (Opt_jumpScroll)) || this.refresh_count >= (this.nrow - 1)){
                        FUNCTION_DEBUG("Opt_jumscroll refresh_count");
                        this.refresh_count = 0;

                        if (!this.option (Opt_skipScroll) ){
                            FUNCTION_DEBUG("time_based");
                            refreshnow = true;
                            och = NOCHAR;
                            break;}//skipScroll

                    }//jumpScroll
                    // scr_add_lines only works for nlines <= nrow - 1.
                    if (nlines >= this.nrow - 1){
                        FUNCTION_DEBUG("nlines >= this.nrow - 1){")
                        if (!(SHOULD_INVOKE (HOOK_ADD_LINES)
                              && HOOK_INVOKE ((this, HOOK_ADD_LINES, DT_WCS_LEN, buf, str_i, DT_END)))) {
                        FUNCTION_DEBUG(" scr_add_lines (buf, str - buf, nlines);")
                            //FIXME pointermath  scr_add_lines (buf, str - buf, nlines);  
                            this.scr_add_lines (buf, str_i, nlines);}
                        FUNCTION_DEBUG("nlines = 0");
                        nlines = 0;
                        //str_i = buf_i;
                        str = buf; str_i=0;
                        eol = str_i + mi_n (this.ncol, UBUFSIZ);  // FIXME should_work
                        //VAR_DEBUG("eol",eol);
                    }
                    if (str_i >= eol){   // FIXME should_work
                        FUNCTION_DEBUG("str.length >= eol")
                        if (eol >=  UBUFSIZ){  // FIXME should_work
                            FUNCTION_DEBUG(" (eol >= buf.length + UBUFSIZ)");
                            och = NOCHAR;
                            break;}
                        else{
                            eol = mi_n (eol + this.ncol,  UBUFSIZ);
                        }
                    }//str.length
                }//expect_false
                seq_begin = this.cmdbuf_ptr;
                /*while(new Date() % 20 != 0) {
                    
                }*/
                och = ord(this_next_char()); 
                FUNCTION_DEBUG("innerend of inner_for_loop")
            }//for(;;) inner_for_loop
            //VAR_DEBUG("close_inner, str",str.join(""))
            FUNCTION_DEBUG("the inner_for_loop has closed ")
            if (!(SHOULD_INVOKE (HOOK_ADD_LINES)    && HOOK_INVOKE ((this, HOOK_ADD_LINES, DT_WCS_LEN, buf, str.length - buf.length, DT_END)))){
            FUNCTION_DEBUG("cmd_parse, HOOK_ADD_LINES");
                //FIXED pointermath  scr_add_lines (buf, str - buf, nlines);
                this.scr_add_lines (buf, str_i, nlines);  
            }   
            /* If there have been a lot of new lines, then update the screen 
             * What the heck we'll cheat and only refresh less than every page-full. 
             * if skipScroll is enabled.                   */
            //debugger;
            refreshnow=true;
            if (refreshnow){
                //FUNCTION_DEBUG("refreshnow");
                this.scr_refresh();
                this.want_refresh = 1;
            }
        } //IS_CONTROL
        else {
             
         try {
            FUNCTION_DEBUG("process_nonprinting from cmd_parse")
            
             this.process_nonprinting (och);
            VAR_DEBUG(" after_nonprinting this.screen.cur.col", this.screen.cur.col);
            FUNCTION_DEBUG("END process_nonprinting from cmd_parse")


         } catch ( e){  //FIXME exception
             // we ran ou of input, retry later
             if (e instanceof OutOfInputException){

                      this.cmdbuf_ptr = seq_begin;
                      //console.log("out of input", this.cmdbuf_ptr);
                      break;} 
             else{
                 throw e;}
         }

                och = NOCHAR;
        }//else
#endif
    }//for(;;) outer_for_loop
}//cmd_parse


    rxvt_term.prototype.cr_seen=false;

    rxvt_term.prototype.cr_seenB=false;
// read the next character 

//wchar_t rxvt_term::next_char () 

rxvt_term.prototype.next_char =function(){
    //FUNCTION_DEBUG("next_char")

  while (this.cmdbuf_ptr < this.cmdbuf_endp){
      var ret_char = this.cmdbuf[this.cmdbuf_ptr++];
      if(this.cr_seen){
          this.cr_seen=false;
          return chr(10);
      }
      if( ord(ret_char) == 10 ){
          this.cr_seen=true;
          //CHR_FUNCTION_DEBUG("setthing cr_seen to true");
          this.cmdbuf_ptr--;
          return chr(13);
      }

      /*
    if(this.cr_seen){
          this.cr_seen=false;
          CHR_FUNCTION_DEBUG("setthing cr_seen to false");
          if( ord(ret_char) == 10 ){
              
              //this.cr_seenB=false;
              CHR_FUNCTION_DEBUG("returning 13 instead of 10");
              this.cmdbuf_ptr--;
              return chr(13);}
      }
      if( ord(ret_char) == 13 ){
          this.cr_seen=true;
          CHR_FUNCTION_DEBUG("setthing cr_seen to true");
          return chr(13);
      }
*/
      /*
      if( ord(ret_char) == 13 ){
          if(!this.cr_seen){
              this.cr_seen=true;
              this.cmdbuf_ptr--
          }
          else{
              this.cr_seen=false;
          }
      }
      */
      //if(expect_true(ord(c_char) <= 0x7f && ord(c_char) != 0x1b)){
      //VAR_DEBUG("next_char return", ret_char);
      return ret_char;
      //return this.cmdbuf[this.cmdbuf_ptr++]; 
      //}
    }
  //FUNCTION_DEBUG("return NOCHAR");
  //VAR_DEBUG("next_char return", chr(NOCHAR));
  return chr(NOCHAR);
}

function OutOfInputException(value){
    this.value = value;
    this.message = "we ran out of input, hopefully there will be more to process soon";
    this.toString = function() {
        return this.value + this.message
    };

}
function ZipCodeFormatException(value) {
   this.value = value;
   this.message = "does not conform to the expected format for a zip code";
   this.toString = function() {
      return this.value + this.message
   };
}

// read the next octet
//uint32_t rxvt_term::next_octet () NOTHROW 
rxvt_term.prototype.next_octet =function() NOTHROW {
    //FUNCTION_DEBUG("next_octet");
    return this.cmdbuf_ptr < this.cmdbuf_endp
  ?  this.cmdbuf[this.cmdbuf_ptr++]  //? (unsigned char)*cmdbuf_ptr++ 
         : NOCHAR;
}

//static class out_of_input out_of_input; 
//they just created their own exception class with a null defintion
// class out_of_input out_of_input;

/* rxvt_cmd_getc () - Return next input character */ 
/*
 * Return the next input character after first passing any keyboard input 
 * to the command. 
 */
//wchar_t rxvt_term::cmd_getc () THROW ((class out_of_input))
  rxvt_term.prototype.cmd_getc =function() {
      //FUNCTION_DEBUG("cmd_getc");
      
    var c= this_next_char ();   //wchar_t c = next_char (); 
  return c;
}

//uint32_t rxvt_term::cmd_get8 () THROW ((class out_of_input)){
    rxvt_term.prototype.cmd_get8 = function () {
        FUNCTION_DEBUG("cmd_get8");
        
  var c = this.next_octet (); //uint32_t c = next_octet ();
  return c;
}

/*{{{ process non-printing single characters */ 
//void rxvt_term::process_nonprinting (unicode_t ch)
rxvt_term.prototype.process_nonprinting =function(ch){
    FUNCTION_DEBUG("process_nonprinting");
    
        if ( (  this.cmdbuf_endp - this.cmdbuf_ptr) < this.minimum_buf_size) {
            //    if ( (  foo.cmdbuf_endp - foo.cmdbuf_ptr) < foo.minimum_buf_size) {
            //this.cmdbuf_ptr--;
            throw new OutOfInputException();
        return;
    }
  switch (ch){
      case C0_ESC:
      CASE_DEBUG("case C0_ESC:")
        this.process_escape_seq ();
        break;
      case C0_ENQ:	/* terminal Status */
      CASE_DEBUG("case C0_ENQ:")
        if (rs[Rs_answerbackstring])
          this.tt_write (rs [Rs_answerbackstring], strlen (rs [Rs_answerbackstring]));
        else
          this.tt_write (VT100_ANS, strlen (VT100_ANS));
        break;
      case C0_BEL:	/* bell */
      CASE_DEBUG("case C0_BEL:")
        this.scr_bell ();
        break;
      case C0_BS:		/* backspace */
      CASE_DEBUG("case C0_BS:")
      //debusgger
        this.scr_backspace ();
      //console.log(this.screen.cur);
        break;
      case C0_HT:		/* tab */
      CASE_DEBUG("case C0_HT:")
        this.scr_tab (1);
        break;
      case C0_CR:		/* carriage return */
      CASE_DEBUG("case C0_CR:")
        this.scr_gotorc (0, 0, R_RELATIVE);
        break;
      case C0_VT:		/* vertical tab, form feed */
      CASE_DEBUG("case C0_VT:")
      case C0_FF:
      CASE_DEBUG("case C0_FF:")
      case C0_LF:		/* line feed */
      CASE_DEBUG("case C0_LF:")
        this.scr_index (UP);
        break;
      case C0_SO:		/* shift out - acs */
      CASE_DEBUG("case C0_SO:")
      this.scr_charset_choose (1); 
        break;
      case C0_SI:		/* shift in - acs */
      CASE_DEBUG("case C0_SI:")
      this.scr_charset_choose (0); 
        break;

      //#ifdef EIGHT_BIT_CONTROLS
      // 8-bit controls
      case 0x90: 	/* DCS */
      CASE_DEBUG("case 0x90:")
        this.process_dcs_seq ();
        break;
      case 0x9b: 	/* CSI */
      CASE_DEBUG("case 0x9b:")
        this.process_csi_seq ();
        break;
      case 0x9d: 	/* OSC */
      CASE_DEBUG("case 0x9d:")
        this.process_osc_seq ();
        break;
  default:
      //console.log(chr(ch));
      //#endif
    }
    FUNCTION_DEBUG("ENDOF process_nonprinting");
}
/*}}} */


/*{{{ process VT52 escape sequences */

//rxvt_term::process_escape_vt52 (unicode_t ch)
rxvt_term.prototype.process_escape_vt52 = function (ch){
    FUNCTION_DEBUG("process_escape_vt52");
    
  //console.log("vt52");
  var row, col; //int row, col;

  switch (ch){
      case 'A':		/* cursor up */
          CASE_DEBUG("case 'A':")
        this.scr_gotorc (-1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'B':		/* cursor down */
          CASE_DEBUG("case 'B':")
        this.scr_gotorc (1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'C':		/* cursor right */
          CASE_DEBUG("case 'C':")
        this.scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
        break;
      case 'D':		/* cursor left */
          CASE_DEBUG("case 'D':")
        this.scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
        break;
      case 'H':		/* cursor home */
          CASE_DEBUG("case 'H':")
        this.scr_gotorc (0, 0, 0);
        break;
      case 'I':		/* cursor up and scroll down if needed */
          CASE_DEBUG("case 'I':")
        this.scr_index (DN);
        break;
      case 'J':		/* erase to end of screen */
          CASE_DEBUG("case 'J':")
          //console.log("erase to end of screen");
        this.scr_erase_screen (0);
        break;
      case 'K':		/* erase to end of line */
          CASE_DEBUG("case 'K':")
          //console.log("erase to end of line");
        this.scr_erase_line (0);
        break;
      case 'Y':         	/* move to specified row and col */
          CASE_DEBUG("case 'Y':")
        /* full command is 'ESC Y row col' where row and col
         * are encoded by adding 32 and sending the ascii 
         * character.  eg. SPACE = 0, '+' = 13, '0' = 18, 
         * etc. */ 
          //console.log("Case Y");
          row = ord(this.cmd_getc()) - ord(' ');
          col = ord(this.cmd_getc()) - ord(' ');
        this.scr_gotorc (row, col, 0);
        break;
      case 'Z':		/* identify the terminal type */
          CASE_DEBUG("case 'Z':")
        this.tt_printf ("\033/Z");	/* I am a VT100 emulating a VT52 */ 
        break;
      case '<':		/* turn off VT52 mode */
          CASE_DEBUG("case '<':")
         this.set_privmode (PrivMode_vt52, 0);
        break;
  case 'F':     	/* use special graphics character set */ 
      CASE_DEBUG("case 'F':")
  case 'G':           /* use regular character set */ 
      CASE_DEBUG("case 'G':")
        /* unimplemented */
        break;
      case '=':     	/* use alternate keypad mode */
          CASE_DEBUG("case '=':")
      case '>':           /* use regular keypad mode */
          CASE_DEBUG("case '>':")
        /* unimplemented */
        break;
    }
}
/*}}} */


/*{{{ process escape sequences */
//void rxvt_term::process_escape_seq () 
rxvt_term.prototype.process_escape_seq =function(){
    FUNCTION_DEBUG("process_escape_seq");
    
  var ch= this.cmd_getc();  //unicode_t ch = cmd_getc ();

  if ( this.priv_modes & PrivMode_vt52){
      this.process_escape_vt52 (ch);
      return;
    }

  var och=ord(ch);
    FUNCTION_DEBUG(och);
  switch (och){
        /* case 1:        do_tek_mode (); break; */
  case 35: //'#':
      CASE_DEBUG("case '#':") // thats what it originally was, to compare with rxvt
        if (this.cmd_getc () == '8')
          this.scr_E ();
        break;
  case 40:// '(':
      CASE_DEBUG("case 40:// '(':")
      this.scr_charset_set (0,this.cmd_getc ()); 
        break;
  case 41:// ')':
      CASE_DEBUG("case 41:// ')':")
      this.scr_charset_set (1,this.cmd_getc ()); 
        break;
  case 42://'*': 
      CASE_DEBUG("case 42://'*':")
      this.scr_charset_set (2,this.cmd_getc ()); 
        break;
      case '+':
          CASE_DEBUG("case '+':")
      this.scr_charset_set (3,this.cmd_getc ()); 
        break;
#if !ENABLE_MINIMAL
  case 54: //'6':
      CASE_DEBUG("case '6':")
        this.scr_backindex ();
        break;
#endif
  case 55://'7':
        CASE_DEBUG("case '7':")
        this.scr_cursor (SAVE);
        break;
  case 56://'8':
      CASE_DEBUG("case '8':")
        this.scr_cursor (RESTORE);
        break;
#if !ENABLE_MINIMAL
  case 57://'9':
      CASE_DEBUG("case '9':")
        this.scr_forwardindex ();
        break;
#endif
  case 61://'=':
        CASE_DEBUG("case '=':")
  case 62://'>':
        CASE_DEBUG("case '>':")
         this.set_privmode (PrivMode_aplKP, ch == '=');
        break;

      case C1_40:
          CASE_DEBUG("case C1_40:")
        this.cmd_getc();
        break;
      case C1_44:
          CASE_DEBUG("case C1_44:")
        this.scr_index (UP);
        break;

        /* 8.3.87: NEXT LINE */
      case C1_NEL:		/* ESC E */
          CASE_DEBUG("case C1_NEL:")
        {
            var nlcr= [ chr(C0_LF), chr(C0_CR) ] ;   //wchar_t nlcr[] = { C0_LF, C0_CR };
            //this.scr_add_lines (nlcr, sizeof (nlcr) / sizeof (nlcr [0]), 1);
          this.scr_add_lines (nlcr, nlcr.length, 1);
        }
        break;

        /* kidnapped escape sequence: Should be 8.3.48 */
      case C1_ESA:		/* ESC G */
          CASE_DEBUG("case C1_ESA:")
        this.process_graphics ();
        break;

        /* 8.3.63: CHARACTER TABULATION SET */
      case C1_HTS:		/* ESC H */
          CASE_DEBUG("case C1_HTS:")
        this.scr_set_tab (1);
        break;

        /* 8.3.105: REVERSE LINE FEED */
      case C1_RI:			/* ESC M */
          CASE_DEBUG("case C1_RI:")
        this.scr_index (DN);
        break;

        /* 8.3.142: SINGLE-SHIFT TWO */
      /*case C1_SS2: this.scr_single_shift (2);   break; */
        CASE_DEBUG("case C1_SS2:")

        /* 8.3.143: SINGLE-SHIFT THREE */
      /*case C1_SS3: scr_single_shift (3);   break; */
            CASE_DEBUG("case C1_SS3:")

        /* 8.3.27: DEVICE CONTROL STRING */
      case C1_DCS:		/* ESC P */
        CASE_DEBUG("case C1_DCS:")
        this.process_dcs_seq ();
        break;

        /* 8.3.110: SINGLE CHARACTER INTRODUCER */
      case C1_SCI:		/* ESC Z */
          CASE_DEBUG("case C1_SCI:")
        this.tt_write (ESCZ_ANSWER, ESCZ_ANSWER.length);
        break;			/* steal obsolete ESC [ c */

        /* 8.3.16: CONTROL SEQUENCE INTRODUCER (CSI) */
      case C1_CSI:		/* ESC [ */
          CASE_DEBUG("case C1_CSI:")
        this.process_csi_seq ();
        break;

        /* 8.3.90: OPERATING SYSTEM COMMAND (OSC) */
      case C1_OSC:		/* ESC ] */
          CASE_DEBUG("case C1_OSC:")
        this.process_osc_seq ();
        break;

        /* 8.3.106: RESET TO INITIAL STATE (RIS) */
  case 99://'c':
      CASE_DEBUG("case 99://'c':")
    //mbstate.reset ();
        this.scr_poweron ();
        //scrollBar.show (1);
        break;

        /* 8.3.79: LOCKING-SHIFT TWO (see ISO2022) */
  case 110://'n':
      CASE_DEBUG("case 110://'n':")
      this.scr_charset_choose (2); 
        break;

        /* 8.3.81: LOCKING-SHIFT THREE (see ISO2022) */
  case 111://'o':
      CASE_DEBUG("case 111://'o':")
      this.scr_charset_choose (3); 
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
//#define get_byte_array_bit(array, bit)                \
//#    (!! ((array)[ (bit) / 8] & (128 >> ((bit) & 7))))

//const unsigned char csi_defaults[] = 
   csi_defaults = [    make_byte (1,1,1,1,1,1,1,1),	/* @, A, B, C, D, E, F, G, */
    make_byte (1,1,0,0,1,1,0,0),	/* H, I, J, K, L, M, N, O, */
    make_byte (1,0,1,1,1,1,1,0),	/* P, Q, R, S, T, U, V, W, */
    make_byte (1,1,1,0,0,0,1,0),	/* X, Y, Z, [, \, ], ^, _, */
    make_byte (1,1,1,0,1,1,1,0),	/* `, a, b, c, d, e, f, g, */
    make_byte (0,0,1,1,0,0,0,0),	/* h, i, j, k, l, m, n, o, */
    make_byte (0,0,0,0,0,0,0,0),	/* p, q, r, s, t, u, v, w, */
    make_byte (0,0,0,0,0,0,0,0)	/* x, y, z, {, |, }, ~,    */
                   ];
/* *INDENT-ON* */ 
function get_byte_array_bit(lst1, val){
    switch(val) {

    case      10 :
    case      11 :
    case      35 :
    case      39 :
    case      40 :
    case      44 :
    case      45 :
    case      50 :
    case      52 :
        return 0;
        break;

    case     1  :
    case     2  :
    case     3  :
    case     4  :
    case     8  :
    case     30  :
    case     38 :
        return 1;
        break;
    }
    return 1;
}
//void rxvt_term::process_csi_seq ()
rxvt_term.prototype.process_csi_seq =function(){
FUNCTION_DEBUG("process_csi_seq");
  //console.log("csi_seq");
  var ch, priv, i; //unicode_t ch, priv, i;  
  var och; //ord(ch)
  var nargs, p; //unsigned int nargs, p; 
  var n, ndef; //int n, ndef;  
  var arg = new Array(ESC_ARGS); //int arg[ESC_ARGS] = { }; 

  nargs = 0;

  priv = 0;
  ch = this.cmd_getc ();
  och = ord(ch);
  FUNCTION_DEBUG(och)
  if ((ch >= '<' && ch <= '?') || ch == '!'){
      /* '<' '=' '>' '?' '!' */
      FUNCTION_DEBUG("setting priv")
      priv = ch;
      ch = this.cmd_getc ();
      och = ord(ch);
    }
  //console.log(this.row_buf[0].t);

  /* read any numerical arguments */
  for (n = -1; och < CSI_ICH; ){
    
      if (isdigit (ch)){
          FUNCTION_DEBUG("isdigit csi")
          FUNCTION_DEBUG(och)
        if (n < 0){
          n = och - ord('0');}
        else{
          n = n * 10 + och - ord('0'); }
      }//isdigit
      else if (ch == ';'){
          if (nargs < ESC_ARGS)
            arg[nargs++] = n;
          n = -1;
        }
      else if (IS_CONTROL (och)){
          FUNCTION_DEBUG("process_nonprinting from process_csi_seq");
        this.process_nonprinting (och); 
      }
      ch = this.cmd_getc ();
      och = ord(ch);
    }
  if (och > CSI_7F){
      //console.log("och > CSI_7F)");
      FUNCTION_DEBUG("och > CSI_7F, RETURN")
    return;
  }
  if (nargs < ESC_ARGS)
    arg[nargs++] = n;

  i = och - CSI_ICH;
  //  ndef = get_byte_array_bit (csi_defaults, i);

  ndef = get_byte_array_bit (csi_defaults, i);
FUNCTION_DEBUG("get_byte_array_bit");
VAR_DEBUG(i,ndef);


  for (p = 0; p < nargs; p++){
    if (arg[p] == -1){
      arg[p] = ndef; } //this is a decent pick for a default
  }

  /*
   * private mode handling 
   */
  if (priv){
      switch (priv){
          case '>':
          CASE_DEBUG("case '>':")
            if (och == CSI_DA)	/* secondary device attributes */
              {
                // first parameter is normally 0 for vt100, 1 for vt220, 'R' for rxvt,
                // 'U' for rxvt-unicode != 7.[34] (where it was broken).
                //
                // second parameter is xterm patch level for xterm, MMmmpp (e.g. 20703) for rxvt
                // and Mm (e.g. 72 for 7.2) for urxvt <= 7.2, 94 for urxvt <= 8.3, and 95 for later
                // versions.
                //
                this.tt_printf ("\033[>%d;95;0c", 'U'); 
              }
            break;

          case '?':
          CASE_DEBUG("case '?':");
          VAR_DEBUG("ch", ord(ch));
            if (ch == 'h' || ch == 'l' || ch == 'r' || ch == 's' || ch == 't')
              this.process_terminal_mode (och, priv, nargs, arg);
            break;

          case '!':
          CASE_DEBUG("case '!':")
            if (och == CSI_70){
                /* DECSTR: soft terminal reset, used by our terminfo since 9.06 */
                this.scr_soft_reset ();

                var pm_h= [ 7, 25 ] ;   //static const int pm_h[] = { 7, 25 };  
                //static const int pm_l[] = { 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 };  
                var pm_l= [ 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 ] ;   

                //this.process_terminal_mode ('h', 0, sizeof (pm_h) / sizeof (pm_h[0]), pm_h);
                //this.process_terminal_mode ('l', 0, sizeof (pm_l) / sizeof (pm_l[0]), pm_l);
                this.process_terminal_mode ('h', 0, pm_h.length, pm_h);
                this.process_terminal_mode ('l', 0, pm_l.length, pm_l);
              }
          break;
        }
      FUNCTION_DEBUG("return from priv csi")
      return;
    }

  switch (och){
        /*
         * ISO/IEC 6429:1992 (E) CSI sequences (defaults in parentheses) 
         */

      case CSI_CUU:		/* 8.3.22: (1) CURSOR UP */
          CASE_DEBUG("case CSI_CUU:		/* 8.3.22:")
      case CSI_VPR:		/* 8.3.161: (1) LINE POSITION FORWARD */
          CASE_DEBUG("case CSI_VPR:		/* 8.3.161:")
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CUD:		/* 8.3.19: (1) CURSOR DOWN */
          CASE_DEBUG("case CSI_CUD:		/* 8.3.19:")
      case CSI_VPB:		/* 8.3.160: (1) LINE POSITION BACKWARD */
          CASE_DEBUG("case CSI_VPB:		/* 8.3.160:")
      VAR_DEBUG("process_csi_seq VPB, arg[0]", arg[0]);
        this.scr_gotorc (arg[0], 0, RELATIVE);
        break;

      case CSI_CUB:		/* 8.3.18: (1) CURSOR LEFT */
          CASE_DEBUG("case CSI_CUB:		/* 8.3.18:")
      case CSI_HPB: 		/* 8.3.59: (1) CHARACTER POSITION BACKWARD */
          CASE_DEBUG("case CSI_HPB: 		/* 8.3.59:")
#ifdef ISO6429
        arg[0] = -arg[0];
#else				/* emulate common DEC VTs */
        arg[0] = arg[0] ? -arg[0] : -1;
#endif
        /* FALLTHROUGH */
      case CSI_CUF:		/* 8.3.20: (1) CURSOR RIGHT */
        CASE_DEBUG("case CSI_CUF:		/* 8.3.20:")
      case CSI_HPR:		/* 8.3.60: (1) CHARACTER POSITION FORWARD */
        CASE_DEBUG("case CSI_HPR:		/* 8.3.60:")
#ifdef ISO6429
        this.scr_gotorc (0, arg[0], RELATIVE);
#else				/* emulate common DEC VTs */
        this.scr_gotorc (0, arg[0] ? arg[0] : 1, RELATIVE);
#endif
        break;

      case CSI_CPL:		/* 8.3.13: (1) CURSOR PRECEDING LINE */
          CASE_DEBUG("case CSI_CPL:		/* 8.3.13:")
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CNL:		/* 8.3.12: (1) CURSOR NEXT LINE */
          CASE_DEBUG("case CSI_CNL:		/* 8.3.12:")
        this.scr_gotorc (arg[0], 0, R_RELATIVE);
        break;

      case CSI_CHA:		/* 8.3.9: (1) CURSOR CHARACTER ABSOLUTE */
          CASE_DEBUG("case CSI_CHA:		/* 8.3.9:")
      case CSI_HPA:		/* 8.3.58: (1) CURSOR POSITION ABSOLUTE */
          CASE_DEBUG("case CSI_HPA:		/* 8.3.58:")
        this.scr_gotorc (0, arg[0] - 1, R_RELATIVE);
        break;

      case CSI_VPA:		/* 8.3.159: (1) LINE POSITION ABSOLUTE */
          CASE_DEBUG("case CSI_VPA:		/* 8.3.159:")
        this.scr_gotorc (arg[0] - 1, 0, C_RELATIVE);
        break;

      case CSI_CUP:		/* 8.3.21: (1,1) CURSOR POSITION */
          CASE_DEBUG("case CSI_CUP:		/* 8.3.21:")
          //debugger;
      case CSI_HVP:		/* 8.3.64: (1,1) CHARACTER AND LINE POSITION */
          CASE_DEBUG("case CSI_HVP:		/* 8.3.64:")
      //debugger

        this.scr_gotorc (arg[0] - 1, nargs < 2 ? 0 : (arg[1] - 1), 0);
        break;

      case CSI_CBT:		/* 8.3.7: (1) CURSOR BACKWARD TABULATION */
          CASE_DEBUG("case CSI_CBT:		/* 8.3.7:")
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_CHT:		/* 8.3.10: (1) CURSOR FORWARD TABULATION */
          CASE_DEBUG("case CSI_CHT:		/* 8.3.10:")
        this.scr_tab (arg[0]);
        break;

      case CSI_ED:		/* 8.3.40: (0) ERASE IN PAGE */
          CASE_DEBUG("case CSI_ED:		/* 8.3.40:")
        this.scr_erase_screen (arg[0]);
        break;

      case CSI_EL:		/* 8.3.42: (0) ERASE IN LINE */
          CASE_DEBUG("case CSI_EL:		/* 8.3.42:")
        this.scr_erase_line (arg[0]);
        break;

      case CSI_ICH:		/* 8.3.65: (1) INSERT CHARACTER */
          CASE_DEBUG("case CSI_ICH:		/* 8.3.65:")
      this.scr_insdel_chars (arg[0], INSERT); 
        break;

      case CSI_IL:		/* 8.3.68: (1) INSERT LINE */
          CASE_DEBUG("case CSI_IL:		/* 8.3.68:")
        this.scr_insdel_lines (arg[0], INSERT);
        break;

      case CSI_DL:		/* 8.3.33: (1) DELETE LINE */
          CASE_DEBUG("case CSI_DL:		/* 8.3.33:")
        this.scr_insdel_lines (arg[0], DELETE);
        break;

      case CSI_ECH:		/* 8.3.39: (1) ERASE CHARACTER */
          CASE_DEBUG("case CSI_ECH:		/* 8.3.39:")
      this.scr_insdel_chars (arg[0], ERASE); 
        break;

      case CSI_DCH:		/* 8.3.26: (1) DELETE CHARACTER */
          CASE_DEBUG("case CSI_DCH:		/* 8.3.26:")
      this.scr_insdel_chars (arg[0], DELETE); 
        break;

      case CSI_SD:		/* 8.3.114: (1) SCROLL DOWN */
          CASE_DEBUG("case CSI_SD:		/* 8.3.114:")
        arg[0] = -arg[0];
        /* FALLTHROUGH */
      case CSI_SU:		/* 8.3.148: (1) SCROLL UP */
          CASE_DEBUG("case CSI_SU:		/* 8.3.148:")
        this.scr_scroll_text (screen.tscroll, screen.bscroll, arg[0]);
        break;

      case CSI_DA:		/* 8.3.24: (0) DEVICE ATTRIBUTES */
          CASE_DEBUG("case CSI_DA:		/* 8.3.24:")
        this.tt_write (VT100_ANS,VT100_ANS.length);
        break;

      case CSI_SGR:		/* 8.3.118: (0) SELECT GRAPHIC RENDITION */
          CASE_DEBUG("case CSI_SGR:		/* 8.3.118:")
        this.process_sgr_mode (nargs, arg);
        break;

      case CSI_DSR:		/* 8.3.36: (0) DEVICE STATUS REPORT */
          CASE_DEBUG("case CSI_DSR:		/* 8.3.36:")
        switch (arg[0]){
            case 5:			/* DSR requested */
                CASE_DEBUG("case 5:")
              this.tt_printf ("\033[0n"); 
              break;
            case 6:			/* CPR requested */
                CASE_DEBUG("case 6:")
              this.scr_report_position ();
              break;
            case 7:			/* unofficial extension */
                CASE_DEBUG("case 7:")
              if (this.option (Opt_insecure))
                this.tt_printf ("%-.250s\012", rs[Rs_display_name]); 
              break;
            case 8:			/* unofficial extension */
                CASE_DEBUG("case 8:")
                // FIXME process_xterm_seq (XTerm_title, RESNAME "-" VERSION, CHAR_ST);
              break;
          }
        break;

      case CSI_TBC:		/* 8.3.155: (0) TABULATION CLEAR */
          CASE_DEBUG("case CSI_TBC:		/* 8.3.155:")
        switch (arg[0]){
        case 0:			/* char tab stop cleared at active position */ 
            CASE_DEBUG("case 0:")
              this.scr_set_tab (0);
              break;
              /* case 1: */		/* line tab stop cleared in active line */
              //CASE_DEBUG("case 1:")
              /* case 2: */		/* char tab stops cleared in active line */ 
              //  CASE_DEBUG("case 2:")
        case 3:			/* all char tab stops are cleared */ 
              CASE_DEBUG("case 3:")
              /* case 4: */		/* all line tab stops are cleared */
                  CASE_DEBUG("case 4:")
        case 5:			/* all tab stops are cleared */
              CASE_DEBUG("case 5:")
          this.scr_set_tab (-1);
              break;
          }
        break;

      case CSI_CTC:		/* 8.3.17: (0) CURSOR TABULATION CONTROL */
          CASE_DEBUG("case CSI_CTC:		/* 8.3.17:")
        switch (arg[0]){
        case 0:			/* char tab stop set at active position */ 
            CASE_DEBUG("case 0:")
              this.scr_set_tab (1);
              break;		/* = ESC H */
              /* case 1: */		/* line tab stop set at active line */
              CASE_DEBUG("case 1:")
        case 2:			/* char tab stop cleared at active position */ 
              CASE_DEBUG("case 2:")
              this.scr_set_tab (0);
              break;		/* = ESC [ 0 g */
              /* case 3: */		/* line tab stop cleared at active line */
              //CASE_DEBUG("case 3:")
              /* case 4: */		/* char tab stops cleared at active line */ 
              //  CASE_DEBUG("case 4:")
        case 5:			/* all char tab stops are cleared */ 
              CASE_DEBUG("case 5:")
              this.scr_set_tab (-1);
              break;		/* = ESC [ 3 g */
              /* case 6: */		/* all line tab stops are cleared */
              CASE_DEBUG("case 6:")
          }
        break;

      case CSI_RM:		/* 8.3.107: RESET MODE */
          CASE_DEBUG("case CSI_RM:		/* 8.3.107:")
        if (arg[0] == 4)
          this.scr_insert_mode (0);
        else if (arg[0] == 20)
           this.priv_modes &= ~PrivMode_LFNL;
        break;

      case CSI_SM:		/* 8.3.126: SET MODE */
          CASE_DEBUG("case CSI_SM:		/* 8.3.126:")
        if (arg[0] == 4)
          this.scr_insert_mode (1);
        else if (arg[0] == 20)
           this.priv_modes |= PrivMode_LFNL;
        break;

        /*
         * PRIVATE USE beyond this point.  All CSI_7? sequences here 
         */
      case CSI_72:		/* DECSTBM: set top and bottom margins */
          CASE_DEBUG("case CSI_72:		/* DECSTBM:")
        if (nargs == 1)
          this.scr_scroll_region (arg[0] - 1, MAX_ROWS - 1);
        else if (nargs == 0 || arg[0] >= arg[1])
          this.scr_scroll_region (0, MAX_ROWS - 1);
        else
          this.scr_scroll_region (arg[0] - 1, arg[1] - 1);
        break;

      case CSI_73:
          CASE_DEBUG("case CSI_73:")
        this.scr_cursor (SAVE);
        break;
      case CSI_75:
          CASE_DEBUG("case CSI_75:")
        this.scr_cursor (RESTORE);
        break;

      /* #if !ENABLE_MINIMAL */
      case CSI_74:
          CASE_DEBUG("case CSI_74:")
      this.process_window_ops (arg, nargs);
        break;
      /* #endif */

      case CSI_78:		/* DECREQTPARM */
          CASE_DEBUG("case CSI_78:")
        if (arg[0] == 0 || arg[0] == 1)
          this.tt_printf ("\033[%d;1;1;128;128;1;0x", arg[0] + 2); 
        break;

      default:
        break;
  }
//FUNCTION_DEBUG("END OF process_csi_seq");
VAR_DEBUG("END OF process_csi_seq screen.cur.row",this.screen.cur.row);
//ROW_IN_BUF_DEBUG("END OF process_csi_seq");
//ROW_BUF_DEBUG;
}
/*}}} */

//#if !ENABLE_MINIMAL
/* ARGSUSED */
//void rxvt_term::process_window_ops (const int *args, unsigned int nargs)
rxvt_term.prototype.process_window_ops =function( args,   nargs){
FUNCTION_DEBUG("process_window_ops");

  var x, y; //int x, y;  
  //XWindowAttributes wattr;  //Window wdummy;//dLocal (Display *, dpy); 

  if (nargs == 0)
    return;

  switch (args[0]){
      /*
       * commands 
       */
      case 1:			/* deiconify window */
          CASE_DEBUG("case 1:")
          //XMapWindow (dpy, parent[0]);
        break;
      case 2:			/* iconify window */
          CASE_DEBUG("case 2:")
          //XIconifyWindow (dpy, parent[0], display.screen);
        break;
      case 3:			/* set position (pixels) */
          CASE_DEBUG("case 3:")
          //XMoveWindow (dpy, parent[0], args[1], args[2]);
        break;
      case 4:			/* set size (pixels) */
          CASE_DEBUG("case 4:")
          //this.set_widthheight (args[2], args[1]);  //set_widthheight ((unsigned int)args[2], (unsigned int)args[1]);
        break;
      case 5:			/* raise window */
          CASE_DEBUG("case 5:")
          //XRaiseWindow (dpy, parent[0]);
        break;
      case 6:			/* lower window */
          CASE_DEBUG("case 6:")
          //XLowerWindow (dpy, parent[0]);
        break;
      case 7:			/* refresh window */
          CASE_DEBUG("case 7:")
          //this.scr_touch (true);
        break;
  case 8:			/* set size (chars) */ 
      CASE_DEBUG("case 8:")
      this.set_widthheight (args[2], args[1]); 
      FUNCTION_DEBUG("after set_widthheight case8")
      //this.scr_poweron();
        
        break;

      //case 9: NYI, TODO, restore maximized window or maximize window
      default:
          //if (args[0] >= 24)	/* set height (chars) */ 
            //set_widthheight ((unsigned int)width,
            //unsigned int) (args[1] * fheight));
        break;

      /*
       * reports - some output format copied from XTerm 
       */
      case 11:			/* report window state */
          CASE_DEBUG("case 11:")
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //this.tt_printf ("\033[%dt", wattr.map_state == IsViewable ? 1 : 2); 
        break;
      case 13:			/* report window position */
          CASE_DEBUG("case 13:")
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //XTranslateCoordinates (dpy, parent[0], wattr.root,
          //-wattr.border_width, -wattr.border_width,
          //&x, &y, &wdummy);
          //this.tt_printf ("\033[3;%d;%dt", x, y); 
        break;
      case 14:			/* report window size (pixels) */
          CASE_DEBUG("case 14:")
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //this.tt_printf ("\033[4;%d;%dt", wattr.height, wattr.width); 
        break;
  case 18:			/* report text area size (chars) */ 
      CASE_DEBUG("case 18:")
      //this.tt_printf ("\033[8;%d;%dt", nrow, ncol); 
        break;
  case 19:			/* report window size (chars) */ 
      CASE_DEBUG("case 19:")
      //this.tt_printf ("\033[9;%d;%dt", nrow, ncol); 
        break;
                         /* these won't be needed, there will be nothign to report this back to
        case 20:			// report icon label 
        {
          var s ; //                  char *s;
          XGetIconName (dpy, parent[0], &s);
          tt_printf ("\033]L%-.250s\234", this.option (Opt_insecure) && s ? s : "");	// 8bit ST 
          XFree (s);
        }
        break;
        case 21:			//report window title 
        {
          var s ; //                  char *s;  
          XFetchName (dpy, parent[0], &s);
          this.tt_printf ("\033]l%-.250s\234", this.option (Opt_insecure) && s ? s : "");	// 8bit ST 
          XFree (s);
        }
        break;
                         */
  }
}
//#endif

/*----------------------------------------------------------------------*/
/*
 * get input up until STRING TERMINATOR (or BEL) 
 * ends_how is terminator used. returned input must be free()'d 
 */
//char *rxvt_term::get_to_st (unicode_t &ends_how) 
rxvt_term.prototype.get_to_st =function(ends_how){
FUNCTION_DEBUG("get_to_st");

    console.log("get_to_st");
    var ch, och; //unicode_t ch; 
  var seen_esc = false; //bool seen_esc = false;
  var n = 0; //unsigned int n = 0;
  var string_ = new Array(STRING_MAX); //wchar_t string[STRING_MAX];

  while ((ch = this.cmd_getc ()) != NOCHAR){
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
        ch = this.cmd_get8 ();
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
//void rxvt_term::process_dcs_seq () 
rxvt_term.prototype.process_dcs_seq =function(){
FUNCTION_DEBUG("process_dcs_seq");

  console.log("dcs_seq");
  var s ; //char *s;  
  var eh; //unicode_t eh;  

  /*
   * Not handled yet 
   */
  s = this.get_to_st (eh);
//POINTER_MATH non_applicable
//  if (s)
//    free (s);

  return;
}

/*----------------------------------------------------------------------*/
/*
 * process OPERATING SYSTEM COMMAND sequence `ESC ] Ps ; Pt (ST|BEL)' 
 */
//void rxvt_term::process_osc_seq () 
rxvt_term.prototype.process_osc_seq =function(){
    FUNCTION_DEBUG("process_osc_seq");
    
  console.log("osc_seq");
  var ch, eh; //unicode_t ch, eh;
  var arg; //int arg;

  ch = this.cmd_getc ();
  for (arg = 0; isdigit (ch); ch = this.cmd_getc ())
      arg = arg * 10 + (ch - '0'); 

  if (ch == ';'){
    var s= this.get_to_st (eh);   //char *s = get_to_st (eh);

      if (s){
          this.process_xterm_seq (arg, s, eh);
          free (s);
        }
    }
}

//void rxvt_term::process_color_seq (int report, int color, const char *str, char resp) 
rxvt_term.prototype.process_color_seq =function(report,  color,    str,  resp){
    FUNCTION_DEBUG("process_color_seq");
    
  if (str[0] == '?' && !str[1]){
    var c;  //      rgba c;
      pix_colors_focused[color].get (c);

#if XFT
     if (c.a != rgba::MAX_CC)
        this.tt_printf ("\033]%d;rgba:%04x/%04x/%04x/%04x%c", report, c.a, c.r, c.g, c.b, resp); 
      else

#endif
        this.tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp); 
    }
  else
    set_window_color (color, str);
}

/*
 * XTerm escape sequences: ESC ] Ps;Pt (ST|BEL) 
 */
//void rxvt_term::process_xterm_seq (int op, const char *str, char resp) 
rxvt_term.prototype.process_xterm_seq =function(op,    str,  resp){
    FUNCTION_DEBUG("process_xterm_seq");
    
  var color; //int color; 
  var buf,  name, buf_i =0, name_i=0; //char *buf, *name;
  var query = str[0] == '?' && !str[1]; //bool query = str[0] == '?' && !str[1];
  var saveop= op;  //int saveop = op;

  //dLocal (Display *, dpy); 


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
            var actual_format; //int actual_format;
            var nitems;        //unsigned long nitems;
            var bytes_after;   //unsigned long bytes_after;
            var value = 0;     //unsigned char *value = 0; 
            var str = "";      //const char *str = "";

            if (prop
                && XGetWindowProperty (dpy, parent[0],
                                       prop, 0, 1<<16, 0, AnyPropertyType,
                                       &actual_type, &actual_format,
                                       &nitems, &bytes_after, &value) == Success
                && actual_type != None
                && actual_format == 8)
                //str = (const char *)(value); 
              str = ( ) (value);

            this.tt_printf ("\033]%d;%s%c", op, str, resp); 

            XFree (value);

          }
        else{
        //char *eq = strchr (str, '='); // constness lost, but verified to be ok 
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
        //for (buf = (char *)str; buf && *buf;)
        for (buf =  str; buf &&  buf;){  //POINTER_MATH ????
            if ((name = strchr (buf, ';')) == NULL)
              break;

            name[name_i++] = '\0';  //name++ = '\0';
            color = atoi (buf) + minCOLOR;

            if (!IN_RANGE_INC (color, minCOLOR, maxTermCOLOR))
              break;

            if ((buf = strchr (name, ';')) != NULL)
                buf[buf_i++] = '\0';  //buf++ = '\0';

            this.process_color_seq (op, color, name, resp);
          }
        break;
      case Rxvt_restoreFG:
      case XTerm_Color00:
        this.process_color_seq (op, Color_fg, str, resp);
        break;
      case Rxvt_restoreBG:
      case XTerm_Color01:
        this.process_color_seq (op, Color_bg, str, resp);
        break;
#ifndef NO_CURSORCOLOR
      case XTerm_Color_cursor:
        this.process_color_seq (op, Color_cursor, str, resp);
        break;
#endif
  case XTerm_Color_pointer_fg: 
        this.process_color_seq (op, Color_pointer_fg, str, resp); 
        break;
  case XTerm_Color_pointer_bg: 
      this.process_color_seq (op, Color_pointer_bg, str, resp); 
        break;
#ifndef NO_BOLD_UNDERLINE_REVERSE
      case XTerm_Color_RV:
        this.process_color_seq (op, Color_RV, str, resp);
        break;
      case Rxvt_Color_BD:
      case URxvt_Color_BD:
        this.process_color_seq (op, Color_BD, str, resp);
        break;
      case Rxvt_Color_UL:
      case URxvt_Color_UL:
        this.process_color_seq (op, Color_UL, str, resp);
        break;
      case URxvt_Color_IT:
        this.process_color_seq (op, Color_IT, str, resp);
        break;
#endif
      case URxvt_Color_border:
        this.process_color_seq (op, Color_border, str, resp);
        break;
#if ENABLE_TRANSPARENCY
  case URxvt_Color_tint: 
    this.process_color_seq (op, Color_tint, str, resp); 
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
          var str[256]; //char str[256];

          sprintf (str, "[%dx%d+%d+%d]",	/* can't presume snprintf () ! */ 
                     mi_n (bgPixmap.h_scale, 32767), mi_n (bgPixmap.v_scale, 32767),
                     mi_n (bgPixmap.h_align, 32767), mi_n (bgPixmap.v_align, 32767));
            this.process_xterm_seq (XTerm_title, str, CHAR_ST);
          }
        else{
          
          var changed= 0; //int changed = 0; 

            if (str != ';'){           //if (*str != ';') 
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
          var fd; //int fd; 
          if ((fd = open (str, O_RDWR | O_CREAT | O_EXCL, 0600)) >= 0){
              this.scr_dump (fd);
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
          this.tt_printf ("\33]%d;%-.250s%c", saveop, 
                     this.option (Opt_insecure) && fontset[op - URxvt_font]->fontdesc
                       ? fontset[op - URxvt_font]->fontdesc : "",
                     resp);
        else{
        //const char *&res = rs[Rs_font + (op - URxvt_font)]; 
            & res = rs[Rs_font + (op - URxvt_font)];  //FIXME wtf

            res = strdup (str);
            //allocated.push_back ((void *)res); 
            allocated.push_back (() res);
            set_fonts ();
          }
          */
        break;

      case URxvt_version:
        if (query)
          this.tt_printf ("\33]%d;rxvt-unicode;%-.20s;%c;%c%c", 
                     op,
                     rs[Rs_name], VERSION[0], VERSION[2],
                     resp);
        break;

#if !ENABLE_MINIMAL
      case URxvt_locale:
        if (query)
          this.tt_printf ("\33]%d;%-.250s%c", op, this.option (Opt_insecure) ? locale : "", resp); 
        else{
            set_locale (str);
            pty.set_utf8_mode (enc_utf8);
            this.init_xlocale ();
          }
        break;

      case URxvt_view_up:
      case URxvt_view_down:
        {
//CMNT: js_style_variables ^|                 int lines = atoi (str); 
 var lines= atoi (str); 

          if (lines)
            this.scr_page (op == URxvt_view_up ? UP : DN, lines);
          else
            this.scr_erase_savelines ();
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
//int rxvt_term::privcases (int mode, unsigned long bit)
rxvt_term.prototype.privcases =function(mode,   bit){
    FUNCTION_DEBUG("privcases");
    VAR_DEBUG("mode",mode);  
    VAR_DEBUG("bit",bit);  
  var state; //int state;  

  if (mode == 's'){
      FUNCTION_DEBUG("(mode == 's')");
      this.SavedModes |= ( this.priv_modes & bit);
      return -1;
    }
  else{
      FUNCTION_DEBUG("(mode != 's')");
      if (mode == 'r'){
        FUNCTION_DEBUG("(mode == 'r')");
        state = (this.SavedModes & bit) ? 1 : 0;	/* no overlapping */
      }
      else{
        FUNCTION_DEBUG("(mode != 's' or 'r')");
        //state = (mode == 't') ? ! ( this.priv_modes & bit) : mode;
        if(mode == 't') {
            FUNCTION_DEBUG("(mode == 't')");
            state = ! (priv_modes & bit);
        }
        else {
            FUNCTION_DEBUG("state=mode");
            state = mode;
        }
      }
      /*
      if (state="l"){
          state=0;
      }
      else if(state="h"){
          state=1;
      }
*/
      
       this.set_privmode (bit, state);
    }
    
    //There are issues with char to int casts, this is hacky
    VAR_DEBUG("END OF privcases state", state);
  return state;
}

/* we're not using priv _yet_ */
//void rxvt_term::process_terminal_mode (int mode, int priv UN USED, unsigned int nargs, const int *arg) 
rxvt_term.prototype.process_terminal_mode =function(mode,  __unused__,   nargs,    arg){
FUNCTION_DEBUG("process_terminal_mode");
VAR_DEBUG("mode",mode);
VAR_DEBUG("nargs", nargs);
VAR_DEBUG("priv_modes", this.priv_modes)
VAR_DEBUG("SavedModes", this.SavedModes)
//FUNCTION_DEBUG(arg);
var cmode=chr(mode);
    var i, j; //  unsigned int i, j; 
    var state; //  int state; 


    var argtopriv  = [
                  {argval: 1,    bit:   PrivMode_aplCUR },       // DECCKM
                  {argval: 2,    bit:   PrivMode_vt52 },
                  {argval: 3,    bit:   PrivMode_132 },          // DECCOLM
                  {argval: 4,    bit:   PrivMode_smoothScroll }, // DECSCLM
                  {argval: 5,    bit:   PrivMode_rVideo },       // DECSCNM
                  {argval: 6,    bit:   PrivMode_relOrigin },    // DECOM
                  {argval: 7,    bit:   PrivMode_Autowrap },     // DECAWM
                 //argval: 8,    bit:   auto-repeat keys         // DECARM
                  {argval: 9,    bit:   PrivMode_MouseX10 },
                 //argval: 18,   bit:   end FF to printer after print screen 
                 //argval: 19,   bit:   Print screen prints full screen/scorll region 
                  {argval: 25,   bit:   PrivMode_VisibleCursor }, // cnorm/cvvis/civis
#ifdef scrollBar_esc
{ argval:scrollBar_esc,          bit: PrivMode_scrollBar },
#endif
                  {argval: 35,   bit:   PrivMode_ShiftKeys },   // rxvt extension
                 //argval: 38,   bit:   tektronix mode          // DECTEK
                  {argval: 40,   bit:   PrivMode_132OK },
                 //argval: 41,   bit:   xterm more fixes NYI
                 //argval: 45,   bit:   margin bell NYI
                 //argval: 46,   bit:   start logging
                  {argval: 47,   bit:   PrivMode_Screen },
                  {argval: 66,   bit:   PrivMode_aplKP },       // DECPAM/DECPNM
#ifndef NO_BACKSPACE_KEY
                  {argval: 67,   bit:   PrivMode_BackSpace },   // DECBKM
#endif
                  {argval: 1000, bit:   PrivMode_MouseX11 },
                  {argval: 1002, bit:   PrivMode_MouseBtnEvent },
                  {argval: 1003, bit:   PrivMode_MouseAnyEvent },
                  {argval: 1010, bit:   PrivMode_TtyOutputInh }, // rxvt extension
                  {argval: 1011, bit:   PrivMode_Keypress }, // rxvt extension
                 //argval: 1035, bit:   enable modifiers for alt, numlock NYI
                 //argval: 1036, bit:   send ESC for meta keys NYI
                 //argval: 1037, bit:   send DEL for keypad delete NYI
                  {argval: 1047, bit:   PrivMode_Screen },
                 //argval: 1048, bit:   save and restore cursor
                  {argval: 1049, bit:   PrivMode_Screen }, /* xterm extension, clear screen on ti rather than te */
                 //argval: 1051, bit:   1052, 1060, 1061 keyboard emulation NYI
                  {argval: 2004, bit:   PrivMode_BracketPaste }
                      ];

  if (nargs == 0)
    return;

  /* make lo/hi boolean */
  if (cmode == 'l')
    mode = 0;		/* reset */
  else if (cmode == 'h')
    mode = 1;		/* set */
VAR_DEBUG("modelo", mode)
  for (i = 0; i < nargs; i++){
      state = -1;

      /* basic handling */
        //  for (j = 0; j < (sizeof (argtopriv)/sizeof (argtopriv[0])); j++)
      for (j = 0; j < argtopriv.length; j++)

        if (argtopriv[j].argval == arg[i]){
            state = this.privcases (mode, argtopriv[j].bit);
            VAR_DEBUG("argtopriv[j].bit",argtopriv[j].bit);
            break;
          }

      /* extra handling for values with state unkept  */
      VAR_DEBUG("ptm arg[i]", arg[i])
      switch (arg[i]){
#if ENABLE_STYLES
          case 1021:
              CASE_DEBUG("case 1021:")
              this.set_option (Opt_intensityStyles, mode); 
              this.scr_touch (true);
            break;
#endif
          case 1048:		/* alternative cursor save */
            CASE_DEBUG("case 1048:")
            if (this.option (Opt_secondaryScreen))
              if (mode == 0)
                this.scr_cursor (RESTORE);
              else if (mode == 1)
                this.scr_cursor (SAVE);
            break;
        }
      VAR_DEBUG("state",state)
      if (state >= 0)
        /* extra handling for values with valid 0 or 1 state */
        switch (arg[i]){
              /* case 1:	- application cursor keys */
            case 2:			/* VT52 mode */
            CASE_DEBUG("case 2:")
              /* oddball mode.  should be set regardless of set/reset
               * parameter.  Return from VT52 mode with an ESC < from 
               * within VT52 mode 
               */
               this.set_privmode (PrivMode_vt52, 1);
              break;
            case 3:			/* 80/132 */
                CASE_DEBUG("case 3:")
                    VAR_DEBUG("priv_modes", this.priv_modes)
              if ( this.priv_modes & PrivMode_132OK)
                  //this.set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight); 
                  this.set_widthheight ((state ? 132 : 80), 24); 
              break;
            case 4:			/* smooth scrolling */
                CASE_DEBUG("case 4:")
              this.set_option (Opt_jumpScroll, !state);
              break;
            case 5:			/* reverse video */
                CASE_DEBUG("case 5:")
              this.scr_rvideo_mode (state);
              break;
            case 6:			/* relative/absolute origins  */
                CASE_DEBUG("case 6:")
              this.scr_relative_origin (state);
              break;
            case 7:			/* autowrap */
                CASE_DEBUG("case 7:")
              this.scr_autowrap (state);
              break;
            /* case 8:	- auto repeat, can't do on a per window basis */
            case 9:			/* X10 mouse reporting */
              CASE_DEBUG("case 9:")
              if (state)		/* orthogonal */
                 this.priv_modes &= ~(PrivMode_MouseX11|PrivMode_MouseBtnEvent|PrivMode_MouseAnyEvent);
              break;
#ifdef scrollBar_esc
            case scrollBar_esc:
              CASE_DEBUG("case scrollBar_esc:")
              //maybe later
              /*              if (scrollBar.map (state)){
                  resize_all_windows (0, 0, 0);
                  this.scr_touch (true);
                }
              */
              break;
#endif
            case 25:		/* visible/invisible cursor */
              CASE_DEBUG("case 25:")
              this.scr_cursor_visible (state);
              break;
            /* case 35:	- shift keys */
              CASE_DEBUG("case 35:")
            /* case 40:	- 80 <--> 132 mode */
                  CASE_DEBUG("case 40:")
            case 47:		/* secondary screen */
              CASE_DEBUG("case 47:")
              this.scr_change_screen (state);
              break;
            /* case 66:	- application key pad */
            /* case 67:	- backspace key */
            case 1000:		/* X11 mouse reporting */
              CASE_DEBUG("case 1000:")
              if (state)		/* orthogonal */
                 this.priv_modes &= ~(PrivMode_MouseX10|PrivMode_MouseBtnEvent|PrivMode_MouseAnyEvent);
              break;
            case 1002:
                CASE_DEBUG("case 1002:")
            case 1003:
                CASE_DEBUG("case 1003:")
              if (state){
                   this.priv_modes &= ~(PrivMode_MouseX10|PrivMode_MouseX11);
                   this.priv_modes &= arg[i] == 1003 ? ~PrivMode_MouseBtnEvent : ~PrivMode_MouseAnyEvent;
                  vt_emask_mouse = PointerMotionMask; 
                }
              else
                vt_emask_mouse = NoEventMask;

              vt_select_input ();
              break;
            case 1010:		/* scroll to bottom on TTY output inhibit */
                CASE_DEBUG("case 1010:")
              this.set_option (Opt_scrollTtyOutput, !state);
              break;
            case 1011:		/* scroll to bottom on key press */
                CASE_DEBUG("case 1011:")
              this.set_option (Opt_scrollTtyKeypress, state);
              break;
            case 1047:		/* secondary screen w/ clearing last */
                CASE_DEBUG("case 1047:")
              if (option (Opt_secondaryScreen))
                if (!state)
                  this.scr_erase_screen (2);

              this.scr_change_screen (state);
              break;
            case 1049:		/* secondary screen w/ clearing first */
                CASE_DEBUG("case 1049:")
              if (option (Opt_secondaryScreen))
                if (state)
                  this.scr_cursor (SAVE);

              this.scr_change_screen (state);

              if (this.option (Opt_secondaryScreen))
                if (state)
                  this.scr_erase_screen (2);
                else
                  this.scr_cursor (RESTORE);
              break;
            default:
              break;
          }
    }
VAR_DEBUG("priv_modes", this.priv_modes)
VAR_DEBUG("SavedModes", this.SavedModes)

}
/*}}} */

/*{{{ process sgr sequences */
//void rxvt_term::process_sgr_mode (unsigned int nargs, const int *arg) 
rxvt_term.prototype.process_sgr_mode =function(nargs,    arg){
    FUNCTION_DEBUG("process_sgr_mode");
    

  var i; //unsigned int i; 
  var rendset; //short rendset; 
  var rendstyle; //int rendstyle;

  if (nargs == 0){
      this.scr_rendition (0, ~RS_None);
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
          this.scr_rendition (rendset, rendstyle);
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
          CASE_DEBUG("sgr case 37");
          //FIXME
          ///this.scr_color ( (minCOLOR +  //this.scr_color ((unsigned int) (minCOLOR + (arg[i] - 30)), Color_fg);(arg[i] - 30)), Color_fg);
            this.scr_color(minCOLOR + (arg[i] - 30), Color_fg);
            break;
          case 38: // set fg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
                //FIXME this.scr_color ( (minCOLOR +  //this.scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_fg);arg[i + 2]), Color_fg);
                i += 2;
              }
            break;
          case 39:		/* default fg */
          CASE_DEBUG("sgr case 39");
            this.scr_color (Color_fg, Color_fg);
            break;

          case 40:
          case 41:		/* set bg color */
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          CASE_DEBUG("sgr case 47");
           this.scr_color ( (minCOLOR +  (arg[i] - 40)), Color_bg); //scr_color ((unsigned int) (minCOLOR + (arg[i] - 40)), Color_bg);
            break;
          case 48: // set bg color, ISO 8613-6
          CASE_DEBUG("sgr case 48");
            if (nargs > i + 2 && arg[i + 1] == 5){
 //scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_bg); 
                 this.scr_color ( (minCOLOR +  arg[i + 2]), Color_bg);

                i += 2;
              }
            break;
          case 49:		/* default bg */
          CASE_DEBUG("sgr case 49");
            this.scr_color (Color_bg, Color_bg);
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
          CASE_DEBUG("sgr case 97");
//scr_color ((unsigned int) (minBrightCOLOR + (arg[i] - 90)), Color_fg); 
          //                FIXME 
          this.scr_color ( (minBrightCOLOR   + (arg[i] - 90)), Color_fg);
            break;
          case 100:
          case 101:		/* set bright bg color */
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          CASE_DEBUG("sgr case 107");
//this.scr_color ((unsigned int) (minBrightCOLOR + (arg[i] - 100)), Color_bg);    COLOR?
          this.scr_color ( (minBrightCOLOR + (arg[i] - 100)), Color_bg);
            break;
#endif
        }
    }
}
/*}}} */

/*{{{ (do not) process Rob Nation's own graphics mode sequences */
//void rxvt_term::process_graphics () 
rxvt_term.prototype.process_graphics =function(){
FUNCTION_DEBUG("process_graphics");

  //FIXME causes an infintie loop  
/*
  var ch, cmd = this.cmd_getc (); //unicode_t ch, cmd = cmd_getc (); 

  if (cmd == 'Q'){
      // query graphics 
    this.tt_printf ("\033G0\012");	// no graphics 
      return;
    }
// swallow other graphics sequences until terminating ':' 
  do
    ch = this.cmd_getc ();
  while (ch != ':');
*/
}
/*}}} */

/* ------------------------------------------------------------------------- */

/*
 * Send printf () formatted output to the command. 
 * Only use for small amounts of data. 
 */
//void rxvt_term::tt_printf (const char *fmt,...) 
rxvt_term.prototype.tt_printf =function( fmt){
FUNCTION_DEBUG("tt_printf");


  console.log(fmt);
}
    rxvt_term.prototype.tt_winch =function( ){
        //FUNCTION_DEBUG("tt_winch");
    
      //console.log("tt_winch called, it does nothing ");
    }
/* ---------------------------------------------------------------------- */
/* Write data to the pty as typed by the user, pasted with the mouse,
 * or generated by us in response to a query ESC sequence. 
 */
//const unsigned int MAX_PTY_WRITE = 255; // minimum MAX_INPUT 
   MAX_PTY_WRITE = 255; // minimum MAX_INPUT

//void rxvt_term::tt_write (const char *data, unsigned int len) 
rxvt_term.prototype.tt_write =function( data,   len){
FUNCTION_DEBUG("tt_write");

    if(    console){
        console.log(data);
    }
    /*
  if (HOOK_INVOKE ((this, HOOK_TT_WRITE, DT_STR_LEN, data, len, DT_END)))
    return;

  if (pty.pty < 0)
    return;

  if (v_buflen == 0){
      //ssize_t written = write (pty.pty, data, min (len, MAX_PTY_WRITE));
      var written = write (pty.pty, data, mi_n (len, MAX_PTY_WRITE)); 

      if (written == len) //if ((unsigned int)written == len)
        return;

      data += written;
      len  -= written;
    }

//v_buffer = (char *)realloc (v_buffer, v_buflen + len); 
  v_buffer =  realloc (v_buffer, v_buflen + len); 

  memcpy (v_buffer + v_buflen, data, len);
  v_buflen += len;

  //  pty_ev.set (ev::READ | ev::WRITE);
  */
}

//void rxvt_term::pty_write () 
rxvt_term.prototype.pty_write =function(){
FUNCTION_DEBUG("pty_write");

//int written = write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE)); 
 var written= write (pty.pty, v_buffer, mi_n (v_buflen, MAX_PTY_WRITE)); 

  if (written > 0){
      v_buflen -= written;

      if (v_buflen == 0){
          free (v_buffer);
          v_buffer = 0;

          //pty_ev.set (ev::READ);
          return;
        }

      memmove (v_buffer, v_buffer + written, v_buflen);
    }
  else if (written != -1 || (errno != EAGAIN && errno != EINTR))
      this.cmdbuf_ptr;
      //    pty_ev.set (ev::READ);
}

/*----------------------- end-of-file (C source) -----------------------*/
