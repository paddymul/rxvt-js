//# 1 "expand_both.h"
//# 1 "<built-in>"
//# 1 "<command line>"
//# 1 "expand_both.h"
//# 1 "command.C.js" 1
 
//# 99 "command.C.js"
//# 119 "command.C.js"
//# 1 "rxvt.h.js" 1
//# 135 "rxvt.h.js"
if(!console){
  console={};
  console.log=function(){};
 }
//# 173 "rxvt.h.js"
//using namespace std;
//# 193 "rxvt.h.js"
//# 214 "rxvt.h.js"
//# 233 "rxvt.h.js"
//# 256 "rxvt.h.js"
Opt_secondaryScroll=22;
Opt_secondaryScreen=21;
NOCHAR = 0xffff,
  Opt_loginShell = 1,
  Opt_iconic = 2,
  Opt_visualBell = 3,
  Opt_mapAlert = 4,
  Opt_reverseVideo = 5,
  Opt_utmpInhibit = 6,
  Opt_scrollBar = 7,
  Opt_scrollBar_right = 8,
  Opt_scrollBar_floating = 9,
  Opt_meta8 = 10,
  Opt_scrollTtyOutput = 11,
  Opt_scrollTtyKeypress = 12,
  Opt_transparent = 13,
  Opt_tripleclickwords = 14,
  Opt_scrollWithBuffer = 15,
  Opt_jumpScroll = 16,
  Opt_skipScroll = 17,
  Opt_mouseWheelScrollPage = 18,
  Opt_pointerBlank = 0,
  Opt_cursorBlink = 20,
  Opt_secondaryScreen = 21,
  Opt_secondaryScroll = 22,
  Opt_pastableTabs = 23,
  Opt_cursorUnderline = 24,
  Opt_insecure = 0,
  Opt_borderLess = 0,
  Opt_hold = 0,
  Opt_override_redirect = 0,
  Opt_urgentOnBell = 0,
  Opt_skipBuiltinGlyphs = 0,
  Opt_intensityStyles = 0,
  Opt_iso14755_52 = 32,
  Opt_console = 33,
  Opt_buffered = 0;
Opt_count = 34;
SAVE=0, RESTORE=1;
SELECTION_CLEAR = 0;
// in range including end
//#if 4 >= 4
//# define rxvt_attribute(x) __attribute__(x)
//# define expect(expr,value)         __builtin_expect ((expr),(value))
//#else
//#endif
// put into ifs if you are very sure that the expression
// is mostly true or mosty false. note that these return
// booleans, not the expression.
// increases code size unless -fno-enforce-eh-specs
// in range excluding end
// for m >= -n, ensure remainder lies between 0..n-1
// try to avoid some macros to decrease code size, on some systems
//template<typename T, typename U, typename V> static inline void clamp_it (T &v, U a, V b) { v = v < (T)a ? a : v >(T)b ? b : v; }
function free(arg) {};
//# define memset(a,c,l) (memset)(a,c,l)
//# define memcpy(a,b,l) (memcpy)(a,b,l)
VT100_ANS = "rxvt-js";
ESCZ_ANSWER = "rxvt-js ?? escz";
//SCREEN.H.JS MACROS
 
//# 450 "rxvt.h.js"
//# 463 "rxvt.h.js"
//# 477 "rxvt.h.js"
//# 488 "rxvt.h.js"
memset = function(destination, destination_i, source,  _length){
  for(var i =0; i < _length; i++){
    destination[destination_i + i]=source;
  }
  return destination;
}
  memcpy = function(destination, destination_i, source, source_i, _length){
    for(var i =0; i < _length; i++){
      destination[destination_i + i]=source[source_i+i];
    }
    return destination;
  }
  
  //typedef char *XPointer;
  //#include <termios.h>
  //#include "background.h"
  
  // exception thrown on fatal (per-instance) errors
  //class rxvt_failure_exception { };
  // exception thrown when the command parser runs out of input data
  //class out_of_input { };
  
  // main.C
  
//# 563 "rxvt.h.js"
  
  
//# 580 "rxvt.h.js"
    var
    NO_REFRESH       = 0, // Window not visible at all!      
  FAST_REFRESH     = 1, // Fully exposed window            
  SLOW_REFRESH     = 2 // Partially exposed window        
  ;
// special (internal) prefix for font commands 
// flags for rxvt_scr_gotorc () 
var
C_RELATIVE = 1,       // col movement is relative 
  R_RELATIVE = 2,       //row movement is relative 
  RELATIVE   = C_RELATIVE | R_RELATIVE;
// modes for rxvt_scr_insdel_chars (), rxvt_scr_insdel_lines () 
var
INSERT = -1, //				don't change these values 
  DELETE = +1,
  ERASE  = +2;
// modes for rxvt_scr_page () - scroll page. used by scrollbar window 
var
UP =0,
  DN =1,
  NO_DIR =2;
// arguments for rxvt_scr_change_screen () 
var
PRIMARY = 0,
  SECONDARY = 1;
// #d efine RS _fgMask               0x0000007fUL    // 128 colors ### remove_UL
// 128 colors  
//FIXED c_style_UL #de fine RS _bg Mask               0x00003f80UL    // 128 colors
// 128 colors  
// font styles
//FIXED c_style_UL #define RS_Bo ld                 0x00004000UL    // value 1
// value 1  
// #def ine RS_ I talic		0x00008000UL    // value 2 ### remove_UL
// value 2  
// fake styles
//FIXED c_style_UL #d efine RS _Blink                0x00010000UL    // blink
// blink  
//FIXED c_style_UL #defi ne RS_ RVid      
// reverse vid           0x00020000UL    // reverse video
//FIXED c_style_UL #def ine RS _Uline                0x00040000UL    // underline  eo  
// underline  
// toggle this to force redraw, must be != RS_Carefu
//FIXED c_style_UL #de fine RS_red raw               0x01000000ULl
// 5 custom bits for extensions
//FIXED c_style_UL #defin e RS_cus tomMask           0x00f80000UL      
// other flags
//FIXED c_style_UL #de fine RS _Careful		0x80000000UL	            
// not 127 or 256, see rxvtfont.h
// plenty(?) of fonts, includes 0x80000000
//# 701 "rxvt.h.js"
//# 759 "rxvt.h.js"
//# 796 "rxvt.h.js"
//# 805 "rxvt.h.js"
//# 814 "rxvt.h.js"
//# 823 "rxvt.h.js"
//# 832 "rxvt.h.js"
 
 
//# 913 "rxvt.h.js"
//# 978 "rxvt.h.js"
//enum {
var  XTerm_name             =  0,
  XTerm_iconName         =  1,
  XTerm_title            =  2,
  XTerm_property         =  3,      // change X property
  XTerm_Color            =  4,      // change colors
  XTerm_Color00          = 10,      // change fg color
  XTerm_Color01          = 11,      // change bg color
  XTerm_Color_cursor     = 12,      // change actual 'Cursor' color
  XTerm_Color_pointer_fg = 13,      // change actual 'Pointer' fg color
  XTerm_Color_pointer_bg = 14,      // change actual 'Pointer' bg color
  XTerm_Color05          = 15,      // not implemented (tektronix fg)
  XTerm_Color06          = 16,      // not implemented (tektronix bg)
  XTerm_Color_RV         = 17,      // change actual 'Highlight' color
  XTerm_logfile          = 46,      // not implemented
  XTerm_font             = 50,
  XTerm_konsole30        = 30,      // reserved for konsole
  XTerm_konsole31        = 31,      // reserved for konsole
  XTerm_emacs51          = 51,      // reserved for emacs shell
// rxvt extensions of XTerm OSCs: ESC ] Ps;Pt (ST|BEL)
// deprecated
  Rxvt_Color_BD          = 18,
  Rxvt_Color_UL          = 19,
  Rxvt_restoreFG         = 39,
  Rxvt_restoreBG         = 49,
  Rxvt_Pixmap            = 20,      // new bg pixmap
  Rxvt_dumpscreen        = 55,      // dump scrollback and all of screen
  URxvt_locale           = 701,     // change locale
  URxvt_version          = 702,     // request version
  URxvt_Color_IT         = 704,     // change actual 'Italic' colour
  URxvt_Color_tint       = 705,     // change actual tint colour
  URxvt_Color_BD         = 706,     // change actual 'Bold' color
  URxvt_Color_UL         = 707,     // change actual 'Underline' color
  URxvt_Color_border     = 708,
  URxvt_font             = 710,
  URxvt_boldFont         = 711,
  URxvt_italicFont       = 712,
  URxvt_boldItalicFont   = 713,
  URxvt_view_up          = 720,
  URxvt_view_down        = 721,
  URxvt_perl             = 777;     // for use by perl extensions, starts with "extension-name;"
var
Color_none = -2,
  Color_transparent = -1,
  Color_fg = 0,
  Color_bg = 1,
  minCOLOR = 2,                   
  Color_Black = minCOLOR,
  Color_Red3 =3,
  Color_Green3 =4,
  Color_Yellow3 =5,
  Color_Blue3 = 6,
  Color_Magenta3 = 7,
  Color_Cyan3 =8,
  maxCOLOR = 9,                   
  Color_AntiqueWhite = maxCOLOR,
  minBrightCOLOR =10,             
  Color_Grey25 = minBrightCOLOR,
  Color_Red =11,
  Color_Green = 12 ,
  Color_Yellow =13,
  Color_Blue =14,
  Color_Magenta =15,
  Color_Cyan =16,
  maxBrightCOLOR =17,             
  Color_White = maxBrightCOLOR,
  minTermCOLOR = Color_White + 1,
  maxTermCOLOR = Color_White + 72,
  Color_cursor =18,
  Color_cursor2 =19,
  Color_pointer_fg =20,
  Color_pointer_bg =21,
  Color_border = 22,
  Color_BD = 23,
  Color_IT = 24,
  Color_UL = 25,
  Color_RV = 26,
  Color_scroll = 27,
//# 1109 "rxvt.h.js"
  NRS_COLORS = 28,                 
  TOTAL_COLORS = NRS_COLORS
  ;
// 0 .. maxTermCOLOR
//# include "rsinc.h"
//  NUM_RESOURCES
//FIXME does bitshifting an unsigned long result in a different value than bitshifting any number in js would?
//# 1159 "rxvt.h.js"
// do not change these constants li
// input modifier buffer sizesghtly, there are many interdependencies
// size of command buffer// size of keyboard mapping buffer
// never call pty_fill/cmd_parse more than this often in a row8    
// character buffer
//# 1192 "rxvt.h.js"
// for speed reasons, we assume that all codepoints 32 to 126 are
// single-width.
//#define 0		(((c) - ( 0x20) <= ( 0x7e) - ( 0x20)) ? 1 : wcwidth (c))
//# 1240 "rxvt.h.js"
//#defi ne LIN ENO_of(t,n) ((((t)->term_start + int(n)) + ( (t)->total_rows)) % ( (t)->total_rows))
//#def ine RO W_of(t,n) (t->row_buf [((((t).term_start +  n) + ( (t).total_rows)) % ( (t).total_rows))]
//# 1267 "rxvt.h.js"
//# define FONTSET_of(t,style) (t)->fontset[0]
//#de fine FON TSET(style) this.fontset[0]
//typedef callback<void (const char *)> log_callback;
//typedef callback<int (int)> getfd_callback;
// line has been filtered // line is continued on the next row
// line has been compressed (NYI)
// line needs to be filtered before display (NYI)
// line needs bidi (NYI)
//# 1342 "rxvt.h.js"
line_t = function() {
  this.t= [];  //FIXED   text_t *t; // terminal the text
  this.r= []; //FIXED   rend_t *r; // rendition, uses RS_ flags
  this.l= 0; //FIXED   tlen_t_ l; // length of each text line
  this.f= ""; //FIXED  uint32_t f; // flags
  this.modified=false;
};
line_t.prototype = {
    
 is_longer : function(set){  //FIXME overloaded function, check js translation
    if(set){
      this.f |= 0x0001; // line is continued on the next row;
    }
    else if (1){
      this.f &= ~0x0001; // line is continued on the next row;
    }
        
    else {
      return thisf & 0x0001 // line is continued on the next row;
    }},
 
//# 1377 "rxvt.h.js"
 clear : function ()   { //FIXME should this whole thing be an object, probably
    this.t = [];
    this.r = [];
    this.l = 0;
    this.f = 0;
  },
 //FIXME operator overloading
 
//# 1394 "rxvt.h.js"
  touch : function (col) { // call whenever a line is changed/touched/updated  
        this.modified=true;
  }
};
// primitive wrapper around mbstate_t to ensure initialisation
//# 1413 "rxvt.h.js"
//FIXED c_style_ul #define UNICODE_MASK 0x1fffffUL
//# 1431 "rxvt.h.js"
//FIXED c_style_UL #  define COMPOSE_LO 0xd800UL
//FIXED c_style_UL #  define COMPOSE_HI 0xf8ffUL 
//# 1469 "rxvt.h.js"
function row_col_t(){};
row_col_t.prototype = {row:0, col:0};
//# 1497 "rxvt.h.js"
//# 1540 "rxvt.h.js"
//# 1569 "rxvt.h.js"
//# 1588 "rxvt.h.js"
//# 1604 "rxvt.h.js"
screen_t = function() {
  this.s_cur= new row_col_t();        //row_col_t  saved cursor position
  this.cur= new row_col_t();          //row_col_t  cursor position on the screen            
}
  screen_t.prototype ={
  tscroll: "",               //  int                         top of settable scroll region
  bscroll: "",               //  int                         bottom of settable scroll region
  charset: "",               //  unsigned int                character set number [0..3]
  flags: "",                 //  unsigned int                see below
  charset: "",               //  unsigned int    s_          saved character set number [0..3]
  s_charset_char : "",       //  char
  rstyle: ""                 //  rend_t          s_          saved rendition style
  };                                      
//enum selection_op_t
//struct selection_t
selection_t = function () {
  this.beg=new row_col_t();    //row_col_t beginning of selection   <= mark         
  this.mark=new row_col_t();   //row_col_t point of initial click   <= end          
  this.end=new row_col_t();    //row_col_t one character past end point             
};
selection_t.prototype = {
 text: "",        //wchar_t          * selected text                            
 len:   0,        //unsigned int       length of selected text                  
 screen: 0,       //unsigned int       screen being used                        
 clicks: 0,       //unsigned int       number of clicks                         
 op:   "",        //selection_op_t     current operation                        
 rect:  true     //bool               rectangular selection?                   
};
//# includeoptinc.h"
//# 1689 "rxvt.h.js"
rxvt_vars = function() {}
  rxvt_vars.prototype={
  };
