
      //     # 966 "command.C"
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::flush (){
rxvt_term.flush =function(){
  flush_ev.stop ();
      //     # 979 "command.C"
  if (want_refresh){
      if (false){
//CMNT: js_style_variables ^|                 int row = view_start;
 var row= view_start;
//CMNT: js_style_variables ^|                 int end_row = row + nrow;
 var end_row= row + nrow;

//CMNT: c_keyword ^|                 while (row > top_row && (this)->row_buf [(((((this))->term_start + int(row - 1)) + (((this))->total_rows)) % (((this))->total_rows))].is_longer ())
          while (row > top_row && (this)->row_buf [(((((this))->term_start + (row - 1)) + (((this))->total_rows)) % (((this))->total_rows))].is_longer ())
            --row;

          do
            {
//CMNT: js_style_variables ^|                     int start_row = row;
 var start_row= row;
//CMNT: possible_pointer ^|                     line_t *l;
              line_t  l ;

              do
                {
//CMNT: c_keyword ^|                         l = &(this)->row_buf [(((((this))->term_start + int(row++)) + (((this))->total_rows)) % (((this))->total_rows))];
                  l = &(this)->row_buf [(((((this))->term_start + (row++)) + (((this))->total_rows)) % (((this))->total_rows))];

                  if (!(l->f & 0x0002 /* line has been filtered*/)){
                      // line not filtered, mark it as filtered
                      l->f |= 0x0002 /* line has been filtered*/;
                      while (l->is_longer ()){
//CMNT: c_keyword ^|                                 l = &(this)->row_buf [(((((this))->term_start + int(row++)) + (((this))->total_rows)) % (((this))->total_rows))];
                          l = &(this)->row_buf [(((((this))->term_start + (row++)) + (((this))->total_rows)) % (((this))->total_rows))];
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::refresh_check (){
rxvt_term.refresh_check =function(){
  if (want_refresh && !flush_ev.is_active ())
    flush_ev.start (1. / 60.); // refresh at max. 60 Hz normally

  display->flush ();
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::flush_cb (ev::timer &w, int revents){
rxvt_term.flush_cb =function(ev::timer &w,  revents){
  make_current ();

  refresh_count = 0;
  flush ();
}
      //     # 1059 "command.C"
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::text_blink_cb (ev::timer &w, int revents){
rxvt_term.text_blink_cb =function(ev::timer &w,  revents){
  if (scr_refresh_rend (0x00010000UL /* blink*/, 0x00010000UL /* blink*/)){
      hidden_text = !hidden_text;
      want_refresh = 1;
      refresh_check ();
    }
  else
    w.stop ();
}
      //     # 1149 "command.C"
//CMNT: js_style_functions ^|       bool rxvt_term::pty_fill (){
boolrxvt_term.pty_fill =function(){
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
//CMNT: possible_pointer ^|         else if (r < 0 && ((*__error()) == 35 /* Resource temporarily unavailable */ || (*__error()) == 4 /* Interrupted system call */)){
  else if (r < 0 && (( _ _error()) == 35 /* Resource temporarily unavailable */ || ( _ _error()) == 4 /* Interrupted system call */)){
    }
  else{
      pty_ev.stop ();
      if (!option (Opt_hold))
        destroy ();
    }
  return false;
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::pty_cb (ev::io &w, int revents){
rxvt_term.pty_cb =function(ev::io &w,  revents){
  make_current ();

  if (revents & ev::READ)
    // loop, but don't allow a single term to monopolize us
//CMNT: c_keyword ^|           for (int i = 8 /* never call pty_fill/cmd_parse more than this often in a row*/; i-- && pty_fill (); )
    for ( var i = 8 /* never call pty_fill/cmd_parse more than this often in a row*/; i-- && pty_fill (); )
      cmd_parse ();
  if (revents & ev::WRITE)
    pty_write ();
  refresh_check ();
}
    
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::pointer_unblank (){
rxvt_term.poer_unblank =function(){
  XDefineCursor (dpy, vt, TermWin_cursor);
  recolour_cursor ();
}
      //     # 1241 "command.C"
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::mouse_report (XButtonEvent &ev){
rxvt_term.mouse_report =function(XButtonEvent &ev){
//CMNT: c_keyword ^|         int button_number, key_state = 0;
   button_number, key_state = 0;
//CMNT: c_keyword ^|         int x, y;
   x, y;
//CMNT: js_style_variables ^|         int code = 32;
 var code= 32;

//CMNT: c_keyword ^|         x = ((int32_t)((int32_t)(ev.x)) / (int32_t)fwidth);
  x = ((32_t)((32_t)(ev.x)) / (32_t)fwidth);
//CMNT: c_keyword ^|         y = ((int32_t)((int32_t)(ev.y)) / (int32_t)fheight);
  y = ((32_t)((32_t)(ev.y)) / (32_t)fheight);
  if (ev.type == 6){
      if (x == mouse_row && y == mouse_col)
        return;
      mouse_row = x;
      mouse_col = y;
      code += 32;
    }

  if (MEvent.button == 0L /* special Button Code, passed to GrabButton */)
    button_number = 3;
  else{
      button_number = MEvent.button - 1;
      /* add 0x3D for wheel events, like xterm does */
      if (button_number >= 3)
        button_number += (64 - 3);
    }

  if (priv_modes & (1UL<<12)){
      /*
//CMNT: possible_pointer ^|              * do not report ButtonRelease
          do not report ButtonRelease
//CMNT: possible_pointer ^|              * no state info allowed
          no state info allowed
       */
      key_state = 0;
      if (button_number == 3)
        return;
    }
  else{
      /* XTerm mouse reporting needs these values:
//CMNT: possible_pointer ^|              *   4 = Shift
            4 = Shift
//CMNT: possible_pointer ^|              *   8 = Meta
            8 = Meta
//CMNT: possible_pointer ^|              *  16 = Control
           16 = Control
//CMNT: possible_pointer ^|              * plus will add in our own Double-Click reporting
          plus will add in our own Double-Click reporting
//CMNT: possible_pointer ^|              *  32 = Double Click
           32 = Double Click
       */
      key_state = ((MEvent.state & (1<<0)) ? 4 : 0)
                  + ((MEvent.state & ModMetaMask) ? 8 : 0)
                  + ((MEvent.state & (1<<2)) ? 16 : 0);



    }
      //     # 1312 "command.C"
//CMNT: c_keyword ^|         tt_printf ("\033[M%c%c%c",
  tt_prf ("\033[M%c%c%c",
            (code + button_number + key_state),
            (32 + x + 1),
            (32 + y + 1));
}

/*{{{ process an X event */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::x_cb (XEvent &ev){
rxvt_term.x_cb =function(XEvent &ev){
  make_current ();

//CMNT: c_keyword possible_pointer ^|         Display * const dpy = this->dpy;
     dpy = this.dpy;

  if (ev.xany.window == vt
      && false
      && false)
    return;

//CMNT: c_keyword ^|         // for XQueryPointer
  // for XQueryPoer
  Window unused_root, unused_child;
//CMNT: c_keyword ^|         int unused_root_x, unused_root_y;
   unused_root_x, unused_root_y;
//CMNT: c_keyword ^|         unsigned int unused_mask;
    var unused_mask;

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
      //     # 1384 "command.C"
          }
        break;

        /*
//CMNT: possible_pointer ^|                * XXX: this is not the _current_ arrangement
            XXX: this is not the _current_ arrangement
//CMNT: possible_pointer ^|                * Here's my conclusion:
            Here's my conclusion:
//CMNT: possible_pointer ^|                * If the window is completely unobscured, use bitblt's
            If the window is completely unobscured, use bitblt's
//CMNT: possible_pointer ^|                * to scroll. Even then, they're only used when doing partial
            to scroll. Even then, they're only used when doing partial
//CMNT: possible_pointer ^|                * screen scrolling. When partially obscured, we have to fill
            screen scrolling. When partially obscured, we have to fill
//CMNT: possible_pointer ^|                * in the GraphicsExpose parts, which means that after each refresh,
            in the GraphicsExpose parts, which means that after each refresh,
//CMNT: possible_pointer ^|                * we need to wait for the graphics expose or Noexpose events,
            we need to wait for the graphics expose or Noexpose events,
//CMNT: possible_pointer ^|                * which ought to make things real slow!
            which ought to make things real slow!
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
//CMNT: c_keyword ^|               /*fprintf (stderr, "ConfigureNotify for %X, parent is %X, geom is %dx%d%+d%+d, old geom was %dx%d\n",
        /*fprf (stderr, "ConfigureNotify for %X, parent is %X, geom is %dx%d%+d%+d, old geom was %dx%d\n",
              ev.xconfigure.window, parent[0], ev.xconfigure.width, ev.xconfigure.height, ev.xconfigure.x, ev.xconfigure.y,
//CMNT: c_keyword ^|                     szHint.width, szHint.height);*/
              szH.width, szH.height);*/
        if (ev.xconfigure.window == parent[0]){
            while (XCheckTypedWindowEvent (dpy, ev.xconfigure.window, 22, &ev))
              ;

//CMNT: c_keyword ^|                   if (szHint.width != ev.xconfigure.width || szHint.height != ev.xconfigure.height){
            if (szH.width != ev.xconfigure.width || szH.height != ev.xconfigure.height){
                seen_resize = 1;
                resize_all_windows (ev.xconfigure.width, ev.xconfigure.height, 1);
              }
            else{
      //     # 1451 "command.C"
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
      //     # 1495 "command.C"
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
        else{
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


                XQueryPointer (dpy, vt, //                       XQueryPointer (dpy, vt,
                               &unused_root, &unused_child,  //FIXME
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
      //     # 1636 "command.C"
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
      //     # 1686 "command.C"
  refresh_check ();
}
      //     # 1705 "command.C"
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::focus_in (){
rxvt_term.focus_in =function(){
  if (!focus){
      focus = 1;
      want_refresh = 1;
      //     # 1736 "command.C"
      false;
    }
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::focus_out (){
rxvt_term.focus_out =function(){
  if (focus){
      focus = 0;
      want_refresh = 1;
      if (iso14755buf){
          iso14755buf = 0;
          scr_overlay_off ();
        }
      //     # 1779 "command.C"
      false;
    }
}

 // read the next character

//CMNT: js_style_functions c_keyword ^|       wchar_t rxvt_term::next_char (){
rxvt_term.next_ =function(){
  while (cmdbuf_ptr < cmdbuf_endp){
      // assume 7-bit to be ascii ALWAYS
//CMNT: c_keyword possible_pointer ^|             if (__builtin_expect ((((unsigned char)*cmdbuf_ptr <= 0x7f && *cmdbuf_ptr != 0x1b) != 0),(1)))
      if (__builtin_expect (((( ) c mdbuf_ptr <= 0x7f &&  c mdbuf_ptr != 0x1b) != 0),(1)))
//CMNT: possible_pointer ^|               return *cmdbuf_ptr++;
        return  c mdbuf_ptr++;

//CMNT: c_keyword ^|             wchar_t wc;
       wc;
      size_t len = mbrtowc (&wc, cmdbuf_ptr, cmdbuf_endp - cmdbuf_ptr, mbstate);

      if (len == (size_t)-2){
          // the mbstate stores incomplete sequences. didn't know this :/
          cmdbuf_ptr = cmdbuf_endp;
          break;
        }

      if (len == (size_t)-1){
          mbrtowc (0, 0, 0, mbstate); // reset now undefined conversion state
//CMNT: c_keyword possible_pointer ^|                 return (unsigned char)*cmdbuf_ptr++; // the _occasional_ latin1 character is allowed to slip through
          return ( ) c mdbuf_ptr++; // the _occasional_ latin1 acter is allowed to slip through
        }

//CMNT: c_keyword ^|             // assume wchar == unicode
      // assume w == unicode
      cmdbuf_ptr += len;
      return wc & 0x1fffffUL;
    }

  return NOCHAR;
}

// read the next octet

//CMNT: js_style_functions ^|       uint32_t    rxvt_term::next_octet (){
rxvt_term.next_octet =function(){
  return cmdbuf_ptr < cmdbuf_endp
//CMNT: c_keyword possible_pointer ^|                ? (unsigned char)*cmdbuf_ptr++
         ? ( ) c mdbuf_ptr++
         : NOCHAR;
}

//CMNT: c_keyword ^|       static class out_of_input out_of_input;
 class out_of_input out_of_input;

//CMNT: c_keyword ^|       /* rxvt_cmd_getc () - Return next input character */
/* rxvt_cmd_getc () - Return next input acter */
/*
 * Return the next input character after first passing any keyboard input
 * to the command.
    to the command.
 */
//CMNT: js_style_functions c_keyword ^|       wchar_t rxvt_term::cmd_getc (){
rxvt_term.cmd_getc =function(){

 var c= next_char (); //        wchar_t c = next_char ();

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}


//       uint32_t rxvt_term::cmd_get8 (){

rxvt_term.cmd_get8 = function() {


  var c = next_octet (); //         uint32_t c = next_octet ();

  if (c == NOCHAR)
    throw out_of_input;

  return c;
}


/*{{{ print pipe */
/*----------------------------------------------------------------------*/

//CMNT: js_style_functions c_keyword ^|  FILE *     rxvt_term::popen_printer (){
rxvt_term.popen_prer =function(){

  var stream = popen (rs[Rs_pr_pipe] ? rs[Rs_pr_pipe] : "lpr", "w"); //         FILE *stream = popen (rs[Rs_print_pipe] ? rs[Rs_print_pipe] : "lpr", "w");

  if (stream == __null)
      rxvt_warn ("can't open printer pipe, not printing.\n");

  return stream;
}

//CMNT: js_style_functions c_keyword possible_pointer ^|       int rxvt_term::pclose_printer (FILE *stream){
rxvt_term.pclose_prer =function(  stream){
  fflush (stream);
  return pclose (stream);
}

/*
 * simulate attached vt100 printer
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_print_pipe (){
rxvt_term.process_print_pipe =function(){

  var fd = popen_prer (); //         FILE *fd = popen_printer ();

  if (!fd)
    return;

  /*
      Send all input to the prer until either ESC[4i or ESC[?4i
      is received.
   */

  for ( var done = 0; !done; ){ // for (int done = 0; !done; ){

        var buf[8]; //            unsigned char buf[8];

      var ch; //unicode_t ch;
        var i, len; //           unsigned int i, len;

      if ((ch = cmd_getc ()) != C0_ESC){
          if (putc (ch, fd) == (-1))
            break; /* done = 1 */
        }
      else{
          len = 0;
          buf[len++] = ch;
          var  quest="?";
          if ((buf[len++] = cmd_getc ()) == '['){ //]
              if(ch= cmd_getc()){

              }

/*              if ((ch = cmd_getc()) == '?'){
                  buf[len++] = '?';
                  ch = cmd_getc();
                }
*/              if ((buf[len++] = ch) == '4'){
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


  pclose_prer (fd); //pclose_printer (fd);
}

/*}}} */

/* *INDENT-OFF* */
var enum1 = {
  C1_40 = 0x40,
          C1_41 , C1_BPH, C1_NBH, C1_44 , C1_NEL, C1_SSA, C1_ESA,
  C1_HTS, C1_HTJ, C1_VTS, C1_PLD, C1_PLU, C1_RI , C1_SS2, C1_SS3,
  C1_DCS, C1_PU1, C1_PU2, C1_STS, C1_CCH, C1_MW , C1_SPA, C1_EPA,
  C1_SOS, C1_59 , C1_SCI, C1_CSI, CS_ST , C1_OSC, C1_PM , C1_APC,
};

/*  INDENT-ON   */


/*{{{ process non-pring single acters */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_nonprinting (unicode_t ch){
rxvt_term.process_nonpring =function(ch){
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
        scr_set_choose (1);
        break;
      case C0_SI: /* shift in - acs */
        scr_set_choose (0);
        break;
      //     # 2532 "command.C"
    }
}
/*}}} */


/*{{{ process VT52 escape sequences */

//CMNT: c_keyword ^|       void rxvt_term::process_escape_vt52 (unicode_t ch){
rxvt_term.process_escape_vt52 = function  (ch){
   var row, col; //       int row, col;

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

        tt_prf ("\033/Z");        //tt_printf ("\033/Z"); /* I am a VT100 emulating a VT52 */
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_escape_seq (){
rxvt_term.process_escape_seq =function(){
    var ch= cmd_getc (); //        unicode_t ch = cmd_getc ();

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
        scr_set_set (0, ( )cmd_getc ()); //scr_charset_set (0, (unsigned int)cmd_getc ());
        break;
      case ')':
        scr_set_set (1, ( )cmd_getc ()); //   scr_charset_set (1, (unsigned int)cmd_getc ());
        break;
      case '*':
        scr_set_set (2, ( )cmd_getc ()); //   scr_charset_set (2, (unsigned int)cmd_getc ());
        break;
      case '+':
        scr_set_set (3, ( )cmd_getc ()); // scr_charset_set (3, (unsigned int)cmd_getc ());
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
 var nlcr= [ C0_LF, C0_CR ] ; //                wchar_t nlcr[] = { C0_LF, C0_CR };
          scr_add_lines (nlcr, sizeof (nlcr) / sizeof (nlcr [0]), 1); //FIXME
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

var enum2 = {
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







//CMNT: c_keyword ^|       const unsigned char csi_defaults[] =
/*
   csi_defaults[] =
  {
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((1) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (1)), /* @, A, B, C, D, E, F, G, */
    (((1) << 7) | ((1) << 6) | ((0) << 5) | ((0) << 4) | ((1) << 3) | ((1) << 2) | ((0) << 1) | (0)), /* H, I, J, K, L, M, N, O, */
    (((1) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)), /* P, Q, R, S, T, U, V, W, */
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((1) << 1) | (0)), /* X, Y, Z, [, \, ], ^, _, */
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)), /* `, a, b, c, d, e, f, g, */
    (((0) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)), /* h, i, j, k, l, m, n, o, */
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)), /* p, q, r, s, t, u, v, w, */
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)), /* x, y, z, {, |, }, ~,    */
  };
*/
    var  csi_defaults  =[

    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((1) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (1)), /* @, A, B, C, D, E, F, G, */
    (((1) << 7) | ((1) << 6) | ((0) << 5) | ((0) << 4) | ((1) << 3) | ((1) << 2) | ((0) << 1) | (0)), /* H, I, J, K, L, M, N, O, */
    (((1) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)), /* P, Q, R, S, T, U, V, W, */
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((1) << 1) | (0)), /* X, Y, Z, [, \, ], ^, _, */
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4) | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)), /* `, a, b, c, d, e, f, g, */
    (((0) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)), /* h, i, j, k, l, m, n, o, */
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)), /* p, q, r, s, t, u, v, w, */
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4) | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)) /* x, y, z, {, |, }, ~,    */
    ];


/* *INDENT-ON* */


//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_csi_seq (){
rxvt_term.process_csi_seq =function(){

    var ch, priv, i; //        unicode_t ch, priv, i;
    var nargs, p; //         unsigned int nargs, p;

    var n, ndef; //        int n, ndef;

    var arg = new Array(32); //         int arg[32 /* max # of args for esc sequences */] = { };

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

            n = n *   10 + ch - '0'; //                   n = n * 10 + ch - '0';
        }
      else if (ch == ';'){
          if (nargs < 32 /* max # of args for esc sequences */)
            arg[nargs++] = n;
          n = -1;
        }
      else if (!((ch) & 0xffffff60UL ))
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


 var pm_h= [ 7, 25 ] ; //                        static const int pm_h[] = { 7, 25 };

 var pm_l= [ 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 ] ; // static const int pm_l[] = { 1, 3, 4, 5, 6, 9, 66, 1000, 1001, 1049 };

                process_terminal_mode ('h', 0, sizeof (pm_h) / sizeof (pm_h[0]), pm_h);
                process_terminal_mode ('l', 0, sizeof (pm_l) / sizeof (pm_l[0]), pm_l);
              }
          break;
        }

      return;
    }

  switch (ch){
        /*
//CMNT: possible_pointer ^|                * ISO/IEC 6429:1992 (E) CSI sequences (defaults in parentheses)
            ISO/IEC 6429:1992 (E) CSI sequences (defaults in parentheses)
         */

      case CSI_MC: /* 8.3.83: (0) MEDIA COPY */
        switch (arg[0]){
            case 0: /* initiate transfer to primary aux device */
              scr_printscreen (0); //                   scr_printscreen (0);
              break;
            case 5: /* start relay to primary aux device */
              process_print_pipe (); //
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
            scr_insdel_chars (arg[0], INSERT); //             scr_insdel_chars (arg[0], INSERT);
        break;

      case CSI_IL: /* 8.3.68: (1) INSERT LINE */
        scr_insdel_lines (arg[0], INSERT);
        break;

      case CSI_DL: /* 8.3.33: (1) DELETE LINE */
        scr_insdel_lines (arg[0], DELETE);
        break;

      case CSI_ECH: /* 8.3.39: (1) ERASE CHARACTER */

scr_insdel_chars (arg[0], ERASE); //
        scr_insdel_s (arg[0], ERASE);
        break;

      case CSI_DCH: /* 8.3.26: (1) DELETE CHARACTER */
              scr_insdel_chars (arg[0], DELETE); //               scr_insdel_chars (arg[0], DELETE);

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
                tt_printf ("\033[0n");//                 tt_printf ("\033[0n");

              break;
            case 6: /* CPR requested */
              scr_report_position ();
              break;
            case 7: /* unofficial extension */
              if (option (Opt_insecure))

tt_printf ("%-.250s\012", rs[Rs_display_name]);// tt_printf ("%-.250s\012", rs[Rs_display_name]);
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
      //     # 3171 "command.C"
/*----------------------------------------------------------------------*/
/*
 * get input up until STRING TERMINATOR (or BEL)
 * ends_how is terminator used. returned input must be free()'d
 */
//CMNT: js_style_functions c_keyword ^|        char *      rxvt_term::get_to_st (unicode_t &ends_how){
rxvt_term.get_to_st =function(ends_how) {

var  ch;         //unicode_t ch;
  var seen_esc = false;
  var  n = 0; //unsigned int n = 0;
    var   string = new Array(2048); // wchar_t string[2048 /* max string size for process_rxvt_xterm_seq() */];

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
p
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
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_dcs_seq (){
rxvt_term.process_dcs_seq =function(){

    var s ;//        char *s;

    var eh; //         unicode_t eh;
  /*
   * Not handled yet
   */
  s = get_to_st (eh);
  if (s)
    free (s); //FIXME
  return;
}

/*----------------------------------------------------------------------*/
/*
 * process OPERATING SYSTEM COMMAND sequence `ESC ] Ps ; Pt (ST|BEL)'
 */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_osc_seq (){
rxvt_term.process_osc_seq =function(){
    var ch, eh; //        unicode_t ch, eh;
    var arg;    //        int arg;

    ch = cmd_getc ();
  for (arg = 0; isdigit (ch); ch = cmd_getc ())
          arg = arg * 10 + (ch - '0');
  if (ch == ';'){
 var s= get_to_st (eh); //             char *s = get_to_st (eh);

      if (s){
          process_xterm_seq (arg, s, eh);
          free (s);
        }
    }
}

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_color_seq (int report, int color, const char *str, char resp){
rxvt_term.process_color_seq =function( report,  color,    str,  resp){
  if (str[0] == '?' && !str[1]){
      var c;  //      rgba c;
      pix_colors_focused[color].get (c);
      tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp); //               tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp);
    }
  else
    set_window_color (color, str);
}

/*
 * XTerm escape sequences: ESC ] Ps;Pt (ST|BEL)
 */
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_xterm_seq (int op, const char *str, char resp){
rxvt_term.process_xterm_seq =function( op,   str,  resp){

    var  color;       //         int color;
    var  buf,  name; //         char *buf, *name;
    var  query = str[0] == '?' && !str[1];
    var saveop= op; //          int saveop = op;


  Display     dpy = this->dpy; //         Display * const dpy = this->dpy;  FIXME

//CMNT: remove_casts ^|         (__builtin_expect(!(str != __null), 0) ? __assert_rtn(__func__, "command.C", 3299, "str != NULL") : (void)0);
  (__builtin_expect(!(str != __null), 0) ? __assert_rtn(__func__, "command.C", 3299, "str != NULL") : 0);

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
            Atom prop = display->atom (str + 1); //FIXME
            Atom actual_type; //FIXME

             var actual_format; //                    int actual_format;

             var nitems;       //                    unsigned long nitems;

             var bytes_after; //                  unsigned long bytes_after;

               var value = 0; //                   unsigned char *value = 0;

               var str = ""; //                   const char *str = "";  FIXME

            if (prop
                && XGetWindowProperty (dpy, parent[0],
                                       prop, 0, 1<<16, 0, 0L /* special Atom, passed to GetProperty */,
                                       &actual_type, &actual_format,
                                       &nitems, &bytes_after, &value) == 0 /* everything's okay */
                && actual_type != 0L /* universal null resource or null atom */
                && actual_format == 8)

              str = (   ) (value); //                     str = (const char *)(value); FIXME

            tt_printf ("\033]%d;%s%c", op, str, resp);

            XFree (value);
          }
        else{
//CMNT: c_keyword possible_pointer ^|                   char *eq = strchr (str, '='); // constness lost, but verified to be ok
            var eq = strchr (str, '='); // constness lost, but verified to be ok

            if (eq){
                 eq = 0; //                       *eq = 0;
                set_utf8_property (display->atom (str), eq + 1);
              }
            else
              XDeleteProperty (dpy, parent[0],
                               display->atom (str));
          }
        break;

      case XTerm_Color:
        for (buf = (  ) str; buf &&  b uf;){ //               for (buf = (char *)str; buf && *buf;){
            if ((name = strchr (buf, ';')) == __null)
              break;

//CMNT: possible_pointer ^|                   *name++ = '\0';
             n ame++ = '\0';
            color = atoi (buf) + minCOLOR;

//CMNT: c_keyword ^|                   if (!((unsigned int)(color) - (unsigned int)(minCOLOR) <= (unsigned int)(maxTermCOLOR) - (unsigned int)(minCOLOR)))
            if (!(( )(color) - ( )(minCOLOR) <= ( )(maxTermCOLOR) - ( )(minCOLOR)))
              break;

            if ((buf = strchr (name, ';')) != __null)
//CMNT: possible_pointer ^|                     *buf++ = '\0';
               buf++ = '\0';

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

      process_color_seq (op, Color_poer_bg, str, resp); //               process_color_seq (op, Color_pointer_bg, str, resp);
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
      //     # 3468 "command.C"
      case XTerm_logfile:
        // TODO, when secure mode?
        break;
      //     # 3484 "command.C"
      case XTerm_font:
        op = URxvt_font;
      case URxvt_font:





        if (query)
            tt_printf ("\33]%d;%-.250s%c", saveop,
                     option (Opt_insecure) && fontset[op - URxvt_font]->fontdesc
                       ? fontset[op - URxvt_font]->fontdesc : "",
                     resp);
        else{
//CMNT: c_keyword possible_pointer ^|                   const char *&res = rs[Rs_font + (op - URxvt_font)];
               & res = rs[Rs_font + (op - URxvt_font)];

            res = strdup (str);
//CMNT: c_keyword possible_pointer ^|                   allocated.push_back ((void *)res);
            allocated.push_back ((  ) res);
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
      //     # 3546 "command.C"
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
//CMNT: js_style_functions c_keyword ^|       int rxvt_term::privcases (int mode, unsigned long bit){
rxvt_term.privcases =function( mode,  bit){

    var state; //         int state;

  if (mode == 's'){
      SavedModes |= (priv_modes & bit);
      return -1;
    }
  else{
      if (mode == 'r')
        state = (SavedModes & bit) ? 1 : 0; /* no overlapping */
      else
        state = (mode == 't') ? ! (priv_modes & bit) : mode;
      set_privmode (bit, state);
    }

  return state;
}

/* we're not using priv _yet_ */
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_terminal_mode (int mode, int priv __attribute__((unused)), unsigned int nargs, const int *arg){
rxvt_term.process_terminal_mode =function( mode,  priv __attribute__((unused)),   nargs,    a rg){

    var     i, j; //         unsigned int i, j;

    var     state; //         int state;

    //FIXME I THINK ALREADY TRANSLATE THIS
//CMNT: c_keyword ^|         static const struct
    struct
  {
//CMNT: c_keyword ^|           const int argval;
      argval;
//CMNT: c_keyword ^|           const unsigned long bit;
      long bit;
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
//CMNT: c_keyword ^|                        // 18 end FF to printer after print screen
                 // 18 end FF to prer after pr screen
//CMNT: c_keyword ^|                        // 19 Print screen prints full screen/scorll region
                 // 19 Pr screen prs full screen/scorll region
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
                  set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight); //                        set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight);
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
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::process_sgr_mode (unsigned int nargs, const int *arg){
rxvt_term.process_sgr_mode =function(  nargs,  arg){

    var    i;            //         unsigned int i;
    var    rendset;      //         short rendset;
    var    rendstyle;    //         int rendstyle;

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
          scr_color (( ) (minCOLOR + (arg[i] - 30)), Color_fg); //  FIXME                 scr_color ((unsigned int) (minCOLOR + (arg[i] - 30)), Color_fg);
            break;
          case 38: // set fg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
                scr_color (( ) (minCOLOR + arg[i + 2]), Color_fg); // FIXME                      scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_fg);
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

          scr_color (( ) (minCOLOR + (arg[i] - 40)), Color_bg); //   FIXME                scr_color ((unsigned int) (minCOLOR + (arg[i] - 40)), Color_bg);
            break;
          case 48: // set bg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){

                scr_color (( ) (minCOLOR + arg[i + 2]), Color_bg); //  FIXME                     scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_bg);
                i += 2;
              }
            break;
          case 49: /* default bg */
            scr_color (Color_bg, Color_bg);
            break;

          //case 50: // not variable spacing
      //     # 3926 "command.C"
        }
    }
}
/*}}} */

/*{{{ (do not) process Rob Nation's own graphics mode sequences */
//CMNT: js_style_functions c_keyword ^|       void rxvt_term::process_graphics (){
rxvt_term.process_graphics =function(){
    //         unicode_t ch, cmd = cmd_getc ();
    var ch;               //         unicode_t ch, cmd = cmd_getc ();
    var cmd = cmd_getc (); //         unicode_t ch, cmd = cmd_getc ();


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
//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::tt_printf (const char *fmt,...){
    rxvt_term.tt_printff =function( fmt, args ){  //FIXME variable length arguments
  va_list arg_ptr;
  var buf = new Array(256); //         char buf[256];

  __builtin_va_start(arg_ptr,fmt);

  vsnprf ((  ) buf, 256, fmt, arg_ptr); //FIXME         vsnprintf ((char *)buf, 256, fmt, arg_ptr);
  __builtin_va_end(arg_ptr);
  tt_write (buf, (strlen)(buf));
}

/* ---------------------------------------------------------------------- */
/* Write data to the pty as typed by the user, pasted with the mouse,
 * or generated by us in response to a query ESC sequence.
 */
//CMNT: c_keyword ^|       const unsigned int MAX_PTY_WRITE = 255; // minimum MAX_INPUT
   MAX_PTY_WRITE = 255; // minimum MAX_INPUT

//CMNT: js_style_functions c_keyword possible_pointer ^|       void rxvt_term::tt_write (const char *data, unsigned int len){
rxvt_term.tt_write =function(   d ata,   len){
  if (false)
    return;

  if (pty->pty < 0)
    return;

  if (v_buflen == 0){
      ssize_t written = write (pty->pty, data, min (len, MAX_PTY_WRITE));


      if (( )written == len) //FIXME             if ((unsigned int)written == len)
        return;

      data += written;
      len -= written;
    }

//CMNT: c_keyword possible_pointer ^|         v_buffer = (char *)realloc (v_buffer, v_buflen + len);
  v_buffer = (  ) realloc (v_buffer, v_buflen + len);

  (memcpy)(v_buffer + v_buflen,data,len);
  v_buflen += len;

  pty_ev.set (ev::READ | ev::WRITE);
}

//CMNT: js_style_functions c_keyword ^|       void rxvt_term::pty_write (){
rxvt_term.pty_write =function(){
//CMNT: js_style_variables ^|         int written = write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE));
 var written= write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE));

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
//CMNT: possible_pointer ^|         else if (written != -1 || ((*__error()) != 35 /* Resource temporarily unavailable */ && (*__error()) != 4 /* Interrupted system call */))
  else if (written != -1 || (( _ _error()) != 35 /* Resource temporarily unavailable */ && ( _ _error()) != 4 /* Interrupted system call */))
    pty_ev.set (ev::READ);
}

/*----------------------- end-of-file (C source) -----------------------*/