function rxvt_term(term_el, pre_term_el) {
    //this.term_el=$(term_el);
    this.privmodes = SavedModes = ((1<<5)|(1<<10)|(1<<11));
    this.pre_term_el=pre_term_el;
    this.current_screen=0; // make sure we swap screens initialy, bit of a hack
  this.screen = new screen_t();
  this.swap = new screen_t();
  this.charsets= new Array(4);
  
  this.set_option (Opt_scrollBar, true);
  this.set_option (Opt_scrollTtyOutput, true);
  this.set_option (Opt_jumpScroll, true);
  this.set_option (Opt_skipScroll, true);
  this.set_option (Opt_secondaryScreen, true);
  this.set_option (Opt_secondaryScroll, true);
  this.set_option (Opt_pastableTabs, true);
  this.set_option (Opt_intensityStyles, true);
  this.set_option (Opt_iso14755_52, true);
  this.set_option (Opt_buffered, true);
  this.scr_recolour();
  //this.scr_clear();
  //this.scr_touch();
  this.scr_poweron();
}  //FIXME
rxvt_term.prototype = {
  //termwin_t variables
  width: "",                 //window width                    [pixels]
  height: "",                //window height                   [pixels]
  fwidth: "",                //font width                      [pixels]
  fheight: "",               //font height                     [pixels]
  fbase: "",                 //font ascent (baseline)          [pixels]
  ncol: 80,                  //window columns              [characters]
  nrow: 24,                  //window rows                 [characters]
  focus: "",                 //window has focus                        
  mapped: "",                //window state mapped?                    
  int_bwidth: "",            //internal border width                   
  ext_bwidth: "",            //external border width                   
  lineSpace: "",             //number of extra pixels between rows     
  saveLines: 0,              //number of lines that fit in scrollback  
  total_rows: 0,            //total number of rows in this terminal   
  term_start: 0,             //term lines start here                   
  view_start: 0,             //scrollback view starts here             
  top_row: 0,                //   topmost row index of scrollback         
  parent : [],              //  Window         parent[     parent identifiers - we're parent[0]    
  vt: "",              //  Window                     vt100 window                            
  gc: "",              //  GC                         GC for drawing                          
  pixmap: "",              //  Pixmap         
  drawable: [], drawable_i:0,                    //  rxvt_drawable *
  fontset : new Array(4), fontset_i:0,                    //  rxvt_fontset  *fontset[4]
  //END Termwin_T
  //rxvt_vars
  scrollBar : "",                     //   scrollBar_t 
  options : new Array((Opt_count + 7) >> 3), //     uint8_t
  szHint : "" ,    //XSizeHints      
  pix_colors : [], pix_colors_i:0,   //rxvt_color     * 
  TermWin_cursor : "",         //Cursor       
  numlock_state: 0,            //int
  row_buf : [], row_buf_i:0,   //line_t* 
  // row_buf is all lines, scrollback + terminal, circular, followed by temp_buf
  drawn_buf : [], drawn_buf_i:0, //  line_t         *     // text on screen
  swap_buf : [] , swap_buf_i:0 , //  line_t         * ;     // lines for swap buffer
  tabs: [], tabs_i:0,            //    char           *   
  selection : new selection_t(),                //    selection_t
  pix_colors_focused: new Array(TOTAL_COLORS), //    rxvt_color
  //END rxvt_vars
// special markers with magic addresses
 resval_undef : [],  //static const char      // options specifically unset
 resval_on : [],       //static const char      // boolean options switched on
 resval_off :[],      //static const char      // or off
 log_hook: [],        //log_callback   ptr_arr   // log error messages through this hook, if != 0
 log_hook_ptr: 0,       //log_hook_ptr
 getfd_hook: "",        //getfd_callback *  some wierd function callback   // convert remote to local fd, if != 0
 //struct mbstate  mbstate;              // current input multibyte state
 want_refresh:1,     //unsigned char
  current_screen:1,	// primary or secondary              
  num_scr_allow:1,
  bypass_keystate:1,
//# 1796 "rxvt.h.js"
  enc_utf8:1,		// wether locale uses utf-8 
  seen_input:1,         // wether we have seen some program output yet 
  seen_resize:1,	// wether we had a resize event 
 parsed_geometry:1,
 refresh_type: "",        //unsigned char   
 selection_wait: 0, //
 selection_type: 0, // ??? do variables in structs default to ints?, ;
// ---------- 
 rvideo_state: true, rvideo_mode: true,  //bool
 rvideo_bell :true, // bool            
 num_scr: 0,              // int   screen: number lines scrolled 
 prev_ncol: 0 ,           // int // screen: previous number of columns 
 prev_nrow: 0,            // int // screen: previous number of rows 
// ---------- 
 rstyle: "" ,             // rend_t          
// ---------- 
// ---------- 
//int             csrO,       // Hops - csr offset in thumb/slider to      
//   give proper Scroll behaviour            
 refresh_count : 0, // I guess for all of the following c defualts to ints
 window_vt_x  :0,
 window_vt_y :0,
 mouse_row: 0,
 mouse_col: 0,
 allowedxerror: 0,  //probably never used
// ---------- 
//unsigned int    ModLevel3Mask,
//  ModMetaMask,
//  ModNumLockMask;
 old_width: 0,  //int last used width in screen resize          
 old_height: 0, //int last used height in screen resize         
  // priv_modes:0 , //unsigned long   
  // SavedModes:"", //  SavedModes;
  //Note this is an utter hack, I grabbed these values by taking the first runtime state of
  //them in rxvt running live
  priv_modes: 19744, 
  SavedModes :19488, 
// ---------- 
 xa :[] ,  //Atom            *;
 xa_ptr:0,
// ---------- 
//Time            selection_time,
//  selection_request_time;
 //pid_t           cmd_pid;    // process id of child 
 incr_buf: [], // char * 
 incr_buf_ptr : 0,
 //size_t          incr_buf_size, incr_buf_fill;
// ---------- 
//struct mouse_event MEvent;
//XComposeStatus  compose;
//struct termios  tio;  //FIXME termios might be needed
 oldcursor: row_col_t(), //row_col_t
//# 1886 "rxvt.h.js"
 allocated: [], //???? // vector<void *> allocated;           // free these memory blocks with free()
 //char            env_windowid[21];   // environmental variable WINDOWID 
 //char            env_colorfgbg[sizeof ("COLORFGBG=default;default;bg") + 1];
 //char           *env_display;        // environmental variable DISPLAY  
 //char           *env_term;           // environmental variable TERM     
 //char           *locale;
 //char            charsets[4];
  
 v_buffer: [], //char           *v_buffer;           // pointer to physical buffer 
 v_buffer_ptr:0,
 v_buflen : 0 , //unsigned int    v_buflen;           // size of area to write 
 //stringvec      *argv, *envv;        // if != 0, will be freed at destroy time 
 //XrmDatabase option_db;
 rs:[],//const char     *rs[NUM_RESOURCES];
 rs_ptr:0,
// command input buffering 
 cmdbuf : [],
 cmdbuf_ptr:0, cmdbuf_endp:0,//char           *cmdbuf_ptr, *cmdbuf_endp;
 cmdbuf_base : [], //char            cmdbuf_base[204];
  option: function (opt) {
       
        if(!opt){
            return 0;
        }
        --opt;
        return this.options[opt >>3] & ( 1 << (opt & 7));
    },
  set_privmode: function(bit,set){
        ;
        ;
        ;
        ;
    if (set)
      this.priv_modes |= bit;
    else
      this.priv_modes &= ~bit;
        ;
        ;
    },
  set_option: function ( opt,  set){
    if (!opt)
      return;
    --opt;
    if (set)
      this.options[opt >> 3] |= (1 << (opt & 7));
    else
      this.options[opt >> 3] &= ~(1 << (opt & 7));
  }
 //ptytty         *pty;
 //rxvt_salloc    *talloc;             // text line allocator
 //rxvt_salloc    *ralloc;             // rend line allocator
 //static vector<rxvt_term *> termlist; // a vector of all running rxvt_term's
}
//# 2074 "rxvt.h.js"
function chr(inte){
  return String.fromCharCode(inte);
  }
function unichr(integer){
  return String.fromCharCode(integer);
  }
function ord(_string){ //this might fail for unicode
  var code="";
    code =_string.toString().charCodeAt(0);
  return code;
}
//#define ord(_string) ((_string)[0].charCodeAt(0))
//#define chr(inte) (String.fromCharCode(inte))
//#define this_next_char() ( this.cmdbuf_ptr < this.cmdbuf_endp ? this.cmdbuf[this.cmdbuf_ptr++] : chr(NOCHAR))
//( a.cmdbuf_ptr < a.cmdbuf_endp ? a.cmdbuf[a.cmdbuf_ptr++] : "")
function hex(_integer){
  return _integer.toString(16);
  }
function lresize (l)   {
    if (!l.t)
      return;
    
//# 2113 "rxvt.h.js"
  }
//# 122 "command.C.js" 2
//#de fine IS_CONTRO L(ch) !((ch) & 0xffffff60UL)
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
         //;
     
//# 165 "command.C.js"
         //console.log(str);
         //str=str + chr(NOCHAR);
         //console.log(str);
         console.log("cmd_write");
         if(this.cmdbuf_endp == this.cmdbuf_ptr){
             console.log("resetting cmd_buf to the incoming string");
             this.cmdbuf=str;   
             this.cmdbuf_ptr=0;
             }
         else {
             console.log("concatting cmdbuf ");
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
  ;
  flush_ev.stop ();
  if (this.want_refresh){ //FIXME note will probable have to wait for the macro expansion to be able to figure out whats going on
      if (false){
          var row= view_start;   //int row = view_start; 
          var end_row= row + nrow;   //int end_row = row + nrow;
          while (row > top_row && (this.row_buf [((((this).term_start +   row - 1) + ( (this).total_rows)) % ( (this).total_rows))]).is_longer ())
            --row;
          do
            {
                var start_row= row;   //int start_row = row; 
                var  l ;  //line_t *l;  
              do
                {
                  l = (this.row_buf [((((this).term_start +   row++) + ( (this).total_rows)) % ( (this).total_rows))]);  //l = &(this.row_buf [((((this).term_start +   row++) + ( (this).total_rows)) % ( (this).total_rows))]);
                  if (!(l.f & 0x0002)){
                      // line not filtered, mark it as filtered
                      l.f |= 0x0002;
                      while (l.is_longer ()){
                        l = (this.row_buf [((((this).term_start +   row++) + ( (this).total_rows)) % ( (this).total_rows))]);  //l = &(this.row_buf [((((this).term_start +   row++) + ( (this).total_rows)) % ( (this).total_rows))]);
                          l.f |= 0x0002;
                        }
                      // and filter it
                      false;
                      break;
                    }
                }
              while (l.is_longer () && row < end_row);
            }
          while (row < end_row);
        }
      this.scr_refresh();
      //lscrollBar.show (1);
    }
  display.flush (); //FIXME what is display again
}
//# 293 "command.C.js"
//REMOVED:void rxvt_term::cont_scroll_cb (ev::timer &w, int revents) 
//REMOVED:void rxvt_term::sel_scroll_cb (ev::timer &w, int revents) 
//REMOVED:void rxvt_term::slip_wheel_cb (ev::timer &w, int revents) 
//REMOVED:static struct event_handler // related to the LINUX_YIELD_HACK
// this is probably where I should enter text into the system
//REWRITE:bool rxvt_term::pty_fill () 
rxvt_term.prototype.pty_fill =function(){ 
    ;
    
//# 335 "command.C.js"
  return false;
}
//void rxvt_term::pty_cb (ev::io &w, int revents) 
rxvt_term.prototype.pty_cb =function(w,  revents){ 
    ;
    
//# 368 "command.C.js"
}
//# 393 "command.C.js"
//REMOVED:void rxvt_term::mouse_report (XButtonEvent &ev) 
//REMOVED:void rxvt_term::x_cb (XEvent &ev) 
//# 414 "command.C.js"
//REMOVED:void rxvt_term::focus_in () 
//REMOVED:void rxvt_term::focus_out () 
//void rxvt_term::update_fade_color (unsigned int idx) 
rxvt_term.prototype.update_fade_color =function(idx){
//;
//FIXME
}
//REMOVED:void rxvt_term::rootwin_cb (XEvent &ev) 
//REMOVED:void rxvt_term::button_press (XButtonEvent &ev) 
//REMOVED:void rxvt_term::button_release (XButtonEvent &ev) 
//void rxvt_term::cmd_parse () 
rxvt_term.prototype.cmd_parse =function(){
    //;
    var och= NOCHAR;  //wchar_t ch = NOCHAR;
    var seq_begin;   // char *seq_begin; // remember start of esc-sequence here 
    //
    for (;;){ //outer_for_loop
//# 453 "command.C.js"
        //
        //
        
        if ((och == NOCHAR)){
            //;
            seq_begin = this.cmdbuf_ptr; 
            och = ord(( this.next_char())); 
            if (och == NOCHAR){
                break;
            }
        }
        if ((!!((och) & 0xffffff60) || och == 0xa || och == 0xd || och == 0x9)){
            
            //;
            if ((!this.seen_input)){
                //   ;
                this.seen_input = 1;}
            
            var buf = new Array(2048);  //wchar_t buf[2048];  
            var refreshnow = false;
            var nlines= 0; 
            var str = buf, str_i = 0; //wchar_t *str = buf;
            //var eol = str.length + Math.min((this.ncol),( 2048)); //wchar_t *eol = str + min (ncol, 2048);
            var eol = str_i + Math.min((this.ncol),( 2048)); //wchar_t *eol = str + min (ncol, 2048);
            for (;;){//inner_for_loop
                //
                //
              if ((och == NOCHAR || (!((och) & 0xffffff60) && och != 0xa && och != 0xd && och != 0x9))) { //IS_CONTROL
                  //
                    break;}
              ;
              str[str_i++]=chr(och);  //str++ = ch; 
              //if(str.length >= eol){}
              //;
              //;
              if ((och == 0xa || str_i -2 >= eol)){
                    
                    if (och == 0xa){
                      ;
                        nlines++;}
                    ;
                    this.refresh_count++;
                    //;
                    //;
                    if ((!this.option (Opt_jumpScroll)) || this.refresh_count >= (this.nrow - 1)){
                        ;
                        this.refresh_count = 0;
                        if (!this.option (Opt_skipScroll) ){
                            //;
                            refreshnow = true;
                            och = NOCHAR;
                            break;}//skipScroll
                    }//jumpScroll
                    // scr_add_lines only works for nlines <= nrow - 1.
                    if (nlines >= this.nrow - 1){
                        
                        if (!(false
                              && false)) {
                        
                            //FIXME pointermath  scr_add_lines (buf, str - buf, nlines);  
                            this.scr_add_lines (buf, str_i, nlines);}
                        nlines = 0;
                        //str_i = buf_i;
                        str = buf; str_i=0;
                        eol = str_i + Math.min((this.ncol),( 2048));  // FIXME should_work
                        //;
                    }
                    if (str_i >= eol){   // FIXME should_work
                        
                        if (eol >=  2048){  // FIXME should_work
                            ;
                            och = NOCHAR;
                            break;}
                        else{
                            eol = Math.min((eol + this.ncol),(  2048));
                        }
                    }//str.length
                }//expect_false
                seq_begin = this.cmdbuf_ptr;
                
                och = ord(( this.next_char())); 
                
            }//for(;;) inner_for_loop
            //
            //
            if (!(false    && false)){
                //FIXED pointermath  scr_add_lines (buf, str - buf, nlines);
                this.scr_add_lines (buf, str_i, nlines);  
            }   
            
            //debugger;
            //refreshnow=true;
            if (refreshnow){
                //;
                this.scr_refresh();
                this.want_refresh = 1;
            }
        } //IS_CONTROL
        else {
             
         try {
            
            
             this.process_nonprinting (och);
            
         } catch ( e){  //FIXME exception
             // we ran ou of input, retry later
             if (e instanceof OutOfInputException){
                      this.cmdbuf_ptr = seq_begin;
                      break;} 
             else{
                 throw e;}
         }
                och = NOCHAR;
        }//else
    }//for(;;) outer_for_loop
}//cmd_parse
    rxvt_term.prototype.cr_seen=false;
// read the next character 
//wchar_t rxvt_term::next_char () 
rxvt_term.prototype.next_char =function(){
    //
  while (this.cmdbuf_ptr < this.cmdbuf_endp){
      var ret_char = this.cmdbuf[this.cmdbuf_ptr++];
      if( ord(ret_char) == 13 ){
          if(!this.cr_seen){
              this.cr_seen=true;
              this.cmdbuf_ptr--
          }
          else{
              this.cr_seen=false;
          }
      }
      //if((ord(c_char) <= 0x7f && ord(c_char) != 0x1b)){
      //;
      return ret_char;
      //return this.cmdbuf[this.cmdbuf_ptr++]; 
      //}
    }
  //;
  //;
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
//uint32_t rxvt_term::next_octet ()  
rxvt_term.prototype.next_octet =function()  {
    //;
    return this.cmdbuf_ptr < this.cmdbuf_endp
  ?  this.cmdbuf[this.cmdbuf_ptr++]  //? (unsigned char)*cmdbuf_ptr++ 
         : NOCHAR;
}
//static class out_of_input out_of_input; 
//they just created their own exception class with a null defintion
// class out_of_input out_of_input;
 
//wchar_t rxvt_term::cmd_getc () 
  rxvt_term.prototype.cmd_getc =function() {
      //;
      
    var c= ( this.next_char());   //wchar_t c = next_char (); 
  return c;
}
//uint32_t rxvt_term::cmd_get8 () {
    rxvt_term.prototype.cmd_get8 = function () {
        ;
        
  var c = this.next_octet (); //uint32_t c = next_octet ();
  return c;
}
 
//void rxvt_term::process_nonprinting (unicode_t ch)
rxvt_term.prototype.process_nonprinting =function(ch){
    ;
    
        if ( (  this.cmdbuf_endp - this.cmdbuf_ptr) < this.minimum_buf_size) {
            //    if ( (  foo.cmdbuf_endp - foo.cmdbuf_ptr) < foo.minimum_buf_size) {
            //this.cmdbuf_ptr--;
            throw new OutOfInputException();
        return;
    }
  switch (ch){
      case 0x1b:
      
        this.process_escape_seq ();
        break;
      case 0x5:	
      
        if (rs[Rs_answerbackstring])
          this.tt_write (rs [Rs_answerbackstring], (strlen)(rs [Rs_answerbackstring]));
        else
          this.tt_write (VT100_ANS, (strlen)(VT100_ANS));
        break;
      case 0x7:	
      
        this.scr_bell ();
        break;
      case 0x8:		
      
      //debusgger
        this.scr_backspace ();
      //console.log(this.screen.cur);
        break;
      case 0x9:		
      
        this.scr_tab (1);
        break;
      case 0xd:		
      
        this.scr_gotorc (0, 0, R_RELATIVE);
        break;
      case 0xb:		
      
      case 0xc:
      
      case 0xa:		
      
        this.scr_index (UP);
        break;
      case 0xe:		
      
      this.scr_charset_choose (1); 
        break;
      case 0xf:		
      
      this.scr_charset_choose (0); 
        break;
      //#ifdef EIGHT_BIT_CONTROLS
      // 8-bit controls
      case 0x90: 	
      
        this.process_dcs_seq ();
        break;
      case 0x9b: 	
      
        this.process_csi_seq ();
        break;
      case 0x9d: 	
      
        this.process_osc_seq ();
        break;
  default:
      //console.log(chr(ch));
      //#endif
    }
    ;
}
//rxvt_term::process_escape_vt52 (unicode_t ch)
rxvt_term.prototype.process_escape_vt52 = function (ch){
    ;
    
  //console.log("vt52");
  var row, col; //int row, col;
  switch (ch){
      case 'A':		
          
        this.scr_gotorc (-1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'B':		
          
        this.scr_gotorc (1, 0, R_RELATIVE | C_RELATIVE);
        break;
      case 'C':		
          
        this.scr_gotorc (0, 1, R_RELATIVE | C_RELATIVE);
        break;
      case 'D':		
          
        this.scr_gotorc (0, -1, R_RELATIVE | C_RELATIVE);
        break;
      case 'H':		
          
        this.scr_gotorc (0, 0, 0);
        break;
      case 'I':		
          
        this.scr_index (DN);
        break;
      case 'J':		
          
          //console.log("erase to end of screen");
        this.scr_erase_screen (0);
        break;
      case 'K':		
          
          //console.log("erase to end of line");
        this.scr_erase_line (0);
        break;
      case 'Y':         	
          
         
          //console.log("Case Y");
          row = ord(this.cmd_getc()) - ord(' ');
          col = ord(this.cmd_getc()) - ord(' ');
        this.scr_gotorc (row, col, 0);
        break;
      case 'Z':		
          
        this.tt_printf ("\033/Z");	 
        break;
      case '<':		
          
         this.set_privmode ((1<<18), 0);
        break;
  case 'F':     	 
      
  case 'G':            
      
        
        break;
      case '=':     	
          
      case '>':           
          
        
        break;
    }
}
//void rxvt_term::process_escape_seq () 
rxvt_term.prototype.process_escape_seq =function(){
    ;
    
  var ch= this.cmd_getc();  //unicode_t ch = cmd_getc ();
  if ( this.priv_modes & (1<<18)){
      this.process_escape_vt52 (ch);
      return;
    }
  var och=ord(ch);
    ;
  switch (och){
        
  case 35: //'#':
       // thats what it originally was, to compare with rxvt
        if (this.cmd_getc () == '8')
          this.scr_E ();
        break;
  case 40:// '(':
      
      this.scr_charset_set (0,this.cmd_getc ()); 
        break;
  case 41:// ')':
      
      this.scr_charset_set (1,this.cmd_getc ()); 
        break;
  case 42://'*': 
      
      this.scr_charset_set (2,this.cmd_getc ()); 
        break;
      case '+':
          
      this.scr_charset_set (3,this.cmd_getc ()); 
        break;
  case 55://'7':
        
        this.scr_cursor (SAVE);
        break;
  case 56://'8':
      
        this.scr_cursor (RESTORE);
        break;
  case 61://'=':
        
  case 62://'>':
        
         this.set_privmode ((1<<7), ch == '=');
        break;
      case 0x40:
          
        this.cmd_getc();
        break;
      case 0x44:
          
        this.scr_index (UP);
        break;
        
      case 0x45:		
          
        {
            var nlcr= [ chr(0xa), chr(0xd) ] ;   //wchar_t nlcr[] = { 0xa, 0xd };
            //this.scr_add_lines (nlcr, sizeof (nlcr) / sizeof (nlcr [0]), 1);
          this.scr_add_lines (nlcr, nlcr.length, 1);
        }
        break;
        
      case 0x47:		
          
        this.process_graphics ();
        break;
        
      case 0x48:		
          
        this.scr_set_tab (1);
        break;
        
      case 0x4d:			
          
        this.scr_index (DN);
        break;
        
      
        
        
      
            
        
      case 0x50:		
        
        this.process_dcs_seq ();
        break;
        
      case 0x5a:		
          
        this.tt_write (ESCZ_ANSWER, ESCZ_ANSWER.length);
        break;			
        
      case 0x5b:		
          
        this.process_csi_seq ();
        break;
        
      case 0x5d:		
          
        this.process_osc_seq ();
        break;
        
  case 99://'c':
      
    //mbstate.reset ();
        this.scr_poweron ();
        //scrollBar.show (1);
        break;
        
  case 110://'n':
      
      this.scr_charset_choose (2); 
        break;
        
  case 111://'o':
      
      this.scr_charset_choose (3); 
        break;
    }
}
 
//# 1002 "command.C.js"
//#define get_byte_array_bit(array, bit)                //#    (!! ((array)[ (bit) / 8] & (128 >> ((bit) & 7))))
//const unsigned char csi_defaults[] = 
   csi_defaults = [    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((1) << 4)	     | ((1) << 3) | ((1) << 2) | ((1) << 1) | (1)),	
    (((1) << 7) | ((1) << 6) | ((0) << 5) | ((0) << 4)	     | ((1) << 3) | ((1) << 2) | ((0) << 1) | (0)),	
    (((1) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4)	     | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)),	
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4)	     | ((0) << 3) | ((0) << 2) | ((1) << 1) | (0)),	
    (((1) << 7) | ((1) << 6) | ((1) << 5) | ((0) << 4)	     | ((1) << 3) | ((1) << 2) | ((1) << 1) | (0)),	
    (((0) << 7) | ((0) << 6) | ((1) << 5) | ((1) << 4)	     | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)),	
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4)	     | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0)),	
    (((0) << 7) | ((0) << 6) | ((0) << 5) | ((0) << 4)	     | ((0) << 3) | ((0) << 2) | ((0) << 1) | (0))	
                   ];
 
function get_byte_array_bit(lst1, val){
    switch(val) {
    case      10 :
    case      11 :
    case      35 :
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
    return true;
}
//void rxvt_term::process_csi_seq ()
rxvt_term.prototype.process_csi_seq =function(){
;
  //console.log("csi_seq");
  var ch, priv, i; //unicode_t ch, priv, i;  
  var och; //ord(ch)
  var nargs, p; //unsigned int nargs, p; 
  var n, ndef; //int n, ndef;  
  var arg = new Array(32); //int arg[32] = { }; 
  nargs = 0;
  priv = 0;
  ch = this.cmd_getc ();
  och = ord(ch);
  
  if ((ch >= '<' && ch <= '?') || ch == '!'){
      
      
      priv = ch;
      ch = this.cmd_getc ();
      och = ord(ch);
    }
  //console.log(this.row_buf[0].t);
  
  for (n = -1; och < 0x40; ){
    
      if ((ch) >= '0' && (ch) <='9'){
          
          
        if (n < 0){
          n = och - ord('0');}
        else{
          n = n * 10 + och - ord('0'); }
      }//isdigit
      else if (ch == ';'){
          if (nargs < 32)
            arg[nargs++] = n;
          n = -1;
        }
      else if (!((och) & 0xffffff60)){
          ;
        this.process_nonprinting (och); 
      }
      ch = this.cmd_getc ();
      och = ord(ch);
    }
  if (och > 0x7f){
      //console.log("och > CSI_7F)");
      
    return;
  }
  if (nargs < 32)
    arg[nargs++] = n;
  i = och - 0x40;
  //  ndef = get_byte_array_bit (csi_defaults, i);
  ndef = get_byte_array_bit (csi_defaults, i);
;
;
  for (p = 0; p < nargs; p++){
    if (arg[p] == -1){
      arg[p] = 0; } //this is a decent pick for a default
  }
  
  if (priv){
      switch (priv){
          case '>':
          
            if (och == 0x63)	
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
          ;
          ;
            if (ch == 'h' || ch == 'l' || ch == 'r' || ch == 's' || ch == 't')
              this.process_terminal_mode (och, priv, nargs, arg);
            break;
          case '!':
          
            if (och == 0x70){
                
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
      
      return;
    }
  switch (och){
        
      case 0x41:		
          
      case 0x65:		
          
        arg[0] = -arg[0];
        
      case 0x42:		
          
      case 0x6b:		
          
        this.scr_gotorc (arg[0], 0, RELATIVE);
        break;
      case 0x44:		
          
      case 0x6a: 		
          
        arg[0] = arg[0] ? -arg[0] : -1;
        
      case 0x43:		
        
      case 0x61:		
        
        this.scr_gotorc (0, arg[0] ? arg[0] : 1, RELATIVE);
        break;
      case 0x46:		
          
        arg[0] = -arg[0];
        
      case 0x45:		
          
        this.scr_gotorc (arg[0], 0, R_RELATIVE);
        break;
      case 0x47:		
          
      case 0x60:		
          
        this.scr_gotorc (0, arg[0] - 1, R_RELATIVE);
        break;
      case 0x64:		
          
        this.scr_gotorc (arg[0] - 1, 0, C_RELATIVE);
        break;
      case 0x48:		
          
          //debugger;
      case 0x66:		
          
      //debugger
        this.scr_gotorc (arg[0] - 1, nargs < 2 ? 0 : (arg[1] - 1), 0);
        break;
      case 0x5a:		
          
        arg[0] = -arg[0];
        
      case 0x49:		
          
        this.scr_tab (arg[0]);
        break;
      case 0x4a:		
          
        this.scr_erase_screen (arg[0]);
        break;
      case 0x4b:		
          
        this.scr_erase_line (arg[0]);
        break;
      case 0x40:		
          
      this.scr_insdel_chars (arg[0], INSERT); 
        break;
      case 0x4c:		
          
        this.scr_insdel_lines (arg[0], INSERT);
        break;
      case 0x4d:		
          
        this.scr_insdel_lines (arg[0], DELETE);
        break;
      case 0x58:		
          
      this.scr_insdel_chars (arg[0], ERASE); 
        break;
      case 0x50:		
          
      this.scr_insdel_chars (arg[0], DELETE); 
        break;
      case 0x54:		
          
        arg[0] = -arg[0];
        
      case 0x53:		
          
        this.scr_scroll_text (screen.tscroll, screen.bscroll, arg[0]);
        break;
      case 0x63:		
          
        this.tt_write (VT100_ANS,VT100_ANS.length);
        break;
      case 0x6d:		
          
        this.process_sgr_mode (nargs, arg);
        break;
      case 0x6e:		
          
        switch (arg[0]){
            case 5:			
                
              this.tt_printf ("\033[0n"); 
              break;
            case 6:			
                
              this.scr_report_position ();
              break;
            case 7:			
                
              if (this.option (Opt_insecure))
                this.tt_printf ("%-.250s\012", rs[Rs_display_name]); 
              break;
            case 8:			
                
                // FIXME process_xterm_seq (XTerm_title, RESNAME "-" VERSION, 0x9c);
              break;
          }
        break;
      case 0x67:		
          
        switch (arg[0]){
        case 0:			 
            
              this.scr_set_tab (0);
              break;
              		
              //
              		 
              //  
        case 3:			 
              
              		
                  
        case 5:			
              
          this.scr_set_tab (-1);
              break;
          }
        break;
      case 0x57:		
          
        switch (arg[0]){
        case 0:			 
            
              this.scr_set_tab (1);
              break;		
              		
              
        case 2:			 
              
              this.scr_set_tab (0);
              break;		
              		
              //
              		 
              //  
        case 5:			 
              
              this.scr_set_tab (-1);
              break;		
              		
              
          }
        break;
      case 0x6c:		
          
        if (arg[0] == 4)
          this.scr_insert_mode (0);
        else if (arg[0] == 20)
           this.priv_modes &= ~(1<<19);
        break;
      case 0x68:		
          
        if (arg[0] == 4)
          this.scr_insert_mode (1);
        else if (arg[0] == 20)
           this.priv_modes |= (1<<19);
        break;
        
      case 0x72:		
          
        if (nargs == 1)
          this.scr_scroll_region (arg[0] - 1, 10000 - 1);
        else if (nargs == 0 || arg[0] >= arg[1])
          this.scr_scroll_region (0, 10000 - 1);
        else
          this.scr_scroll_region (arg[0] - 1, arg[1] - 1);
        break;
      case 0x73:
          
        this.scr_cursor (SAVE);
        break;
      case 0x75:
          
        this.scr_cursor (RESTORE);
        break;
      
      case 0x74:
          
      this.process_window_ops (arg, nargs);
        break;
      
      case 0x78:		
          
        if (arg[0] == 0 || arg[0] == 1)
          this.tt_printf ("\033[%d;1;1;128;128;1;0x", arg[0] + 2); 
        break;
      default:
        break;
    }
}
//#if !1
//void rxvt_term::process_window_ops (const int *args, unsigned int nargs)
rxvt_term.prototype.process_window_ops =function( args,   nargs){
;
  var x, y; //int x, y;  
  //XWindowAttributes wattr;  //Window wdummy;//Display * const  dpy = this-> dpy; 
  if (nargs == 0)
    return;
  switch (args[0]){
      
      case 1:			
          
          //XMapWindow (dpy, parent[0]);
        break;
      case 2:			
          
          //XIconifyWindow (dpy, parent[0], display.screen);
        break;
      case 3:			
          
          //XMoveWindow (dpy, parent[0], args[1], args[2]);
        break;
      case 4:			
          
          //this.set_widthheight (args[2], args[1]);  //set_widthheight ((unsigned int)args[2], (unsigned int)args[1]);
        break;
      case 5:			
          
          //XRaiseWindow (dpy, parent[0]);
        break;
      case 6:			
          
          //XLowerWindow (dpy, parent[0]);
        break;
      case 7:			
          
          //this.scr_touch (true);
        break;
  case 8:			 
      
      this.set_widthheight (args[2], args[1]); 
      
      //this.scr_poweron();
        
        break;
      //case 9: NYI, TODO, restore maximized window or maximize window
      default:
          //if (args[0] >= 24)	 
            //set_widthheight ((unsigned int)width,
            //unsigned int) (args[1] * fheight));
        break;
      
      case 11:			
          
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //this.tt_printf ("\033[%dt", wattr.map_state == IsViewable ? 1 : 2); 
        break;
      case 13:			
          
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //XTranslateCoordinates (dpy, parent[0], wattr.root,
          //-wattr.border_width, -wattr.border_width,
          //&x, &y, &wdummy);
          //this.tt_printf ("\033[3;%d;%dt", x, y); 
        break;
      case 14:			
          
          //XGetWindowAttributes (dpy, parent[0], &wattr);
          //this.tt_printf ("\033[4;%d;%dt", wattr.height, wattr.width); 
        break;
  case 18:			 
      
      //this.tt_printf ("\033[8;%d;%dt", nrow, ncol); 
        break;
  case 19:			 
      
      //this.tt_printf ("\033[9;%d;%dt", nrow, ncol); 
        break;
                         
//# 1526 "command.C.js"
  }
}
//#endif
//char *rxvt_term::get_to_st (unicode_t &ends_how) 
rxvt_term.prototype.get_to_st =function(ends_how){
;
    console.log("get_to_st");
    var ch, och; //unicode_t ch; 
  var seen_esc = false; //bool seen_esc = false;
  var n = 0; //unsigned int n = 0;
  var string_ = new Array(STRING_MAX); //wchar_t string[STRING_MAX];
  while ((ch = this.cmd_getc ()) != NOCHAR){
      if (seen_esc){
          if (ch == 0x5c)	
            break;
          else
            return NULL;
        }
      else if (ch == 0x1b){
          seen_esc = true;
          continue;
        }
      else if (ch == 0x7 || ch == 0x9c)
        break;
      else if (ch == 0x16)
        ch = this.cmd_get8 ();
      else if (ch < 0x20)
        return NULL;	 
      seen_esc = false;
      if (n >= STRING_MAX - 1)
        // stop at some sane length
        return NULL;
      string_[n++] = ch;
    }
  string_[n++] = '\0';
  ends_how = (ch == 0x5c ? 0x1b : ch);
  return rxvt_wcstombs (string_); //FIXME rxvt_wcstombs what the hell does it do, seems to take wide_chars and return regualr chars
}
//void rxvt_term::process_dcs_seq () 
rxvt_term.prototype.process_dcs_seq =function(){
;
  console.log("dcs_seq");
  var s ; //char *s;  
  var eh; //unicode_t eh;  
  
  s = this.get_to_st (eh);
//POINTER_MATH non_applicable
//  if (s)
//    free (s);
  return;
}
//void rxvt_term::process_osc_seq () 
rxvt_term.prototype.process_osc_seq =function(){
    ;
    
  console.log("osc_seq");
  var ch, eh; //unicode_t ch, eh;
  var arg; //int arg;
  ch = this.cmd_getc ();
  for (arg = 0; (ch) >= '0' && (ch) <='9'; ch = this.cmd_getc ())
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
    ;
    
  if (str[0] == '?' && !str[1]){
    var c;  //      rgba c;
      pix_colors_focused[color].get (c);
        this.tt_printf ("\033]%d;rgb:%04x/%04x/%04x%c", report, c.r, c.g, c.b, resp); 
    }
  else
    set_window_color (color, str);
}
//void rxvt_term::process_xterm_seq (int op, const char *str, char resp) 
rxvt_term.prototype.process_xterm_seq =function(op,    str,  resp){
    ;
    
  var color; //int color; 
  var buf,  name, buf_i =0, name_i=0; //char *buf, *name;
  var query = str[0] == '?' && !str[1]; //bool query = str[0] == '?' && !str[1];
  var saveop= op;  //int saveop = op;
  //Display * const  dpy = this-> dpy; 
  assert (str != NULL);
  if (false)
    return;
  switch (op){
      case XTerm_name:
        set_title (str);
        
      case XTerm_iconName:
        set_icon_name (str);
        break;
      case XTerm_title:
        set_title (str);
        break;
      case XTerm_property:
            
//# 1716 "command.C.js"
        break;
      case XTerm_Color:
        //for (buf = (char *)str; buf && *buf;)
        for (buf =  str; buf &&  buf;){  //POINTER_MATH ????
            if ((name = strchr (buf, ';')) == NULL)
              break;
            name[name_i++] = '\0';  //name++ = '\0';
            color = atoi (buf) + minCOLOR;
            if (!((color) - ( minCOLOR) <= ( maxTermCOLOR) - ( minCOLOR)))
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
      case XTerm_Color_cursor:
        this.process_color_seq (op, Color_cursor, str, resp);
        break;
  case XTerm_Color_pointer_fg: 
        this.process_color_seq (op, Color_pointer_fg, str, resp); 
        break;
  case XTerm_Color_pointer_bg: 
      this.process_color_seq (op, Color_pointer_bg, str, resp); 
        break;
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
      case URxvt_Color_border:
        this.process_color_seq (op, Color_border, str, resp);
        break;
//# 1791 "command.C.js"
//# 1828 "command.C.js"
      case XTerm_logfile:
        // TODO, when secure mode?
        break;
//# 1844 "command.C.js"
      case XTerm_font:
        op = URxvt_font;
      case URxvt_font:
          
//# 1869 "command.C.js"
        break;
      case URxvt_version:
        if (query)
          this.tt_printf ("\33]%d;rxvt-unicode;%-.20s;%c;%c%c", 
                     op,
                     rs[Rs_name], VERSION[0], VERSION[2],
                     resp);
        break;
//# 1904 "command.C.js"
    }
}
//# 1924 "command.C.js"
//int rxvt_term::privcases (int mode, unsigned long bit)
rxvt_term.prototype.privcases =function(mode,   bit){
    ;
    ;  
    ;  
  var state; //int state;  
  if (mode == 's'){
      ;
      this.SavedModes |= ( this.priv_modes & bit);
      return -1;
    }
  else{
      ;
      if (mode == 'r'){
        ;
        state = (this.SavedModes & bit) ? 1 : 0;	
      }
      else{
        ;
        //state = (mode == 't') ? ! ( this.priv_modes & bit) : mode;
        if(mode == 't') {
            ;
            state = ! (priv_modes & bit);
        }
        else {
            ;
            state = mode;
        }
      }
      
      
       this.set_privmode (bit, state);
    }
    
    //There are issues with char to int casts, this is hacky
    ;
  return state;
}
//void rxvt_term::process_terminal_mode (int mode, int priv UN USED, unsigned int nargs, const int *arg) 
rxvt_term.prototype.process_terminal_mode =function(mode,  __unused__,   nargs,    arg){
;
;
;
//;
var cmode=chr(mode);
    var i, j; //  unsigned int i, j; 
    var state; //  int state; 
    var argtopriv  = [
                  {argval: 1,    bit:   (1<<6) },       // DECCKM
                  {argval: 2,    bit:   (1<<18) },
                  {argval: 3,    bit:   (1<<0) },          // DECCOLM
                  {argval: 4,    bit:   (1<<17) }, // DECSCLM
                  {argval: 5,    bit:   (1<<2) },       // DECSCNM
                  {argval: 6,    bit:   (1<<3) },    // DECOM
                  {argval: 7,    bit:   (1<<5) },     // DECAWM
                 //argval: 8,    bit:   auto-repeat keys         // DECARM
                  {argval: 9,    bit:   (1<<12) },
                 //argval: 18,   bit:   end FF to printer after print screen 
                 //argval: 19,   bit:   Print screen prints full screen/scorll region 
                  {argval: 25,   bit:   (1<<11) }, // cnorm/cvvis/civis
{ argval:30,          bit: (1<<14) },
                  {argval: 35,   bit:   (1<<10) },   // rxvt extension
                 //argval: 38,   bit:   tektronix mode          // DECTEK
                  {argval: 40,   bit:   (1<<1) },
                 //argval: 41,   bit:   xterm more fixes NYI
                 //argval: 45,   bit:   margin bell NYI
                 //argval: 46,   bit:   start logging
                  {argval: 47,   bit:   (1<<4) },
                  {argval: 66,   bit:   (1<<7) },       // DECPAM/DECPNM
                  {argval: 67,   bit:   (1<<9) },   // DECBKM
                  {argval: 1000, bit:   (1<<13) },
                  {argval: 1002, bit:   (1<<20) },
                  {argval: 1003, bit:   (1<<21) },
                  {argval: 1010, bit:   (1<<15) }, // rxvt extension
                  {argval: 1011, bit:   (1<<16) }, // rxvt extension
                 //argval: 1035, bit:   enable modifiers for alt, numlock NYI
                 //argval: 1036, bit:   send ESC for meta keys NYI
                 //argval: 1037, bit:   send DEL for keypad delete NYI
                  {argval: 1047, bit:   (1<<4) },
                 //argval: 1048, bit:   save and restore cursor
                  {argval: 1049, bit:   (1<<4) }, 
                 //argval: 1051, bit:   1052, 1060, 1061 keyboard emulation NYI
                  {argval: 2004, bit:   (1<<22) }
                      ];
  if (nargs == 0)
    return;
  
  if (cmode == 'l')
    mode = 0;		
  else if (cmode == 'h')
    mode = 1;		
  for (i = 0; i < nargs; i++){
      state = -1;
      
        //  for (j = 0; j < (sizeof (argtopriv)/sizeof (argtopriv[0])); j++)
      for (j = 0; j < argtopriv.length; j++)
        if (argtopriv[j].argval == arg[i]){
            state = this.privcases (mode, argtopriv[j].bit);
            ;
            break;
          }
      
      
      switch (arg[i]){
          case 1048:		
            
            if (this.option (Opt_secondaryScreen))
              if (mode == 0)
                this.scr_cursor (RESTORE);
              else if (mode == 1)
                this.scr_cursor (SAVE);
            break;
        }
      
      if (state >= 0)
        
        switch (arg[i]){
              
            case 2:			
            
              
               this.set_privmode ((1<<18), 1);
              break;
            case 3:			
                
                    
              if ( this.priv_modes & (1<<1))
                  //this.set_widthheight ((state ? 132 : 80) * fwidth, 24 * fheight); 
                  this.set_widthheight ((state ? 132 : 80), 24); 
              break;
            case 4:			
                
              this.set_option (Opt_jumpScroll, !state);
              break;
            case 5:			
                
              this.scr_rvideo_mode (state);
              break;
            case 6:			
                
              this.scr_relative_origin (state);
              break;
            case 7:			
                
              this.scr_autowrap (state);
              break;
            
            case 9:			
              
              if (state)		
                 this.priv_modes &= ~((1<<13)|(1<<20)|(1<<21));
              break;
            case 30:
              
              //maybe later
              
              break;
            case 25:		
              
              this.scr_cursor_visible (state);
              break;
            
              
            
                  
            case 47:		
              
              this.scr_change_screen (state);
              break;
            
            
            case 1000:		
              
              if (state)		
                 this.priv_modes &= ~((1<<12)|(1<<20)|(1<<21));
              break;
            case 1002:
                
            case 1003:
                
              if (state){
                   this.priv_modes &= ~((1<<12)|(1<<13));
                   this.priv_modes &= arg[i] == 1003 ? ~(1<<20) : ~(1<<21);
                  vt_emask_mouse = PointerMotionMask; 
                }
              else
                vt_emask_mouse = NoEventMask;
              vt_select_input ();
              break;
            case 1010:		
                
              this.set_option (Opt_scrollTtyOutput, !state);
              break;
            case 1011:		
                
              this.set_option (Opt_scrollTtyKeypress, state);
              break;
            case 1047:		
                
              if (option (Opt_secondaryScreen))
                if (!state)
                  this.scr_erase_screen (2);
              this.scr_change_screen (state);
              break;
            case 1049:		
                
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
}
//void rxvt_term::process_sgr_mode (unsigned int nargs, const int *arg) 
rxvt_term.prototype.process_sgr_mode =function(nargs,    arg){
    ;
    
  var i; //unsigned int i; 
  var rendset; //short rendset; 
  var rendstyle; //int rendstyle;
  if (nargs == 0){
      this.scr_rendition (0, ~0);
      return;
    }
  for (i = 0; i < nargs; i++){
      rendset = -1;
      switch (arg[i]){
          case 0:
            rendset = 0, rendstyle = ~0;
            break;
          case 1:
            rendset = 1, rendstyle = 0x00004000;
            break;
            //case 2: // low intensity 
          case 3:
            rendset = 1, rendstyle = 0x00008000;
            break;
          case 4:
            rendset = 1, rendstyle = 0x00040000;
            break;
          case 5: // slowly blinking
          case 6: // rapidly blinking
            rendset = 1, rendstyle = 0x00010000;
            break;
          //case 6: // scoansi light background
          case 7:
            rendset = 1, rendstyle = 0x00020000;
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
            rendset = 0, rendstyle = 0x00004000;
            break;
      case 22: // normal intensity 
            rendset = 0, rendstyle = 0x00004000;
            break;
          case 23: // disable italic
            rendset = 0, rendstyle = 0x00008000;
            break;
          case 24:
            rendset = 0, rendstyle = 0x00040000;
            break;
          case 25:
            rendset = 0, rendstyle = 0x00010000;
            break;
          case 26: // variable spacing (iso 8613)
            rendset = 0, rendstyle = 0x00010000;
            break;
          case 27:
            rendset = 0, rendstyle = 0x00020000;
            break;
          //case 28: // visible. NYI
          //case 29: // not crossed-out
        }
      if (rendset != -1){
          this.scr_rendition (rendset, rendstyle);
          continue;		
        }
      switch (arg[i]){
          case 30:
          case 31:		
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          //FIXME
          //this.scr_color ( (minCOLOR +  //this.scr_color ((unsigned int) (minCOLOR + (arg[i] - 30)), Color_fg);(arg[i] - 30)), Color_fg);
            break;
          case 38: // set fg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
                //FIXME this.scr_color ( (minCOLOR +  //this.scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_fg);arg[i + 2]), Color_fg);
                i += 2;
              }
            break;
          case 39:		
            this.scr_color (Color_fg, Color_fg);
            break;
          case 40:
          case 41:		
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
           this.scr_color ( (minCOLOR +  (arg[i] - 40)), Color_bg); //scr_color ((unsigned int) (minCOLOR + (arg[i] - 40)), Color_bg);
            break;
          case 48: // set bg color, ISO 8613-6
            if (nargs > i + 2 && arg[i + 1] == 5){
 //scr_color ((unsigned int) (minCOLOR + arg[i + 2]), Color_bg); 
                 this.scr_color ( (minCOLOR +  arg[i + 2]), Color_bg);
                i += 2;
              }
            break;
          case 49:		
            this.scr_color (Color_bg, Color_bg);
            break;
          //case 50: // not variable spacing
//# 2344 "command.C.js"
        }
    }
}
//void rxvt_term::process_graphics () 
rxvt_term.prototype.process_graphics =function(){
;
  //FIXME causes an infintie loop  
//# 2368 "command.C.js"
}
//void rxvt_term::tt_printf (const char *fmt,...) 
rxvt_term.prototype.tt_printf =function( fmt){
;
  console.log(fmt);
}
    rxvt_term.prototype.tt_winch =function( ){
        //;
    
      //console.log("tt_winch called, it does nothing ");
    }
//const unsigned int MAX_PTY_WRITE = 255; // minimum MAX_INPUT 
   MAX_PTY_WRITE = 255; // minimum MAX_INPUT
//void rxvt_term::tt_write (const char *data, unsigned int len) 
rxvt_term.prototype.tt_write =function( data,   len){
;
    if(    console){
        console.log(data);
    }
    
//# 2429 "command.C.js"
}
//void rxvt_term::pty_write () 
rxvt_term.prototype.pty_write =function(){
;
//int written = write (pty->pty, v_buffer, min (v_buflen, MAX_PTY_WRITE)); 
 var written= write (pty.pty, v_buffer, Math.min((v_buflen),( MAX_PTY_WRITE))); 
  if (written > 0){
      v_buflen -= written;
      if (v_buflen == 0){
          free (v_buffer);
          v_buffer = 0;
          //pty_ev.set (ev::READ);
          return;
        }
      console.log("tried to memmove",( v_buffer + written),(v_buffer),( v_buflen));;
    }
  else if (written != -1 || (errno != EAGAIN && errno != EINTR))
      this.cmdbuf_ptr;
      //    pty_ev.set (ev::READ);
}
//# 2 "expand_both.h" 2
//# 1 "screen.C.js" 1
//# 89 "screen.C.js"
 
//void rxvt_term::scr_blank_line (line_t &l, unsigned int col, unsigned int width, rend_t efs){ 
rxvt_term.prototype.scr_blank_line =function(l, col, width, efs){ 
  
  
  efs &= ~(0x00008000 | 0x00004000 | 0x00010000 | 0x00020000 | 0x00040000); //remove italic etc. fontstyles
  //FIXME efs = (((efs) & ~0xff000000) | (( this.fontset[0].find_font (' ')) << 24));
  //efs = (((efs) & ~0xff000000UL ) | (((this)->fontset[0]->find_font (' ')) << 24));
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
//void rxvt_term::scr_blank_screen_mem (line_t &l, rend_t efs) 
rxvt_term.prototype.scr_blank_screen_mem =function(l,  efs){ 
    //    
  l = this.scr_blank_line (l, 0,  this.ncol, efs);
  l.l = 0;
  l.f = 0;
  return l;
}
//nuke a single wide character at the given column 
//void rxvt_term::scr_kill_char (line_t &l, int col) 
rxvt_term.prototype.scr_kill_char =function(l,  col){ 
    // 
  //find begin
    while (col > 0 && ord(l.t[col]) == NOCHAR)
    col--;
  var rend= l.r[col] & ~(0x00008000 | 0x00004000 | 0x00010000 | 0x00020000 | 0x00040000);   //rend_t rend = l.r[col] & ~(0x00008000 | 0x00004000 | 0x00010000 | 0x00020000 | 0x00040000);
  //FIXME is this a cast, how does the -> interact with the FONTSET macro???
  //rend = (((rend) & ~0xff000000) | (( this.fontset[0].find_font (' ')) << 24)); 
  //FIXME check macroexpansion rend = (((rend) & ~0xff000000) | (( this.fontset[0]->find_font (' ')) << 24));  
  //found start, nuke
  do {
    l.t[col] = ' ';
    l.r[col] = rend;
    col++;
  } while (col <  this.ncol && ord(l.t[col]) == NOCHAR);
}
 
my_alloc = function(num, obj){
  var ptr = [], ptr_i = 0;
  for(;ptr_i < num; ptr_i++){
    ptr[ptr_i]=new obj();
  }
  return ptr;
}
rxvt_term.prototype.lresize = function (l)   {
    if (!l.t)
      return;
    // not quite sure what to do here yet, this is probably wrong 
    //l.t = (text_t *)talloc->alloc (l.t, prev_ncol * sizeof (text_t));
    //l.r = (rend_t *)ralloc->alloc (l.r, prev_ncol * sizeof (rend_t));
    
    l.l = Math.min((l.l),( this.ncol));
    if (this.ncol > this.prev_ncol)
      this.scr_blank_line (l, this.prev_ncol, this.ncol - this.prev_ncol, (0 | Color_fg | (Color_bg << 7)));
    //
  }
//void rxvt_term::scr_reset (){ 
rxvt_term.prototype.scr_reset =function(){ 
    
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
        this.scr_blank_screen_mem ((this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]), (0 | Color_fg | (Color_bg << 7)));
        this.scr_blank_screen_mem (this.swap_buf [row], (0 | Color_fg | (Color_bg << 7)));
        this.scr_blank_screen_mem (this.drawn_buf[row], (0 | Color_fg | (Color_bg << 7)));
      }
      //memset (charsets, 'B', sizeof (charsets)); 
      this.charsets= memset (this.charsets, 'B', 1);
      this.rstyle = (0 | Color_fg | (Color_bg << 7));
      this.screen.flags = ((1<<1) | (1<<2));
      this.screen.cur.row = this.screen.cur.col = 0;
      this.screen.charset = 0; 
      this.current_screen = PRIMARY;
      this.scr_cursor (SAVE);
      this.swap.flags = ((1<<1) | (1<<2));
      this.swap.cur.row = this.swap.cur.col = 0;
      this.swap.charset = 0; 
      this.current_screen = SECONDARY;
      this.scr_cursor (SAVE);
      this.current_screen = PRIMARY;
      this.selection.text = ""; //FIXME
      this.selection.len = 0;
      this.selection.op = SELECTION_CLEAR;
      this.selection.screen = PRIMARY;
      this.selection.clicks = 0;
    }
  else{
      
    
//# 296 "screen.C.js"
      this.drawn_buf = my_alloc(this.nrow, line_t);
      this.swap_buf  = my_alloc(this.nrow, line_t);
;
      for ( var row = Math.min((this.nrow),( this.prev_nrow)); row--; ){  //for (int row = Math.min((this.nrow),( prev_nrow)); row--; )
          ;
        this.lresize ( this.drawn_buf[row]);  //lresize (drawn_buf[row]);
        this.lresize ( this.swap_buf [row]);  //lresize (swap_buf [row]);
        }
;
;
      for ( row =  this.prev_nrow; row < this.nrow; row++){  //for (int row = prev_nrow; row < nrow; row++)
          ;
           this.swap_buf [row].clear (); this.scr_blank_screen_mem ( this.swap_buf [row], (0 | Color_fg | (Color_bg << 7)));
           this.drawn_buf[row].clear (); this.scr_blank_screen_mem ( this.drawn_buf[row], (0 | Color_fg | (Color_bg << 7)));
        }
      var  old_buf =  this.row_buf, old_buf_i= this.row_buf_i;  //line_t *old_buf = row_buf;
      //row_buf = (line_t *)rxvt_calloc ( this.total_rows + nrow, sizeof (line_t));
       this.row_buf   = my_alloc ( this.total_rows + this.nrow, line_t),  this.row_buf_i=0; 
      //previous row   //int p    = (((term_start + prev_nrow) + ( prev_total_rows)) % ( prev_total_rows));  //previous row
      var p= ((( this.term_start +  this.prev_nrow) + ( prev_total_rows)) % ( prev_total_rows));  
      //int pend = (((term_start + top_row  ) + ( prev_total_rows)) % ( prev_total_rows)); 
      var pend= ((( this.term_start +  this.top_row  ) + ( prev_total_rows)) % ( prev_total_rows));   
      var q=  this.total_rows; //rewrapped row   //int q    =  this.total_rows;
      if ( this.top_row){
          //Re-wrap lines. This is rather ugly, possibly because I am too dumb
          //to come up with a lean and mean algorithm.
          //TODO: maybe optimise when width didnt change
         var  ocur = this.screen.cur;  //row_col_t ocur = screen.cur;
          ocur.row = ((( this.term_start + ocur.row) + ( prev_total_rows)) % ( prev_total_rows));
          do
            {
              p = (((p - 1) + ( prev_total_rows)) % ( prev_total_rows));
              var plines= 1;   //int plines = 1;
              var indice = (((p) + ( prev_total_rows)) % ( prev_total_rows));
              var llen= old_buf [(((p) + ( prev_total_rows)) % ( prev_total_rows))].l;   //int llen = old_buf [(((p) + ( prev_total_rows)) % ( prev_total_rows))].l;
              while (p != pend && old_buf [(((p - 1) + ( prev_total_rows)) % ( prev_total_rows))].is_longer ()){
                  p = (((p - 1) + ( prev_total_rows)) % ( prev_total_rows));
                  plines++;
                  llen +=  this.prev_ncol;
                }
              var qlines= Math.max((0),( (llen - 1) /  this.ncol)) + 1;   //FIXME floor division   int qlines = Math.max((0),( (llen - 1) / ncol)) + 1;
              //drop partial lines completely
              if (q < qlines)
                break;
              q -= qlines;
              var lofs= 0;   //int lofs = 0;
              var  qline = [], qline_i=0;  //line_t *qline;
              //re-assemble the full line by destination lines
              for ( var qrow = q; qlines--; qrow++){  //for (int qrow = q; qlines--; qrow++){
                  
                  //this.row_buf[ this.row_buf_i + qrow]=new line_t();  //lalloc (*qline);  
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
                      prow = (((p + prow) + ( prev_total_rows)) % ( prev_total_rows));
                      //we only adjust the cursor _row_ and put it into 
                      //the topmost line of "long line" it was in, as
                      //this seems to upset applications/shells/readline
                      //least.
                      if (prow == ocur.row)
                        this.screen.cur.row = q - ( this.total_rows - this.nrow);
                      //line_t &pline = ; //FIXED
                      var pline = old_buf[prow];
                      //int len = min (min (prev_ncol - pcol, ncol - qcol), llen - lofs); 
                      var len= Math.min((Math.min(( this.prev_ncol - pcol),(  this.ncol - qcol))),( llen - lofs)); 
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
               this.row_buf[ this.row_buf_i + qrow].l = llen ? (((llen - 1) + (  this.ncol)) % (  this.ncol)) + 1 : 0;
               this.row_buf[ this.row_buf_i + qrow].is_longer (0);
//FIXED: possible_pointer ^|                     scr_blank_line (*qline, qline->l, ncol - qline->l, (0 | Color_fg | (Color_bg << 7))); 
       
               this.row_buf[ this.row_buf_i + qrow] =this.scr_blank_line ( qline, qline.l,  this.ncol - qline.l, (0 | Color_fg | (Color_bg << 7)));
            }
          while (p != pend && q > 0);
           this.term_start =  this.total_rows - this.nrow;
           this.top_row = q -  this.term_start;
          //make sure all terminal lines exist
          while ( this.top_row > 0)
            this.scr_blank_screen_mem ((this.row_buf [((((this).term_start +   -- this.top_row) + ( (this).total_rows)) % ( (this).total_rows))]), (0 | Color_fg | (Color_bg << 7)));
      }
      else{
          //if no scrollback exists (yet), wing, instead of wrap
        //for (int row = min (this.nrow, prev_nrow); row--; )
         for (row = Math.min((this.nrow),(  this.prev_nrow)); row--; ){  
           //line_t &pline = old_buf [(((term_start + row) + ( prev_total_rows)) % ( prev_total_rows))];
           var pline = old_buf [((( this.term_start + row) + ( prev_total_rows)) % ( prev_total_rows))]; 
            qline =  this.row_buf [row];  //line_t &qline =  this.row_buf [row];
              qline = pline;
              this.lresize (qline);
         }
           for (  row =  this.prev_nrow; row < this.nrow; row++){  //for (int row = prev_nrow; row < nrow; row++)
               this.row_buf [row].clear (); this.scr_blank_screen_mem ( this.row_buf [row], (0 | Color_fg | (Color_bg << 7)));
            }
           this.term_start = 0;
        }
      //free (old_buf);  
      //delete old_ta;
      //delete old_ra;
      (this.screen.cur.row)=(this.screen.cur.row) < ( 0) ? ( 0) : (this.screen.cur.row) > ( this.nrow - 1) ? ( this.nrow - 1) : (this.screen.cur.row);
      (this.screen.cur.col)=(this.screen.cur.col) < ( 0) ? ( 0) : (this.screen.cur.col) > (  this.ncol - 1) ? (  this.ncol - 1) : (this.screen.cur.col);
  }
  free ( this.tabs);
   this.tabs = [],  this.tabs_i=0;  //tabs = (char *)rxvt_malloc (ncol);  
   for ( var col =  this.ncol; --col; )  //for (int col = ncol; --col; ) 
     this.tabs [col] = col % 8 == 0;
  ;
  this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.mark.row =  this.selection.mark.col                              =  this.selection.end.row =  this.selection.end.col = 0;
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
  false;
  ;
    ;;
}  
//# 617 "screen.C.js"
rxvt_term.prototype.set_widthheight = function( newwidth, newheight){
    
    
    if( (!newwidth == 0 || !newheight == 0) && (this.ncol !=newwidth || this.nrow != newheight)){
        if (!newwidth == 0){
            this.ncol=newwidth;}
        if (!newheight == 0){
            this.nrow = newheight;}
        // a bit of a hack,  look at resize_all_windows 
        this.scr_reset();
    }
    //this.have_called_set_widthheight = true;
}
//void rxvt_term::scr_release () 
rxvt_term.prototype.scr_release =function(){ 
    
  if (this.row_buf){
      
//# 661 "screen.C.js"
      //this.row_buf=[],  this.swap_buf=[],this.drawn_buf=[], this.row_buf_i=0, this.tabs_i=0;
    this.row_buf=false,  this.swap_buf=false,this.drawn_buf=false, this.row_buf_i=0, this.tabs_i=0;
    }
}
//void rxvt_term::scr_poweron (){ 
rxvt_term.prototype.scr_poweron =function(){ 
    
  this.scr_release ();
   this.prev_nrow =  this.prev_ncol = 0;
  this.rvideo_mode = false;
  this.scr_soft_reset ();
  this.scr_reset ();
  this.scr_clear (true);
  this.scr_refresh ();
    //this.scr_recolour();
    //this.scr_clear();
    //this.scr_touch();
}
//void rxvt_term::scr_soft_reset () 
rxvt_term.prototype.scr_soft_reset =function(){ 
    
  
    //;
        
  if ( this.current_screen != PRIMARY)
    this.scr_swap_screen ();
  this.scr_scroll_region (0, 10000 - 1);
  this.scr_rendition (0, ~0);
  this.scr_insert_mode (0);
  ;
}
 
//void rxvt_term::scr_cursor (cursor_mode mode){ 
rxvt_term.prototype.scr_cursor =function(mode){ 
    
    
//# 751 "screen.C.js"
    var s ;  //screen_t *s;
  if ( this.current_screen == SECONDARY)
    s = this.swap;
  else
    s = this.screen;  //s = &screen;
  switch (mode){
      case SAVE:
          
        s.s_cur.row = this.screen.cur.row;
        s.s_cur.col = this.screen.cur.col;
        s.s_rstyle = rstyle;
        s.s_charset = this.screen.charset; 
        //FIXME s.s_charset_char = this.charsets[this.screen.charset]; 
        break;
      case RESTORE:
          
       this.want_refresh = 1;
        this.screen.cur.row = s.s_cur.row;
        this.screen.cur.col = s.s_cur.col;
        this.screen.flags &= ~(1<<4);
        rstyle = s.s_rstyle;
        this.screen.charset = s.s_charset; 
        //FIXME this.charsets[this.screen.charset] = s.s_charset_char; 
        //set_font_style ();
        break;
    }
  
  Math.min((s.cur.row),( this.nrow - 1));
  Math.min((s.cur.col),(  this.ncol - 1));
    ;
}
//void rxvt_term::scr_swap_screen () 
rxvt_term.prototype.scr_swap_screen =function(){
    
  if (!this.option (Opt_secondaryScreen))
    return;
    
    for (var i =  this.prev_nrow; i--; ) { //for (int i = prev_nrow; i--; )
        var foo = (this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))]);
                   (this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))])=this.swap_buf[i];
                   this.swap_buf[i] = foo;
                   }
            //,  this.swap_buf [i]);  }//::var _______ = ((this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))])); ((this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))]))= ( swap_buf [i]); ( swap_buf [i])=_______;;
            //  var _______ = (this.screen.cur); (this.screen.cur)= ( this.swap.cur); ( this.swap.cur)=_______;;  //::var _______ = (screen.cur); (screen.cur)= ( swap.cur); ( swap.cur)=_______;;
        var foo = this.screen.cur; this.screen.cur = this.swap.cur; this.swap.cur = foo;
  this.screen.cur.row = (this.screen.cur.row)=(this.screen.cur.row) < ( 0) ? ( 0) : (this.screen.cur.row) > (  this.prev_nrow - 1) ? (  this.prev_nrow - 1) : (this.screen.cur.row);
  this.screen.cur.col = (this.screen.cur.col)=(this.screen.cur.col) < ( 0) ? ( 0) : (this.screen.cur.col) > (  this.prev_ncol - 1) ? (  this.prev_ncol - 1) : (this.screen.cur.col);
}
// void rxvt_term::scr_change_screen (int scrn){ 
rxvt_term.prototype.scr_change_screen =function( scrn){ 
  ;
  if (scrn ==  this.current_screen)
    return;
 this.want_refresh = 1;
   this.view_start = 0;
   this.selection_check (2);        
  var i=  this.current_screen;  this.current_screen  = scrn; scrn = i
  if ( this.option (Opt_secondaryScreen)){
      this.num_scr = 0;
      this.scr_swap_screen ();
      var _______ = (this.screen.charset); (this.screen.charset)= ( swap.charset); ( swap.charset)=_______;;   //::var _______ = (this.screen.charset); (this.screen.charset)= ( swap.charset); ( swap.charset)=_______;; 
      var _______ = (this.screen.flags); (this.screen.flags)= (   swap.flags); (   swap.flags)=_______;;  //::var _______ = (screen.flags); (screen.flags)= (   swap.flags); (   swap.flags)=_______;;
      this.screen.flags |= (1<<1);
      swap.flags   |= (1<<1);
    }
  else
    if ( this.option (Opt_secondaryScroll))
      this.scr_scroll_text (0,  this.prev_nrow - 1,  this.prev_nrow);
}
//clear WrapNext indicator, solidifying position on next line
//void rxvt_term::scr_do_wrap () 
rxvt_term.prototype.scr_do_wrap =function(){ 
    
  if (!(this.screen.flags & (1<<4)))
    return;
  this.screen.flags &= ~(1<<4);
  this.screen.cur.col = 0;
  if (this.screen.cur.row == this.screen.bscroll)
    this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, 1);
  else if (this.screen.cur.row < this.nrow - 1)
    this.screen.cur.row++;
}
//void rxvt_term::scr_color (unsigned int color, int fgbg){ 
rxvt_term.prototype.scr_color =function(  color,  fgbg){ 
    
  if (!((color) - ( minCOLOR) <= ( maxTermCOLOR) - ( minCOLOR)))
    color = fgbg;
  if (fgbg == Color_fg)
    rstyle = (((rstyle) & ~0x0000007f)   | ( color));
  else
    rstyle = (((rstyle) & ~0x00003f80)   | (( color)<<7));
}
//void rxvt_term::scr_rendition (int set, int style) 
rxvt_term.prototype.scr_rendition =function( set,  style){ 
    
  if (set)
    rstyle |= style;
  else if (style == ~0)
    rstyle = (0 | Color_fg | (Color_bg << 7));
  else
    rstyle &= ~style;
    ;
}
//int rxvt_term::scr_scroll_text (int row1, int row2, int count){ 
rxvt_term.prototype.scr_scroll_text =function( row1,  row2,  count){ 
    
  if (count == 0 || (row1 > row2))
    return 0;
 this.want_refresh = 1;
  this.num_scr += count;
  if (count > 0
      && row1 == 0
      && ( this.current_screen == PRIMARY ||  this.option (Opt_secondaryScroll))){
       this.top_row = Math.max(( this.top_row - count),( - this.saveLines));
      //scroll everything up 'count' lines
       this.term_start = ( this.term_start + count) %  this.total_rows;
      //sever bottommost line
      {
        var l = (this.row_buf [((((this).term_start +   row2 - count) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t &l = (this.row_buf [((((this).term_start +   row2 - count) + ( (this).total_rows)) % ( (this).total_rows))]);
        l.is_longer (0);
        //l.touch ();
        l.modified=true;
      }
      //erase newly scrolled-in lines
       for (var i = count; i--; ){  //for (int i = count; i--; ){
         var l = (this.row_buf [((((this).term_start +   this.nrow - 1 - i) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t &l = (this.row_buf [((((this).term_start +   this.nrow - 1 - i) + ( (this).total_rows)) % ( (this).total_rows))]);
          //optimize if already cleared, can be significant on slow machines
          //could be rolled into scr_blank_screen_mem 
          if (l.r && l.l <  this.ncol - 1 && !((l.r[l.l + 1] ^ rstyle) & (0x0000007f | 0x00003f80))){
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
          var l1 = (this.row_buf [((((this).term_start +   i - count) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t &l1 = (this.row_buf [((((this).term_start +   i - count) + ( (this).total_rows)) % ( (this).total_rows))]);
          var l2 = (this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t &l2 = (this.row_buf [((((this).term_start +   i) + ( (this).total_rows)) % ( (this).total_rows))]);
          var _______ = (l1); (l1)= ( l2); ( l2)=_______;;  //::var _______ = (l1); (l1)= ( l2); ( l2)=_______;;
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
              this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.mark.row =  this.selection.mark.col                              =  this.selection.end.row =  this.selection.end.col = 0;
               this.selection.op = SELECTION_CLEAR;
            }
        }
      //finally move the view window, if desired
      if ( this.option (Opt_scrollWithBuffer)
          &&  this.view_start != 0
          &&  this.view_start != - this.saveLines)
        this.scr_page (UP, count);
      if (false)
        false;
    }
  else{
      if ( this.selection.op &&  this.current_screen ==  this.selection.screen){
          if (( this.selection.beg.row < row1 &&  this.selection.end.row > row1)
              || ( this.selection.beg.row < row2 &&  this.selection.end.row > row2)
              || ( this.selection.beg.row - count < row1 &&  this.selection.beg.row >= row1)
              || ( this.selection.beg.row - count > row2 &&  this.selection.beg.row <= row2)
              || ( this.selection.end.row - count < row1 &&  this.selection.end.row >= row1)
              || ( this.selection.end.row - count > row2 &&  this.selection.end.row <= row2)){
              this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.mark.row =  this.selection.mark.col                              =  this.selection.end.row =  this.selection.end.col = 0;
               this.selection.op = SELECTION_CLEAR;
            }
          else if ( this.selection.end.row >= row1 &&  this.selection.end.row <= row2){
              
               this.selection.beg.row  -= count;
               this.selection.end.row  -= count;
               this.selection.mark.row -= count;
               this.selection_check (0);
            }
        }
      //use a simple and robust scrolling algorithm, this
      //part of scr_scroll_text is not time-critical.
       var rows= row2 - row1 + 1;   //int rows = row2 - row1 + 1;
      count = Math.min((count),( rows));  //min_it  (count, rows);
      //line_t *temp_buf =  this.row_buf + total_rows;  
      var temp_buf =  this.row_buf, temp_buf_i=this.row_buf_i+ this.total_rows;
       for (var row = 0; row < rows; row++){  //for (int row = 0; row < rows; row++){
          temp_buf [temp_buf_i+row] = (this.row_buf [((((this).term_start +   row1 + (row + count + rows) % rows) + ( (this).total_rows)) % ( (this).total_rows))]);
          if (!((row + count) - ( 0) <  ( rows) - ( 0)))
            this.scr_blank_screen_mem (temp_buf [temp_buf_i + row], rstyle);
        }
       for ( row = 0; row < rows; row++)  //for (int row = 0; row < rows; row++)
        (this.row_buf [((((this).term_start +   row1 + row) + ( (this).total_rows)) % ( (this).total_rows))]) = temp_buf [temp_buf_i + row];
    }
  return count;
}
//void rxvt_term::scr_add_lines (const wchar_t *str, int len, int minlines) 
rxvt_term.prototype.scr_add_lines =function(   str,  len,  minlines){ 
    
    var str_i = 0;
  if (len <= 0)               
    return;
  var checksel;  //unsigned char checksel;   
  var c;  //unicode_t c; 
  var ncol= this.ncol;   //int ncol = this->ncol;
  var strend = str, strend_i = len;  //const wchar_t *strend = str + len; 
 this.want_refresh = 1;
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
  if (minlines > 0){
      
      minlines += this.screen.cur.row - this.screen.bscroll;
      //min_it (minlines, screen.cur.row - top_row);
      minlines = Math.min((minlines),( this.screen.cur.row -  this.top_row));
      if (minlines > 0 && this.screen.tscroll == 0 && this.screen.bscroll == this.nrow - 1){
          ;
          // _atleast_ this many lines need to be scrolled 
          str_i = 0;
          //FIXME not sure what this supposed to be, look at the original 
          this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, minlines);
          this.screen.cur.row -= minlines;
        }
    }
    var row= this.screen.cur.row;   //int row = screen.cur.row;
  checksel =  this.selection.op &&  this.current_screen ==  this.selection.screen ? 1 : 0;
    var  line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);  
  while (str_i < strend_i){  //while (str < strend)
    //c = (unicode_t)*str++; 
      c =  str[str_i++]; //convert to rxvt-unicodes representation 
      ;
      if ((ord(c) < 0x20))
          if (ord(c) == 0xa){
              //;
              line.l= Math.max((line.l),(this.screen.cur.col));
            this.screen.flags &= ~(1<<4);
            var this_screen_cur_row = this.screen.cur.row , this_screen_bscroll =this.screen.bscroll, this_nrow = this.nrow;
            if (this.screen.cur.row == this.screen.bscroll){
                ;
                this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, 1);}
            else if (this.screen.cur.row < (this.nrow - 1)){
                ;
                row = ++this.screen.cur.row;
            }
            line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);  
            continue;
          }
          else if (ord(c) == 0xd){
              //
          line.l= Math.max((line.l),(this.screen.cur.col));
            this.screen.flags &= ~(1<<4); 
            this.screen.cur.col = 0;
            continue;
          }
          else if (ord(c) == 0x9){
              //
            this.scr_tab (1, true);
            continue;
          }
      if ((             checksel                         && !((((this.screen.cur).row) < ( (  this.selection.beg).row)) || ((((this.screen.cur).row) == ( (  this.selection.beg).row)) && (( (this.screen.cur).col) < ( (  this.selection.beg).col))))             && ((((this.screen.cur).row) < ( (  this.selection.end).row)) || ((((this.screen.cur).row) == ( (  this.selection.end).row)) && (( (this.screen.cur).col) < ( (  this.selection.end).col))))          )){
          checksel = 0;
          
          this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
        }
      if ((this.screen.flags & (1<<4))){
          this.scr_do_wrap ();
          line.l =  this.ncol;
          line.is_longer(1);
          row = this.screen.cur.row;
          line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);     //line = &(this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);   
        }
      //some utf-8 decoders "decode" surrogate characters: let's fix this. 
      //I don't think this matters for js
      //if ((((ord(c)) - ( 0xd800) <= ( 0xdfff) - ( 0xd800))))
      //    c = 0xfffd;
      //rely on wcwidth to tell us the character width, do wcwidth before 
      //further replacements, as wcwidth might return -1 for the line
      //drawing characters below as they might be invalid in the current 
      //locale.
      var width= 0;   //int width = 0;
 if (( this.charsets [this.screen.charset] == '0')) //DEC SPECIAL 
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
        if ((this.screen.flags & (1<<3))){
            ;
            this.scr_insdel_chars (width, INSERT); 
        }
            //nuke the character at this position, if required 
          if ((                             line.t[this.screen.cur.col] == ""                 || (this.screen.cur.col <  this.ncol - 1                     && line.t[this.screen.cur.col + 1] == "")              ))
              //scr_kill_char (*line, screen.cur.col); 
              this.scr_kill_char ( line, this.screen.cur.col); 
              //rend_t rend = (((rstyle) & ~0xff000000) | (( this.fontset[0]->find_font (c)) << 24)); 
              //FIXME var rend= (((rstyle) & ~0xff000000) | (( this.fontset[0].find_font (c)) << 24));
          //if the character doesnt fit into the remaining columns... 
          if ((this.screen.cur.col >  this.ncol - width &&  this.ncol >= width)){
              ;
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
                ;
                ;
              line.t[this.screen.cur.col] = c;
              
              //FONT-FIXME line.r[this.screen.cur.col] = rend;
              if ((this.screen.cur.col <  this.ncol - 1))
                this.screen.cur.col++;
              else{
                line.l =  this.ncol; 
                  if (this.screen.flags & (1<<2))
                    this.screen.flags |= (1<<4);
                  break;
                }
              c = ""; // chr(NOCHAR);
            }
          while ((--width > 0));
          //pad with spaces when overwriting wide character with smaller one 
          if ((!width)){
            line.touch (); 
            //for (int c = screen.cur.col; c < ncol && line->t[c] == NOCHAR; c++)
            for (  c = this.screen.cur.col; c <  this.ncol && line.t[c] == ""; c++){  
                  line.t[c] = ' ';
                  //FONT-FIXME line.r[c] = rend;
                }
            }
      
    }
    //FIXME max_it (line->l, screen.cur.col);
      line.l = Math.max((line.l),( this.screen.cur.col));
    ;;
}
//void rxvt_term::scr_backspace (){ 
rxvt_term.prototype.scr_backspace =function(){ 
    
  if (this.screen.cur.col == 0){
      if (this.screen.cur.row > 0){
        }
    }
  else
    this.scr_gotorc (0, -1, RELATIVE);
}
//void rxvt_term::scr_tab (int count, bool ht) 
rxvt_term.prototype.scr_tab =function( count, ht){ 
    
  var i, x; 
 this.want_refresh = 1;
  i = x = this.screen.cur.col;
  if (count == 0)
    return;
  else if (count > 0){
      //FIXME line_t &l =  (this.row_buf [((((this).term_start +   this.screen.cur.row) + ( (this).total_rows)) % ( (this).total_rows))]);
      var l =  (this.row_buf [((((this).term_start +   this.screen.cur.row) + ( (this).total_rows)) % ( (this).total_rows))]);
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
                && (!(((l.r[i]) ^ ( base_rend)) & ~0x80000000));
      if (count)
        x =  this.ncol - 1;
      //store horizontal tab commands as characters inside the text 
      //buffer so they can be selected and pasted.
      if (ht &&  this.option (Opt_pastableTabs)){
          //   base_rend = (((base_rend) & ~0xff000000) | (( 0) << 24));
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
  else 
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
//# 1359 "screen.C.js"
//# 1383 "screen.C.js"
//void rxvt_term::scr_gotorc (int row, int col, int relative)
rxvt_term.prototype.scr_gotorc =function( row,  col,  relative){  //Im suspsicious
    
  this.want_refresh = 1;
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
  this.screen.cur.col = relative & C_RELATIVE ? this.screen.cur.col + col : col;
  (this.screen.cur.col)=(this.screen.cur.col) < ( 0) ? ( 0) : (this.screen.cur.col) > (  this.ncol - 1) ? (  this.ncol - 1) : (this.screen.cur.col);
  this.screen.flags &= ~(1<<4);
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
      if (this.screen.flags & (1<<0)){
          
          this.screen.cur.row = row + this.screen.tscroll;
          Math.min((this.screen.cur.row),( this.screen.bscroll));
        }
      else
        this.screen.cur.row = row;
    }
  (this.screen.cur.row)=(this.screen.cur.row) < ( 0) ? ( 0) : (this.screen.cur.row) > ( this.nrow - 1) ? ( this.nrow - 1) : (this.screen.cur.row);
  ;
}
    //void rxvt_term::scr_index (enum page_dirn direction) 
rxvt_term.prototype.scr_index =function(direction){ 
    
    var dirn;     
 this.want_refresh = 1;
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
  dirn = ((direction == UP) ? 1 : -1);
  this.screen.flags &= ~(1<<4);
  if ((this.screen.cur.row == this.screen.bscroll && direction == UP)
      || (this.screen.cur.row == this.screen.tscroll && direction == DN))
    this.scr_scroll_text (this.screen.tscroll, this.screen.bscroll, dirn);
  else
    this.screen.cur.row += dirn;
  (this.screen.cur.row)=(this.screen.cur.row) < ( 0) ? ( 0) : (this.screen.cur.row) > ( this.nrow - 1) ? ( this.nrow - 1) : (this.screen.cur.row);
   this.selection_check (0);
}
//void rxvt_term::scr_erase_line (int mode){ 
rxvt_term.prototype.scr_erase_line =function( mode){ 
    
    var    col, num; 
 
    this.want_refresh = 1;
    if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
    this.selection_check (1);
    line = (this.row_buf [((((this).term_start +   this.screen.cur.row) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t &line = (this.row_buf [((((this).term_start +   screen.cur.row) + ( (this).total_rows)) % ( (this).total_rows))]);
    line.modified=true;//line.touch ();
    line.is_longer (0);
 
    switch (mode){
       case 3:
           
        if (this.screen.flags & (1<<4))
          return;
        
      case 0:                     
          
        col = this.screen.cur.col;
        num =  this.ncol - col;
        line.l = Math.min((line.l),( col));  //min_it (line.l, col);
        if ((((( this.selection.beg).row) == ( ( this.screen.cur).row)) && (( ( this.selection.beg).col) >= ( ( this.screen.cur).col)))
            || (((( this.selection.end).row) == ( ( this.screen.cur).row)) && (( ( this.selection.end).col) >= ( ( this.screen.cur).col))))
          this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
        break;
      case 1:                     
          
        col = 0;
        num = this.screen.cur.col + 1;
        if ((((( this.selection.beg).row) == ( ( this.screen.cur).row)) && (( ( this.selection.beg).col) <= ( ( this.screen.cur).col)))
            || (((( this.selection.end).row) == ( ( this.screen.cur).row)) && (( ( this.selection.end).col) <= ( ( this.screen.cur).col))))
          this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
        break;
      case 2:                     
          
        col = 0;
        num =  this.ncol;
        line.l = 0;
        if ( this.selection.beg.row <= this.screen.cur.row
            &&  this.selection.end.row >= this.screen.cur.row)
          this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
        break;
      default:
        return;
    }
  line =  this.scr_blank_line (line, col, num, rstyle);  //scr_blank_line (line, col, num, rstyle);
}
//void rxvt_term::scr_erase_screen (int mode) 
rxvt_term.prototype.scr_erase_screen =function( mode){ 
    
 var    num;  //int num;
 var   row;  //int32_t row;
 var  ren;  //rend_t ren;
 var  gcvalue;//XGCValues gcvalue; 
 //console.log("scr_erase_screen");
 this.want_refresh = 1;
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
 // mode=2;
  switch (mode){
      case 0:                     
          
         this.selection_check (1);
        this.scr_erase_line (0);
        row = this.screen.cur.row + 1;    
        num = this.nrow - row;
        break;
      case 1:                     
          
         this.selection_check (3);
        this.scr_erase_line (1);
        row = 0;
        num = this.screen.cur.row;
        break;
      case 2:                     
          
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
    this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
  if (row >= this.nrow) 
    return;
 num = Math.min((num),( this.nrow - row));  //min_it (num, this.nrow - row);
 
//# 1605 "screen.C.js"
  for (; num--; row++){
      var selected_row =  (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);
      this.scr_blank_screen_mem ((this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]), rstyle);
      
    }
}
//# 1627 "screen.C.js"
//void rxvt_term::scr_E () 
rxvt_term.prototype.scr_E =function(){ 
    
    //REWRITE
    
 var    fs;  //rend_t fs;   ###  c_keyword js_style_variables
  this.want_refresh = 1;
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
  this.num_scr_allow = 0;
   this.selection_check (3);
 //  fs = (((rstyle) & ~0xff000000) | (( this.fontset[0].find_font ('E')) << 24));
 for (var row = this.nrow; row--; ){  //for (int row = nrow; row--; )
     var line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]); //line_t &line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);
         var n_start=( 0), n_len = (  this.ncol);           while(n_len--)      (line.t)[n_start++]=( 'E');; //FIXED
         //var r1 = line.r, r1_i =0;  //rend_t *r1 = line.r;  
         //for (var j =  this.ncol; j--; )  //for (int j =  this.ncol; j--; )  
          //   line.r[r1_i++] = fs;  // *r1++ = f
      line.is_longer (0);
      line.modified=true; //line.touch ( this.ncol);
    }
}
//void rxvt_term::scr_insdel_lines (int count, int insdel){ 
rxvt_term.prototype.scr_insdel_lines =function( count,  insdel){ 
    
    var end;  //int end;   ###  c_keyword js_style_variables
  if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
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
//void rxvt_term::scr_insdel_chars (int count, int insdel) 
rxvt_term.prototype.scr_insdel_chars =function( count,  insdel){ 
    
    this.want_refresh = 1;
    if (this.option (Opt_scrollTtyOutput))                                          view_start = 0;
    if (count <= 0)
        return;
    this.scr_do_wrap ();
    this.selection_check (1);
    count = Math.min((count),(  this.ncol - this.screen.cur.col));  //min_it (count,  this.ncol - screen.cur.col);
    var row= this.screen.cur.row;   //int row = screen.cur.row;   ###  js_style_variables 
    var line = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);  //line_t *line = &(this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]);   ### js_style_variables  possible_pointer  FIXME
    line.modified=true; //line.touch ();
    line.is_longer (0);
    //nuke wide spanning the start
    if (line.t[this.screen.cur.col] == NOCHAR)
        this.scr_kill_char ( line, this.screen.cur.col);  //scr_kill_char (*line, screen.cur.col);   ###  c_keyword possible_pointer 
    switch (insdel){
        case INSERT:
            
            line.l = Math.min((line.l + count),(  this.ncol));
        if (line.t[this.screen.cur.col] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col);  //scr_kill_char (*line, screen.cur.col);   ###  c_keyword possible_pointer 
         for (var col =  this.ncol - 1; (col - count) >= this.screen.cur.col; col--){  //for (int col =  this.ncol - 1; (col - count) >= screen.cur.col; col--){   ### js_style_variables  c_keyword 
            line.t[col] = line.t[col - count];
            line.r[col] = line.r[col - count];
          }
        if ( this.selection.op &&  this.current_screen ==  this.selection.screen
            && (((( this.selection.beg).row) == ( ( this.screen.cur).row)) && (( ( this.selection.beg).col) >= ( ( this.screen.cur).col)))){
            if ( this.selection.end.row != this.screen.cur.row
                || ( this.selection.end.col + count >=  this.ncol))
              this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
            else{
                
                 this.selection.beg.col  += count;
                 this.selection.mark.col += count; 
                 this.selection.end.col  += count;
              }
          }
        this.scr_blank_line ( line, this.screen.cur.col, count, rstyle);  //scr_blank_line (*line, screen.cur.col, count, rstyle);   ###  possible_pointer 
        break;
      case ERASE:
          
        this.screen.cur.col += count;     
         this.selection_check (1);
        this.screen.cur.col -= count;
        //nuke wide char after the end 
        if (this.screen.cur.col + count <  this.ncol && line.t[this.screen.cur.col + count] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col + count);  //scr_kill_char (*line, screen.cur.col + count);   ###  c_keyword possible_pointer 
        this.scr_blank_line ( line, this.screen.cur.col, count, rstyle);  //scr_blank_line (*line, screen.cur.col, count, rstyle);   ###  possible_pointer 
        break;
      case DELETE:
          
        line.l = Math.max((line.l - count),( 0));
        //nuke wide char spanning the end 
        if (this.screen.cur.col + count <  this.ncol && line.t[this.screen.cur.col + count] == NOCHAR)
          this.scr_kill_char ( line, this.screen.cur.col + count);  //scr_kill_char (*line, screen.cur.col + count);   ###  c_keyword possible_pointer 
         for ( col = this.screen.cur.col; (col + count) <  this.ncol; col++){  //for (int col = screen.cur.col; (col + count) <  this.ncol; col++){   ### js_style_variables  c_keyword 
           line.t[col] = line.t[col + count];  //line->t[col] = line->t[col + count];
           line.r[col] = line.r[col + count];  //line->r[col] = line->r[col + count];
          }
         this.scr_blank_line ( line,  this.ncol - count, count, rstyle);  //scr_blank_line (*line,  this.ncol - count, count, rstyle);   ###  possible_pointer 
        if ( this.selection.op &&  this.current_screen ==  this.selection.screen
            && (((( this.selection.beg).row) == ( ( this.screen.cur).row)) && (( ( this.selection.beg).col) >= ( ( this.screen.cur).col)))){
            if ( this.selection.end.row != this.screen.cur.row
                || (this.screen.cur.col >=  this.selection.beg.col - count)
                ||  this.selection.end.col >=  this.ncol)
              this.selection.beg.row =  this.selection.beg.col                                      =  this.selection.end.row =  this.selection.end.col = 0;
            else{
                
                 this.selection.beg.col  -= count;
                 this.selection.mark.col -= count; 
                 this.selection.end.col  -= count;
              }
          }
        break;
    }
}
//void rxvt_term::scr_scroll_region (int top, int bot){ 
rxvt_term.prototype.scr_scroll_region =function( top,  bot){ 
    
    
    
    
  top = Math.max((top),(0)); //FIXED max_it (top, 0);
  bot = Math.min((bot),( this.nrow -1)); //FIXED min_it (bot, nrow - 1);
    
  if (top > bot)
    return;
  this.screen.tscroll = top;
  this.screen.bscroll = bot;
  this.scr_gotorc (0, 0, 0);
  ;
}
//void rxvt_term::scr_cursor_visible (int mode) 
rxvt_term.prototype.scr_cursor_visible =function( mode){ 
    
 this.want_refresh = 1;
  if (mode)
    this.screen.flags |= (1<<1);
  else
    this.screen.flags &= ~(1<<1);
}
//void rxvt_term::scr_autowrap (int mode){ 
rxvt_term.prototype.scr_autowrap =function( mode){ 
    
  if (mode)
    this.screen.flags |= (1<<2);
  else
    this.screen.flags &= ~((1<<2) | (1<<4));
}
//# 1862 "screen.C.js"
//void rxvt_term::scr_relative_origin (int mode) 
rxvt_term.prototype.scr_relative_origin =function( mode){ 
    
  if (mode)
    this.screen.flags |= (1<<0);
  else
    this.screen.flags &= ~(1<<0);
  this.scr_gotorc (0, 0, 0);
}
//void rxvt_term::scr_insert_mode (int mode){ 
rxvt_term.prototype.scr_insert_mode =function( mode){ 
    
  if (mode)
    this.screen.flags |= (1<<3);
  else
    this.screen.flags &= ~(1<<3);
  
}
//void rxvt_term::scr_set_tab (int mode) 
rxvt_term.prototype.scr_set_tab =function( mode){ 
    
  if (mode < 0)
    memset ( this.tabs, 0,  this.ncol);
  else if (this.screen.cur.col <  this.ncol)
       this.tabs [this.screen.cur.col] = !!mode; //FIXME what does !! mean?
}
//void rxvt_term::scr_rvideo_mode (bool on){ 
rxvt_term.prototype.scr_rvideo_mode =function(on){ 
    
    
//# 1939 "screen.C.js"
}
//FIXED:void rxvt_term::scr_report_position () 
rxvt_term.prototype.scr_report_position =function(){ 
    
  this.tt_printf ("\033[%d;%dR", this.screen.cur.row + 1, this.screen.cur.col + 1); 
}
 
//FIXED:void rxvt_term::set_font_style (){ 
rxvt_term.prototype.set_font_style =function(){ 
    
//# 1987 "screen.C.js"
}
//FIXED:void rxvt_term::scr_charset_choose (int set) 
rxvt_term.prototype.scr_charset_choose =function( set){ 
    
  this.screen.charset = set; 
  // set_font_style ();
}
//FIXED:void rxvt_term::scr_charset_set (int set, unsigned int ch){ 
rxvt_term.prototype.scr_charset_set =function( set,   ch){ 
    
    this.charsets[set] = ch;  //charsets[set] = (unsigned char)ch;
    //  set_font_style ();
}

 
//FIXED:bool rxvt_term::scr_refresh_rend (rend_t mask, rend_t value) 
rxvt_term.prototype.scr_refresh_rend =function( mask,  value){ 
    
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
//FIXED: js_style_functions c_keyword ^|       void rxvt_term::scr_expose (int x, int y, int ewidth, int eheight, bool refresh){ 
rxvt_term.prototype.scr_expose =function( x,  y,  ewidth,  eheight, refresh){ 
    
    
//# 2096 "screen.C.js"
}
//FIXED:void rxvt_term::scr_touch (bool refresh) 
rxvt_term.prototype.scr_touch =function(refresh){ 
    
  this.scr_expose (0, 0, this.width, this.height, refresh);
}
//fixed:void rxvt_term::scr_move_to (int y, int len){ 
rxvt_term.prototype.scr_move_to =function( y,  len){ 
    
    this.scr_changeview (( this.top_row - this.nrow) * (len - y) / len + (this.nrow - 1)); 
}
//CMNT:bool rxvt_term::scr_page (enum page_dirn direction, int nlines) 
rxvt_term.prototype.scr_page =function( direction,  nlines){ 
    
    var new_view_start=   //int new_view_start =   ###  js_style_variables 
    direction == UP ?  this.view_start - nlines  //FIXME enum
                    :  this.view_start + nlines;
  return this.scr_changeview (new_view_start);
}
//FIXED:bool rxvt_term::scr_changeview (int new_view_start){ 
rxvt_term.prototype.scr_changeview =function( new_view_start){ 
    
  (new_view_start)=(new_view_start) < (  this.top_row) ? (  this.top_row) : (new_view_start) > ( 0) ? ( 0) : (new_view_start);
  if (new_view_start == this.view_start)
    return false;
  this.num_scr += new_view_start - this.view_start;
  this.view_start = this.new_view_start;
  this.want_refresh = 1;
  false;
  return true;
}
//REWRITE:void rxvt_term::bell_cb (ev::timer &w, int revents) 
rxvt_term.prototype.bell_cb =function(w,  revents){ 
    
  
}
//REWRITE:void rxvt_term::scr_bell (){ 
rxvt_term.prototype.scr_bell =function(){ 
    
    
//# 2192 "screen.C.js"
}
 //FIXME what does argused mean?
//REWRITE: js_style_functions c_keyword ^|       void rxvt_term::scr_printscreen (int fullhist) 
rxvt_term.prototype.scr_printscreen =function( fullhist){ 
    
  console.log(fullhist);
}
//REWRITE: void rxvt_term::scr_refresh (){ 
rxvt_term.prototype.row_buf_debug = function(){
    for(var j=0; j < this.nrow; j++) {
        var new_t = []; 
        for(var k =0; k < this.ncol; k++){
            if((this.row_buf [((((this).term_start +   this.view_start +j) + ( (this).total_rows)) % ( (this).total_rows))]).t[k]){
               new_t[k]=(this.row_buf [((((this).term_start +   this.view_start +j) + ( (this).total_rows)) % ( (this).total_rows))]).t[k];  }
            else {
                new_t[k]=" ";}
        }
        print(new_t.join(""),"$");
    }
}
rxvt_term.prototype.scr_refresh =function(){ 
    
  ;;
    this.want_refresh=0;
    if (this.refresh_type == NO_REFRESH || !this.mapped){
        ;
        //console.log("this.refresh_type == NO_REFRESH || !this.mapped){");
        //return;
    }
    
    
    
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
    
    //console.log("before for loop ");
    for(var row = 0; row < this.nrow; row++){
        //r=row_buf [row_plus + row];
        r=(this.row_buf [((((this).term_start +   this.view_start + row) + ( (this).total_rows)) % ( (this).total_rows))]);
        dtr[row]= r.t.join("");
        //console.log(r.t);
    }
    
    //console.log(dtr.join("\n"));
    //this.pre_term_el.innerHTML = dtr.join("\n");
    //$("pt")
    document.getElementById("pt").innerHTML = dtr.join("\n");
    ;
} 
//FIXME overloaded_function
// void rxvt_term::scr_remap_chars (line_t &l) 
rxvt_term.prototype.scr_remap_chars =function(l){ 
    
    //FIXME 
return
}
//FIXED:void rxvt_term::scr_remap_chars (){ 
rxvt_term.prototype.scr_remap_chars =function(){ 
    
   for ( var  i =  this.total_rows; i--; )  //for (int i =  this.total_rows; i--; )
    this.scr_remap_chars ( this.row_buf [i]); 
   for ( i = this.nrow; i--; ){  //for (int i = nrow; i--; ){
    this.scr_remap_chars ( this.drawn_buf[i]); 
      this.scr_remap_chars ( this.swap_buf[i]); 
    }
}
//REWRITE:void rxvt_term::scr_recolour () 
rxvt_term.prototype.scr_recolour =function(){ 
    
//# 2313 "screen.C.js"
  //bgPixmap.apply () does not do the following : 
  this.scr_clear ();
  this.scr_touch (true);
this.want_refresh = 1;
}
//REWRITE:void rxvt_term::scr_clear (bool really){ 
rxvt_term.prototype.scr_clear =function( really){ 
    
  if (! this.mapped)
    return;
  this.num_scr_allow = 0;
  this.want_refresh = 1;
  if (really)
    XClearWindow (dpy, vt);
  ;
}
//void rxvt_term::scr_xor_rect (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle1, rend_t rstyle2) 
rxvt_term.prototype.scr_xor_rect =function( beg_row,  beg_col,  end_row,  end_col,  rstyle1,  rstyle2){ 
    
    //FIXME cstyle namespaces
    
//# 2359 "screen.C.js"
}
//void rxvt_term::scr_xor_span (int beg_row, int beg_col, int end_row, int end_col, rend_t rstyle) 
rxvt_term.prototype.scr_xor_span =function( beg_row,  beg_col,  end_row,  end_col,  rstyle){ 
    
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
  for (; row < Math.min((end_row),( view_end)); row++, col = 0)
//for (rend_t *srp = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]).r; col <  this.ncol; col++) 
    for (  srp = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]).r; col <  this.ncol; col++)
      srp[col] ^= rstyle;
  if (row == end_row)
//for (rend_t *srp = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]).r; col < end_col; col++) 
    for (  srp = (this.row_buf [((((this).term_start +   row) + ( (this).total_rows)) % ( (this).total_rows))]).r; col < end_col; col++)
      srp[col] ^= rstyle;
}
//void rxvt_term::scr_reverse_selection () 
rxvt_term.prototype.scr_reverse_selection =function(){ 
    
  if ( this.selection.op
      &&  this.current_screen ==  this.selection.screen
      &&  this.selection.end.row >=  this.view_start){
        this.scr_xor_span ( this.selection.beg.row,  this.selection.beg.col,
                       this.selection.end.row,  this.selection.end.col,
                      0x00020000);
    }
}
//REMOVED:void rxvt_term::selection_check (int check_more) 
    rxvt_term.prototype.selection_check = function(check_more){
        
        return;
    }
//# 2446 "screen.C.js"
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
//#define DELIMIT_TEXT(x)                                               //REMOVED:(unicode::is_space (x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cutchars], (x))) 
//(unicode.is_space =function(x) ? 2 : (x) <= 0xff && !!strchr (rs[Rs_cuts], (x))) 
//#define DELIMIT_REND(x)        1
//REMOVED:void rxvt_term::selection_delimit_word (enum page_dirn dirn, const row_col_t *mark, row_col_t *ret) 
//REMOVED:void rxvt_term::selection_extend (int x, int y, int flag){ 
//REMOVED:void rxvt_term::selection_extend_colrow (int32_t col, int32_t row, int button3, int buttonpress, int clickchange) 
//REMOVED:void rxvt_term::selection_remove_trailing_spaces (){ 
//REMOVED:void rxvt_term::selection_rotate (int x, int y) 
//REMOVED:void rxvt_term::selection_send (const XSelectionRequestEvent &rq){ 
    //This is removed because ENABLE_OVERLAY is tied to iso-14755 which is a complicated standard that I wont be supporting
    //it can be read about here http://en.wikipedia.org/wiki/Unicode_input
//# 2482 "screen.C.js"
//# 3 "expand_both.h" 2
