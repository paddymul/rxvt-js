
doAnimate=true;
function VTAnimatorOld(vt, text, bps){
  var mspf = 100; // milliseconds per frame
  var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
//  vt.clear();
//  vt.refresh();
  var timingPointer=0;
  setTimeout(
    function() {
      if(doAnimate){
	var me = arguments.callee;
	var hnd = setTimeout(me, mspf);
	vt.write(text.substr(where, bpf));
	where += bpf;
	if (where >= text.length) {
	  clearTimeout(hnd);
	  where = 0;
	  setTimeout(me, 1000);
	}
      }
    }, mspf);
}
//console.log(timing);
function setupTiming2(){
  var seconds=[];

  var startsecs=timing[0][0];
  for(var i = 0 ; i < timing.length-1; i++){
    seconds.push(timing[i][0]-startsecs);
  }
//  console.log(33,seconds);
  var startMicSecs=timing[0][1];
  var adjustedMicSecs=[];
  for(i = 0 ; i < timing.length-1; i++){
    adjustedMicSecs.push(timing[i][1]-startMicSecs);
  }
//  console.log(39,adjustedMicSecs);
  var adjustedMilliSecs=[];
  for(i=0; i < adjustedMicSecs.length; i++){
//    console.log(adjustedMicSecs[i]/1000);
  adjustedMilliSecs.push(parseInt(adjustedMicSecs[i]/1000));
  }
//  console.log(44,adjustedMilliSecs);
  var normalizedMilliSecs=[];
  for(i=0; i < adjustedMicSecs.length; i++){
    normalizedMilliSecs[i]=adjustedMilliSecs[i]+(seconds[i]*1000);
//    console.log(normalizedMilliSecs[i]);
  }
  intervalMilliSecs=[0];
  for(i=1; i < normalizedMilliSecs.length; i++){
    intervalMilliSecs[i]=normalizedMilliSecs[i]-normalizedMilliSecs[i-1];
  }

}
setupTiming2();
function VTAnimator(vt, text, bps){

  var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
//  vt.clear();
//  vt.refresh();
  var mspf =intervalMilliSecs[0];
  bpf=timing[0][2];
  var timingPointer=0;
  setTimeout(
    function() {
      if(doAnimate){
	mspf=intervalMilliSecs[timingPointer];
	bpf=timing[timingPointer][2];
	var me = arguments.callee;
	var hnd = setTimeout(me, mspf);
	vt.write(text.substr(where, bpf));
	timingPointer++;
	where += bpf;
	if (where >= text.length) {
	  clearTimeout(hnd);
	  where = 0;
	  timingPointer=0;
	  setTimeout(me, 1000);
	}
      }
    }, mspf);
}

vt100_chars=[]
function chr(integer){
  return String.fromCharCode(integer);
  }
function unichr(integer){
  return String.fromCharCode(integer);
  }
function ord(_string){ //this might fail for unicode

  var code="";
  try{
    code =_string.toString().charCodeAt(0);
  }
  catch(ex){
//    code =_string.charCodeAt(0);
  }

  return code;
}
function hex(_integer){
  return _integer.toString(16);
  }
function assert(shouldBeTrue){
//  console.assert(shouldBeTrue);

  if(!shouldBeTrue){

    throw (new Error('Assertion_Error'));
  }

}
function arrRemove(_array, value){
  var i = _array.indexOf(value);
  return _array.slice(0,i).concat(_array.slice(i+1));
 }
function insertSlice(_array, start,end, toInsert){
  var retArr=_array.slice();
  //assert((end-start) == toInsert.length-1);
  for(var i=0; i < toInsert.length; i++){
    retArr[i+start]=toInsert[i];
  }
  return retArr;
}
function arr_fill(val, _length){
  var _arr_fill = [];
    for(var i=0; i < _length; i++){
      _arr_fill.push(val);
    }
  return _arr_fill;
}
function range(start, end, step){
  if(typeof step == 'undefined'){
    step=1;
  }
  var retArr=[];
  for(var i=start; i < end; i+=step){
    retArr.push(i);
  }
  return retArr;
}
function Terminal(w,h){
  this.mcount=[];
  this.w = w;
  this.h = h;
  this.vt100_charset_graph = [
    0x25ca, 0x2026, 0x2022, 0x3f,
    0xb6, 0x3f, 0xb0, 0xb1,
    0x3f, 0x3f, 0x2b, 0x2b,
    0x2b, 0x2b, 0x2b, 0xaf,
    0x2014, 0x2014, 0x2014, 0x5f,
    0x2b, 0x2b, 0x2b, 0x2b,
    0x7c, 0x2264, 0x2265, 0xb6,
    0x2260, 0xa3, 0xb7, 0x7f
  ];
  var self=this;
	// VT100 CTRL, ESC, CSI handlers
  self.vt100_charset_update = function(){
    self.vt100_charset_is_graphical = ( self.vt100_charset_g[self.vt100_charset_g_sel] == 2);
  };
  self.vt100_charset_set = function(g){
    // Invoke active _character set
    self.vt100_charset_g_sel = g;
    self.vt100_charset_update();
  };
  self.vt100_charset_select = function( g, _charset){
    // Select _charset
    self.vt100_charset_g[g] = _charset;
    self.vt100_charset_update();
  };
  self.vt100_setmode = function( p, state){


		// Set VT100 mode
    p = self.vt100_parse_params(p, [], false);
    var m;
    for(var i=0; i < p.length; i++){
      m=p[i];
      if( m == '4'){
	// Insertion replacement mode
	self.vt100_mode_insert = state;
      }
      else if(m == '20'){
	// Linefeed/new line mode
	self.vt100_mode_lfnewline = state;
      }
      else if(m == '?1'){
	// Cursor key mode
	self.vt100_mode_cursorkey = state;
      }
      else if(m == '?3'){
	// Column mode
	if(self.vt100_mode_column_switch){
	  if( state){
	    self.w = 132;
	  }
	  else{
	    self.w = 80;
	  }
	  self.reset_screen();
	}
      }
      else if(m == '?5'){
	// Screen mode
	self.vt100_mode_inverse = state;
      }
      else if(m == '?6'){
	// Region origin mode
	self.vt100_mode_origin = state
	if( state){
	  self.cursor_set(self.scroll_area_y0, 0);
	}
	else{
	  self.cursor_set(0, 0);
	}
      }
      else if(m == '?7'){
	// Autowrap mode
	self.vt100_mode_autowrap = state;
      }
      else if(m == '?25'){
	// Text cursor enable mode
	self.vt100_mode_cursor = state;
      }
      else if(m == '?40'){
	// Column switch control
	self.vt100_mode_column_switch = state;
      }
      else if(m == '?47'){
	// Alternate screen mode
	if((state && !(self.vt100_mode_alt_screen)) || (! state && self.vt100_mode_alt_screen)){
	  self.screen, self.screen2 = self.screen2, self.screen;
	self.vt100_saved, self.vt100_saved2 = self.vt100_saved2, self.vt100_saved;
      }
	self.vt100_mode_alt_screen = state;
      }
      else if(m == '?67'){
	// Backspace/delete
	self.vt100_mode_backspace = state;
      }
    }
  };
  self.ctrl_SO = function() {
    // Shift out
    self.vt100_charset_set(1);
  };
  self.ctrl_SI= function() {
    // Shift in
    self.vt100_charset_set(0);
  };
  self.esc_CSI= function() {
    // CSI start sequence

    self.vt100_parse_reset('csi');
  };
  self.esc_DECALN= function() {
    // Screen alignment display
    self.fill(0, 0, self.h, self.w, 0x00fe0045);
  };
  self.esc_G0_0= function() {
    self.vt100_charset_select(0, 0);
  };
  self.esc_G0_1= function() {
    self.vt100_charset_select(0, 1);
  };
  self.esc_G0_2= function() {
    self.vt100_charset_select(0, 2);
  };
  self.esc_G0_3= function() {
    self.vt100_charset_select(0, 3);
  };
  self.esc_G0_4= function() {
    self.vt100_charset_select(0, 4);
  };
  self.esc_G1_0= function() {
    self.vt100_charset_select(1, 0);
  };
  self.esc_G1_1= function() {
    self.vt100_charset_select(1, 1);
  };
  self.esc_G1_2= function() {
    self.vt100_charset_select(1, 2);
  };
  self.esc_G1_3= function() {
    self.vt100_charset_select(1, 3);
  };
  self.esc_G1_4= function() {
    self.vt100_charset_select(1, 4);
  };
  self.esc_DECSC= function() {
    // Store cursor
    self.vt100_saved = {};
    self.vt100_saved['cx'] = self.cx;
    self.vt100_saved['cy'] = self.cy;
    self.vt100_saved['attr'] = self.attr;
    self.vt100_saved['_charset_g_sel'] = self.vt100_charset_g_sel;
    //self.vt100_saved['_charset_g'] = self.vt100_charset_g[:];
    self.vt100_saved['_charset_g'] = self.vt100_charset_g.slice(); //fixed

    self.vt100_saved['mode_autowrap'] = self.vt100_mode_autowrap;
    self.vt100_saved['mode_origin'] = self.vt100_mode_origin;
  };
  self.esc_DECRC= function() {
    // Retore cursor
    self.cx = self.vt100_saved['cx'];
    self.cy = self.vt100_saved['cy'];
    self.attr = self.vt100_saved['attr'];
    self.vt100_charset_g_sel = self.vt100_saved['_charset_g_sel'];
    //self.vt100_charset_g = self.vt100_saved['_charset_g'][:]; //fixed
    self.vt100_charset_g = self.vt100_saved['_charset_g'].slice();
    self.vt100_charset_update();
    self.vt100_mode_autowrap = self.vt100_saved['mode_autowrap'];
    self.vt100_mode_origin = self.vt100_saved['mode_origin'];
  };
  self.esc_DECKPAM= function() {
    // Application keypad mode
    //pass
  };
  self.esc_DECKPNM= function() {
    // Numeric keypad mode
    //pass
  };
  self.esc_IND= function() {
    // Index
    self.ctrl_LF();
  };
  self.esc_NEL= function() {
    // Next line
    self.ctrl_CR();
    self.ctrl_LF();
  };
  self.esc_HTS= function() {
    // _Character tabulation set
    self.csi_CTC('0');
  };
  self.esc_RI= function() {
    // Reverse line feed
    if(self.cy == self.scroll_area_y0){
      self.scroll_area_down(self.scroll_area_y0, self.scroll_area_y1);
    }
    else{
      self.cursor_up();
    }
  };
  self.esc_SS2= function() {
    // Single-shift two
    self.vt100_charset_is_single_shift = true;
  };
  self.esc_SS3= function() {
    // Single-shift three
    self.vt100_charset_is_single_shift = true;
  };
  self.esc_DCS= function() {
    // Device control string
    self.vt100_parse_reset('str');
  };
  self.esc_SOS= function() {
    // Start of string
    self.vt100_parse_reset('str');
  };
  self.esc_DECID= function() {
    // Identify terminal
    self.csi_DA('0');
  };
  self.esc_ST= function() {
    // String terminator
    //pass;
  };
  self.esc_OSC= function() {
    // Operating system command
    self.vt100_parse_reset('str');
  };
  self.esc_PM= function() {
    // Privacy message
    self.vt100_parse_reset('str');
  };
  self.esc_APC= function() {
    // Application program command
    self.vt100_parse_reset('str');
  };
  self.csi_ICH= function(p){
    // Insert character
    p = self.vt100_parse_params(p, [1]);
    self.scroll_line_right(self.cy, self.cx, p[0]);
  };
  self.csi_CUU = function( p){
    // Cursor up
    p = self.vt100_parse_params(p, [1]);
    self.cursor_up(Math.max(1, p[0]));
  };
  self.csi_CUD = function( p){
    // Cursor down
    p = self.vt100_parse_params(p, [1]);
    self.cursor_down(Math.max(1, p[0]));
  };
  self.csi_CUF = function( p){
    // Cursor right
    p = self.vt100_parse_params(p, [1]);
    self.cursor_right(Math.max(1, p[0]));
  };
  self.csi_CUB = function( p){
    // Cursor left
    p = self.vt100_parse_params(p, [1]);
    self.cursor_left(Math.max(1, p[0]));
  };
  self.csi_CNL = function( p){
    // Cursor next line
    self.csi_CUD(p);
    self.ctrl_CR();
  };
  self.csi_CPL = function( p){
    // Cursor preceding line
    self.csi_CUU(p);
    self.ctrl_CR();
  };
  self.csi_CHA = function( p){
    // Cursor character absolute
    p = self.vt100_parse_params(p, [1]);
    self.cursor_set_x(p[0] - 1);
  };
  self.csi_CUP = function( p){
    // Set cursor position
    p = self.vt100_parse_params(p, [1, 1]);
    if(self.vt100_mode_origin){
      self.cursor_set(self.scroll_area_y0 + p[0] - 1, p[1] - 1);
    }
    else{
      self.cursor_set(p[0] - 1, p[1] - 1);
    }
  };
  self.csi_CHT = function( p){
    // Cursor forward tabulation
    p = self.vt100_parse_params(p, [1]);
    self.ctrl_HT(Math.max(1, p[0]));
  };
  self.csi_ED = function( p){
    // Erase in display
    p = self.vt100_parse_params(p, ['0'], false);
    if(p[0] == '0'){
      self.clear(self.cy, self.cx, self.h, self.w);
    }
    else if(p[0] == '1'){
      self.clear(0, 0, self.cy + 1, self.cx + 1);
    }
    else if(p[0] == '2'){
      self.clear(0, 0, self.h, self.w);
    }
  };
  self.csi_EL = function( p){
    // Erase in line
    p = self.vt100_parse_params(p, ['0'], false);
    if(p[0] == '0'){
      self.clear(self.cy, self.cx, self.cy + 1, self.w);
    }
    else if(p[0] == '1'){
      self.clear(self.cy, 0, self.cy + 1, self.cx + 1);
    }
    else if(p[0] == '2'){
      self.clear(self.cy, 0, self.cy + 1, self.w);
    }
  };
  self.csi_IL = function( p){
    // Insert line
    p = self.vt100_parse_params(p, [1]);
    if((self.cy >= self.scroll_area_y0 && self.cy < self.scroll_area_y1)){
      self.scroll_area_down(self.cy, self.scroll_area_y1, Math.max(1, p[0]));
    }
  };
  self.csi_DL = function( p){
    // Delete line
    p = self.vt100_parse_params(p, [1]);
    if((self.cy >= self.scroll_area_y0 && self.cy < self.scroll_area_y1)){
      self.scroll_area_up(self.cy, self.scroll_area_y1, Math.max(1, p[0]));
    }
  };
  self.csi_DCH = function( p){
    // Delete characters
    p = self.vt100_parse_params(p, [1]);
    self.scroll_line_left(self.cy, self.cx, Math.max(1, p[0]));
  };
  self.csi_SU = function( p){
    // Scroll up
    p = self.vt100_parse_params(p, [1]);
    self.scroll_area_up(self.scroll_area_y0, self.scroll_area_y1, Math.max(1, p[0]))	;
  };
  self.csi_SD = function( p){
    // Scroll down
    p = self.vt100_parse_params(p, [1]);
    self.scroll_area_down(self.scroll_area_y0, self.scroll_area_y1, Math.max(1, p[0]));
  };
  self.csi_CTC = function( p){
    // Cursor tabulation control
    p = self.vt100_parse_params(p, ['0'], false);

    var m;
    for(var i=0; i < p.length; i++){
      m=p[i];
      if(m == '0'){
	try{
	  var ts = self.tab_stops.index(self.cx);  // what do we do with ts
	}
	catch(ex){
	  var tab_stops = self.tab_stops;
	  //tab_stops.append(self.cx);
	  tab_stops.push(self.cx); //FIXED
	  tab_stops.sort();
	  self.tab_stops = tab_stops;
	}
      }
      else if(m == '2'){
	try{
//	  self.tab_stops.remove(self.cx); //remove a function in js
	  self.tab_stops = arrRemove(self.tab_stops, self.cx); //fixed
	}
	catch(ex){
	//pass //fixed
	}
      }
      else if(m == '5') {
	self.tab_stops = [0]
      }
    }
  };
  self.csi_ECH = function( p){
    // Erase character
    p = self.vt100_parse_params(p, [1]);
    n = Math.min(self.w - self.cx, Math.max(1, p[0]));
    self.clear(self.cy, self.cx, self.cy + 1, self.cx + n);
  };
  self.csi_CBT = function( p){
    // Cursor backward tabulation
    p = self.vt100_parse_params(p, [1]);
    self.ctrl_HT(1 - Math.max(1, p[0]));
  };
  self.csi_HPA = function( p){
    // Character position absolute
    p = self.vt100_parse_params(p, [1]);
    self.cursor_set_x(p[0] - 1);
  };
  self.csi_HPR = function( p){
    // Character position forward
    self.csi_CUF(p);
  };
  self.csi_REP = function( p){
    // Repeat
    p = self.vt100_parse_params(p, [1]);
    if(self.vt100_lastchar < chr(32)){
      return;
    }
    var n = Math.min(2000, Math.max(1, p[0]));
    while(n){
      self.dumb_echo(self.vt100_lastchar);
      n -= 1;
    }
    self.vt100_lastchar = 0;
  };
  self.csi_DA = function( p){
    // Device attributes
    p = self.vt100_parse_params(p, ['0'], false);
    if(p[0] == '0'){
      self.vt100_out = "\x1b[?1;2c";
    }
    else if(p[0] == '>0' || p[0] == '>') {
      self.vt100_out = "\x1b[>0;184;0c";
    }
  };
  self.csi_VPA = function( p){
    // Line position absolute
    p = self.vt100_parse_params(p, [1]);
    self.cursor_set_y(p[0] - 1);
  };
  self.csi_VPR = function( p){
    // Line position forward
    self.csi_CUD(p);
  };
  self.csi_HVP = function( p){
    // Character and line position
    self.csi_CUP(p);
  };
  self.csi_TBC = function( p){
    // Tabulation clear
    p = self.vt100_parse_params(p, ['0'], false);
    if(p[0] == '0'){
      self.csi_CTC('2');
    }
    else if(p[0] == '3'){
      self.csi_CTC('5');
    }
  };
  self.csi_SM = function( p){
    // Set mode
    self.vt100_setmode(p, true);
  };
  self.csi_RM = function( p){
    // Reset mode
    self.vt100_setmode(p, false);
  };
  self.csi_SGR = function( p){
//possible a lot of work here
//FIXED
    // Select graphic rendition
    var oldp=p;
    p = self.vt100_parse_params(p, [0]);
    var m;

    for(var i=0; i < p.length; i++){
      m=p[i];
      self.mcount.push(m);
      if(isNaN(m)){
//	console.log(oldp);
//	console.log(p);
      }
      if(m == 0){
	// Reset
	self.attr = 0x00fe0000;
      }
/*      else if( m== 1) {

		self.attr != 0x16000000;

      }
*/
      else if(m == 4){
	// Underlined
	self.attr |= 0x01000000;
      }
/*      else if(m == 5){
	//blinking
	self.attr |= 0x08000000;
      }
*/
      else if(m == 7){
	// Negative
//	console.log("negative");
	self.attr |= 0x02000000;
      }
      else if(m == 8){
	// Concealed
	self.attr |= 0x04000000;
      }
      else if(m == 24){
	// Not underlined
	self.attr &= 0x7eff0000;
      }
      else if(m == 27){
	// Positive
	self.attr &= 0x7dff0000;
      }
      else if(m == 28){
	// Revealed
	self.attr &= 0x7bff0000;
      }
      else if(m >= 30 && m <= 37){
	// Foreground
	self.attr = (self.attr & 0x7f0f0000) | ((m - 30) << 20);
      }
      else if(m == 39){
	// Default fg color
	self.attr = (self.attr & 0x7f0f0000) | 0x00f00000;
      }
      else if(m >= 40 && m <= 47){
	// Background
	self.attr = (self.attr & 0x7ff00000) | ((m - 40) << 16);
      }
      else if(m == 49){
	// Default bg color
	self.attr = (self.attr & 0x7ff00000) | 0x000e0000;
      }
    }
  };
  self.csi_DSR = function( p){
    // Device status report
    p = self.vt100_parse_params(p, ['0'], false);
    if(p[0] == '5'){
      self.vt100_out = "\x1b[0n";
    }
    else if(p[0] == '6'){
      x = self.cx + 1;
      y = self.cy + 1;
      //self.vt100_out = '\x1b[%d;%dR' % (y, x);
      self.vt100_out = '\x1b['+y+';'+x +'R'; //fixed
    }
    else if(p[0] == '7'){
      self.vt100_out = 'WebShell';
    }
    else if(p[0] == '8'){
      self.vt100_out = version;
    }
    else if(p[0] == '?6'){
      x = self.cx + 1;
      y = self.cy + 1;
      //self.vt100_out = '\x1b[?%d;%dR' % (y, x);
      self.vt100_out = '\x1b[?'+ y + ';'+ x +'R' ; //fixed
    }
    else if(p[0] == '?15'){
      self.vt100_out = '\x1b[?13n';
    }
    else if(p[0] == '?25'){
      self.vt100_out = '\x1b[?20n';
    }
    else if(p[0] == '?26'){
      self.vt100_out = '\x1b[?27;1n';
    }
    else if(p[0] == '?53'){
      self.vt100_out = '\x1b[?53n';
    }
  };
  self.csi_DECSTBM = function( p){
    // Set top and bottom margins
    p = self.vt100_parse_params(p, [1, self.h]);
    self.scroll_area_set(p[0] - 1, p[1]);
    if(self.vt100_mode_origin){
      self.cursor_set(self.scroll_area_y0, 0);
    }
    else {
      self.cursor_set(0, 0);
    }
  };
  self.csi_SCP = function( p){
    // Save cursor position
    self.vt100_saved_cx = self.cx
    self.vt100_saved_cy = self.cy
  };
  self.csi_RCP = function( p){
    // Restore cursor position
    self.cx = self.vt100_saved_cx
    self.cy = self.vt100_saved_cy
  };
  self.csi_DECREQTPARM = function( p){
    // Request terminal parameters
    p = self.vt100_parse_params(p, [], false)
    if(p[0] == '0'){
      self.vt100_out = "\x1b[2;1;1;112;112;1;0x";
    }
    else if(p[0] == '1'){
      self.vt100_out = "\x1b[3;1;1;112;112;1;0x";
    }
  };
  self.csi_DECSTR = function( p){
    // Soft terminal reset
    self.reset_soft();
  };

// VT100 Parser
  self.vt100_parse_params = function( p, d, to_int) {

    if(typeof to_int == 'undefined'){
      to_int=true
    }
    // Process parameters (params p with defaults d)
    // Add prefix to all parameters
    prefix = ''
    if(p.length > 0){
      if(p[0] >= '<' && p[0] <= '?'){
	prefix = p[0];
//	p = p[1:];
	p = p.slice(1); //fixed
      }
      p = p.split(';');

    }
    else{
      p = '';
    }
    // Process parameters
    var n = Math.max(p.length, d.length);
    var o = [];
    for(var i=0; i < n; i++){
      value_def = false;
      if(i < p.length){
	value = prefix + p[i];
//	console.log(value);
	value_def = true;
	if(to_int){
	  try{
	    value = parseInt(value); //fixed
	  }
	  catch(ex){
	    value_def = false;
	  }
	}
	if(isNaN(value)){
	  value_def=false;
	  value = prefix + p[i];
	}
      }
      if((!( value_def)) && i < d.length){
	value = d[i];
      }
      //o.append(value);
      o.push(value); //fixed
    }
    return o;

  };
    self.vt100_parse_reset = function( vt100_parse_state) {
    if( typeof vt100_parse_state == 'undefined'){
      vt100_parse_state="";
    }
//      console.log(vt100_parse_state);
    self.vt100_parse_state = vt100_parse_state;
    self.vt100_parse_len = 0;
    self.vt100_parse_func = "";
    self.vt100_parse_param = "";
    };
  self.vt100_parse_process = function(){
    if(self.vt100_parse_state == 'esc'){
      // ESC mode
      f = self.vt100_parse_func

      try {
//	console.dir(self.vt100_esc);
	self.vt100_esc[f]();
      }
      catch (ex){
//	pass;

//	console.log(703,f,ex);
      }
      if(self.vt100_parse_state == 'esc'){
	self.vt100_parse_reset();
      }
    }
    else {
      // CSI mode
      f = self.vt100_parse_func;
      p = self.vt100_parse_param;

      try {
	self.vt100_csi[f](p);
      }
      catch (ex){
//	pass;
//	console.log(718,f,ex);
      }
      if(self.vt100_parse_state == 'csi') {
	self.vt100_parse_reset();
      }
    }
  };
  self.vt100_write = function ( _char){

    if(typeof _char == 'string'){
//      console.log("vt100_write was not expecting a string");
    }

    if(_char < 32){
      if(_char == 27){
	self.vt100_parse_reset('esc');
	return true;
      }
      else if(_char == 14){
	self.ctrl_SO();
      }
      else if(_char == 15){
	self.ctrl_SI();
      }
    }
    else if((_char & 0xffe0) == 0x0080){
      aa++;
      self.vt100_parse_reset('esc');
      self.vt100_parse_func = chr(_char - 0x40);
      self.vt100_parse_process();
      return true;
    }
    if(self.vt100_parse_state){
      bb++;
      if(self.vt100_parse_state == 'str'){
	cc++;
	if(_char >= 32){
	  return true;
	}
	self.vt100_parse_reset();
      }
      else {
	if(_char < 32){
	  if((_char == 24) || _char == 26){

	    self.vt100_parse_reset();
	    return true;
	  }
	}
	else {
	  self.vt100_parse_len += 1;
	  if(self.vt100_parse_len > 32){
	    self.vt100_parse_reset();
	  }
	  else{
	    _char_msb = _char & 0xf0;
	  if(_char_msb == 0x20){
	    dd++;
	    // Intermediate bytes (added to function)
	    self.vt100_parse_func += unichr(_char)
	  }
	    else if(_char_msb == 0x30 && self.vt100_parse_state == 'csi'){
	      ee++;
	      // Parameter byte
	      self.vt100_parse_param += unichr(_char);
	    }
	    else{
	      ff++;
	      // Function byte
	      self.vt100_parse_func += unichr(_char);
	      self.vt100_parse_process();
	    }
	    return true;
	  }
	}
      }
    }
    self.vt100_lastchar = _char;
    return false;
  };

  //Reset functions
  self.reset_hard = function() {
    // Attribute mask: 0x0XFB0000
    //	X:	Bit 0 - Underlined
    //		Bit 1 - Negative
    //		Bit 2 - Concealed
    //          Bit 3 - blinking -- I think
    //	F:	Foreground
    //	B:	Background
    self.attr = 0x00fe0000;
    // UTF-8 decoder;
    self.utf8_units_count = 0;
    self.utf8_units_received = 0;
    self.utf8_char = 0;
    // Key filter;
    self.vt100_keyfilter_escape = false;
    // Last char;
    self.vt100_lastchar = 0;
    // Control sequences;
    self.vt100_parse_len = 0;
    self.vt100_parse_state = "";
    self.vt100_parse_func = "";
    self.vt100_parse_param = "";
    // Buffers;
    self.vt100_out = "";
    // Caches;
    self.dump_cache = "";
    // Invoke other resets;
    self.reset_screen();
    self.reset_soft();
  };
  self.reset_soft=function() {
    // Attribute mask: 0x0XFB0000
    //	X:	Bit 0 - Underlined;
    //		Bit 1 - Negative;
    //		Bit 2 - Concealed;
    //          Bit 3 - blinking -- I think
    //	F:	Foreground;
    //	B:	Background;
  self.attr = 0x00fe0000;
  // Scroll parameters;
  self.scroll_area_y0 = 0;
  self.scroll_area_y1 = self.h;
  // Character sets;
  self.vt100_charset_is_single_shift = false;
  self.vt100_charset_is_graphical = false;
  self.vt100_charset_g_sel = 0;
  self.vt100_charset_g = [0, 0];
  // Modes
  self.vt100_mode_insert = false;
  self.vt100_mode_lfnewline = false;
  self.vt100_mode_cursorkey = false;
  self.vt100_mode_column_switch = false;
  self.vt100_mode_inverse = false;
  self.vt100_mode_origin = false;
  self.vt100_mode_autowrap = true;
  self.vt100_mode_cursor = true;
  self.vt100_mode_alt_screen = false;
  self.vt100_mode_backspace = false;
  // Init DECSC state
  self.esc_DECSC();
  self.vt100_saved2 = self.vt100_saved;
  self.esc_DECSC();
  };
  self.reset_screen = function(){
    // Screen
    //self.screen = array.array('i', [self.attr | 0x20] * self.w * self.h);
    //self.screen2 = array.array('i', [self.attr | 0x20] * self.w * self.h);
//    self.screen2=arr_fill(arr_fill((self.attr|0x20), self.h), self.w);
    self.screen=arr_fill((self.attr|0x20), self.h* self.w);
    self.screen2=arr_fill((self.attr|0x20), self.h* self.w);


    // Scroll parameters
    self.scroll_area_y0 = 0;
    self.scroll_area_y1 = self.h;
    // Cursor position
    self.cx = 0;
    self.cy = 0;
    // Tab stops
    self.tab_stops = range(0, self.w, 8);
  };

  this.vt100_esc = {
    '#8':	this.esc_DECALN,
    '(A':	this.esc_G0_0,
    '(B':	this.esc_G0_1,
    '(0':	this.esc_G0_2,
    '(1':	this.esc_G0_3,
    '(2':	this.esc_G0_4,
    ')A':	this.esc_G1_0,
    ')B':	this.esc_G1_1,
    ')0':	this.esc_G1_2,
    ')1':	this.esc_G1_3,
    ')2':	this.esc_G1_4,
    '7':	this.esc_DECSC,
    '8':	this.esc_DECRC,
    '=':	this.esc_DECKPAM,
    '>':	this.esc_DECKPNM,
    'D':	this.esc_IND,
    'E':	this.esc_NEL,
    'H':	this.esc_HTS,
    'M':	this.esc_RI,
    'N':	this.esc_SS2,
    'O':	this.esc_SS3,
    'P':	this.esc_DCS,
    'X':	this.esc_SOS,
    'Z':	this.esc_DECID,
    '[':	this.esc_CSI,
    '\\':	this.esc_ST,
    ']':	this.esc_OSC,
    '^':	this.esc_PM,
    '_':	this.esc_APC,
    'c':	this.reset_hard
  };
  this.vt100_csi = {
    '@':	this.csi_ICH,
    'A':	this.csi_CUU,
    'B':	this.csi_CUD,
    'C':	this.csi_CUF,
    'D':	this.csi_CUB,
    'E':	this.csi_CNL,
    'F':	this.csi_CPL,
    'G':	this.csi_CHA,
    'H':	this.csi_CUP,
    'I':	this.csi_CHT,
    'J':	this.csi_ED,
    'K':	this.csi_EL,
    'L':	this.csi_IL,
    'M':	this.csi_DL,
    'P':	this.csi_DCH,
    'S':	this.csi_SU,
    'T':	this.csi_SD,
    'W':	this.csi_CTC,
    'X':	this.csi_ECH,
    'Z':	this.csi_CBT,
    '`':	this.csi_HPA,
    'a':	this.csi_HPR,
    'b':	this.csi_REP,
    'c':	this.csi_DA,
    'd':	this.csi_VPA,
    'e':	this.csi_VPR,
    'f':	this.csi_HVP,
    'g':	this.csi_TBC,
    'h':	this.csi_SM,
    'l':	this.csi_RM,
    'm':	this.csi_SGR,
    'n':	this.csi_DSR,
    'r':	this.csi_DECSTBM,
    's':	this.csi_SCP,
    'u':	this.csi_RCP,
    'x':	this.csi_DECREQTPARM,
    '!p':	this.csi_DECSTR
  };
  this.vt100_keyfilter_ansikeys = {
    '~':'~',
    'A':'\x1b[A',
    'B':'\x1b[B',
    'C':'\x1b[C',
    'D':'\x1b[D',
    'F':'\x1b[F',
    'H':'\x1b[H',
    '1':'\x1b[5~',
    '2':'\x1b[6~',
    '3':'\x1b[2~',
    '4':'\x1b[3~',
    'a':'\x1bOP',
    'b':'\x1bOQ',
    'c':'\x1bOR',
    'd':'\x1bOS',
    'e':'\x1b[15~',
    'f':'\x1b[17~',
    'g':'\x1b[18~',
    'h':'\x1b[19~',
    'i':'\x1b[20~',
    'j':'\x1b[21~',
    'k':'\x1b[23~',
    'l':'\x1b[24~'
  };
  this.vt100_keyfilter_appkeys = {
    '~':'~',
    'A':'\x1bOA',
    'B':'\x1bOB',
    'C':'\x1bOC',
    'D':'\x1bOD',
    'F':'\x1bOF',
    'H':'\x1bOH',
    '1':'\x1b[5~',
    '2':'\x1b[6~',
    '3':'\x1b[2~',
    '4':'\x1b[3~',
    'a':'\x1bOP',
    'b':'\x1bOQ',
    'c':'\x1bOR',
    'd':'\x1bOS',
    'e':'\x1b[15~',
    'f':'\x1b[17~',
    'g':'\x1b[18~',
    'h':'\x1b[19~',
    'i':'\x1b[20~',
    'j':'\x1b[21~',
    'k':'\x1b[23~',
    'l':'\x1b[24~'
  };
    this.reset_hard();
}

Terminal.prototype= {
	// UTF-8 functions
  utf8_decode : function(d){
    o = '';
    var c;
    for(var i=0; i < d.length; i++){
      c=d[i];
      _char = ord(c);
      if(this.utf8_units_count != this.utf8_units_received){
	this.utf8_units_received += 1;
	if(( _char & 0xc0) == 0x80)  {
	  this.utf8_char = chr((ord(this.utf8_char) << 6) | (_char & 0x3f));
	  if(this.utf8_units_count == this.utf8_units_received){
	    if (this.utf8_char<chr(0x10000)) {
	      o += unichr(this.utf8_char);
	    }
	    this.utf8_units_count = this.utf8_units_received = 0;
	  }
	}
	else {
	  o += '?';
	  while( this.utf8_units_received) {
	    o += '?';
	    this.utf8_units_received -= 1;
	  }
	  this.utf8_units_count = 0;
	}
      }
      else {
	if((_char & 0x80) == 0x00){
	  o += c;
	  }
	else if(_char & 0xe0 == 0xc0) {
	  this.utf8_units_count = 1;
	  this.utf8_char = chr(_char & 0x1f);
	}
	else if((_char & 0xf0) == 0xe0) {
	  this.utf8_units_count = 2;
	  this.utf8_char =chr(_char & 0x0f);
	}
	else if((_char & 0xf8) == 0xf0){
	  this.utf8_units_count = 3;
	  this.utf8_char = chr(_char & 0x07);
	}
	else {
	  o += '?';
	}
      }
    }

  return o;
  },
 // I think one of these braces is erroneus

  utf8_charwidth: function(_char) {
    if (_char >= chr(0x2e80)){
      return 2;
    }
    else{
      return 1;
    }
  },
  peekcount : 0,
    // Low-level terminal functions
    peek: function( y0, x0, y1, x1) {

       var a= this.screen.slice(this.w * y0 + x0,this.w * (y1 - 1) + x1);

      return a
    },
  poke : function ( y, x, s){
    var pos = this.w * y + x;
    //this.screen.slice(pos,pos + s.length) = s;
    this.screen=insertSlice(this.screen,pos,pos + s.length,s);//fixed
      if(this.peekcount < 50){
//	console.log(pos,s);
	this.peekcount++;
      }
  },
  fill : function( y0, x0, y1, x1, _char){
    var n = this.w * (y1 - y0 - 1) + (x1 - x0);
//    this.poke(y0, x0, array.array('i', [_char] * n));
    this.poke(y0, x0, arr_fill(_char,n)); //fixed
  },
  clear : function( y0, x0, y1, x1){
    this.fill(y0, x0, y1, x1, this.attr | 0x20);
  },

	// Scrolling functions

  scroll_area_up: function( y0, y1, n){
    if(typeof n == 'undefined'){
      n=1;
    }
    n = Math.min(y1-y0, n);
    this.poke(y0, 0, this.peek(y0 + n, 0, y1, this.w));
    this.clear(y1-n, 0, y1, this.w);
  },
  scroll_area_down : function(y0, y1, n) {
    if(typeof n == 'undefined'){
      n=1;
    }
    n = Math.min(y1-y0, n);
    this.poke(y0 + n, 0, this.peek(y0, 0, y1-n, this.w));
    this.clear(y0, 0, y0 + n, this.w);
  },
  scroll_area_set : function( y0, y1) {
    var y0 = Math.max(0, Math.min(this.h-1, y0));
    var y1 = Math.max(1, Math.min(this.h, y1));
    if( y1 > y0){
      this.scroll_area_y0 = y0;
      this.scroll_area_y1 = y1;
    }
  },
  scroll_line_right : function( y, x, n){
    if(typeof n == 'undefined'){
      n=1;
    }
    if( x < this.w) {
      var n = Math.min(this.w-this.cx, n);
      this.poke(y, x + n, this.peek(y, x, y + 1, this.w - n));
      this.clear(y, x, y + 1, x + n);
    }
  },
  scroll_line_left : function( y, x, n){
    if(typeof n == 'undefined'){
      n=1;
    }
    if( x < this.w) {
      var n = Math.min(this.w - this.cx, n);
      this.poke(y, x, this.peek(y, x + n, y + 1, this.w));
      this.clear(y, this.w - n, y + 1, this.w);
    }
  },
  // Cursor functions
  cursor_line_width : function( next_char){
    var  wx = this.utf8_charwidth(next_char);
    var lx = 0;
    for(var x=0; x < Math.min(this.cx,this.w); x++)  {
      _char = this.peek(this.cy, x, this.cy + 1, x + 1)[0] & 0xffff;
      wx += this.utf8_charwidth(_char);
      lx += 1;
    }
    return wx, lx;
  },
  cursor_up : function( n){
    if(typeof n == 'undefined'){
      n=1;
    }
    this.cy = Math.max(this.scroll_area_y0, this.cy - n);
  },
  cursor_down : function( n){
    if(typeof n == 'undefined'){
      n=1;
    }
    this.cy = Math.min(this.scroll_area_y1 - 1, this.cy + n);
  },
  cursor_left : function( n){
    if(typeof n == 'undefined'){
      n=1;
    }
    this.cx = Math.max(0, this.cx - n);
  },
  cursor_right : function( n){
    if(typeof n == 'undefined'){
      n=1;
    }
    this.cx = Math.min(this.w - 1, this.cx + n);
  },
  cursor_set_x : function( x){
    this.cx = Math.max(0, x);
  },
  cursor_set_y : function( y){
    this.cy = Math.max(0, Math.min(this.h - 1, y));
  },
  cursor_set : function( y, x){
    this.cursor_set_x(x);
    this.cursor_set_y(y);
  },
  // Dumb terminal
  ctrl_BS : function() {
//    var delta_y, cx = divmod(this.cx - 1, this.w);
    var delta_y = (this.cx -1 / this.w) |0;
    var cx = this.cx - 1 % this.w; //fixed
    var cy = Math.max(this.scroll_area_y0, this.cy + delta_y);
    this.cursor_set(cy, cx);
  },
  ctrl_HT : function( n){
    if(typeof n == 'undefined'){
      n=1;
    }
    if( n > 0 && this.cx >= this.w){
      return;
    }
    if( n <= 0 && this.cx == 0){
      return;
    }
    var ts = 0;
    for(var i=0; i < this.tab_stops.length; i++){
      if( this.cx >= this.tab_stops[i]){
	ts = i;
      }
      ts += n
      if( ts < this.tab_stops.length && ts >= 0){
	this.cursor_set_x(this.tab_stops[ts]);
      }
      else{
	this.cursor_set_x(this.w - 1);
      }
    }
  },
  ctrl_LF : function() {
    if(this.vt100_mode_lfnewline){
      this.ctrl_CR();
    }
  if( this.cy == this.scroll_area_y1 - 1){
    this.scroll_area_up(this.scroll_area_y0, this.scroll_area_y1);
    }
  else{
    this.cursor_down();
    }
  },
  ctrl_CR : function () {
    this.cursor_set_x(0);
  },
  dumb_write : function ( _char){
    if(_char < 32){
      if(_char == 8){
	this.ctrl_BS();
      }
      else if( _char == 9){
	this.ctrl_HT();
      }
      else if(_char >= 10 && _char <= 12){
	this.ctrl_LF();
      }
      else if(_char == 13){
	this.ctrl_CR();
      }
      return true
    }
  return false

  },
  dumb_echo : function( _char){

    // Check right bound
/*    wx, cx = this.cursor_line_width(_char);   original */
    var clw = this.cursor_line_width(_char);
    var wx=clw[0]; var cx = clw[1];

    // Newline
    if( wx > this.w){
      if(this.vt100_mode_autowrap){
	this.ctrl_CR();
	this.ctrl_LF();
      }
      else{
	this.cx = cx - 1;
      }
    }
    if(this.vt100_mode_insert){
      this.scroll_line_right(this.cy, this.cx);
    }
    if(this.vt100_charset_is_single_shift){
      this.vt100_charset_is_single_shift = false;
    }
    else if(this.vt100_charset_is_graphical && (_char & 0xffe0) == 0x0060){
	//FIXME  inspect this carefully
	//vt100_charset_graph is an array of hex numbers
	_char = this.vt100_charset_graph[_char - 0x60];

    }
    //FIXME inspect carefully,  array.arrauy is a specialized library in python
    //it builds arrays of homogenous types
    this.poke(this.cy, this.cx, [this.attr | _char] );
    this.cursor_set_x(this.cx + 1);
  },

// External interface
  set_size : function( w, h){
    if(w < 2 || w > 256 || h < 2 || h > 256){
      return false;
    }
    this.w = w;
    this.h = h;
    reset();
    return true;
  },
  read :function(){
    d = this.vt100_out;
    this.vt100_out = "";
    return d;
  },
  write : function( d){
    document.getElementById("lastout").innerHTML=d;
    d = this.utf8_decode(d);

    var c;
    for(var i=0; i<d.length; i++){
      c=d[i];

      var _char = ord(c);
      if(this.vt100_write(_char)){
	continue;
      }
      if(this.dumb_write(_char)){
	continue;
      }
      if(_char <= 0xffff){
	this.dumb_echo(_char);
      }
    }
    return true;
  },
  pipe : function( d){


    var o = '';
    var c;
    for(var i=0; i < d.length; i++){
      c=d[i];

      var _char = ord(c);//fixed
      if(this.vt100_keyfilter_escape){

	this.vt100_keyfilter_escape = false;
	try{

	  if(this.vt100_mode_cursorkey){
	    o += this.vt100_keyfilter_appkeys[c];
	  }
	  else{
	    o += this.vt100_keyfilter_ansikeys[c];
	  }
	}
	catch(ex){
//	  pass;
	}
      }
      else if(c == '~'){
	this.vt100_keyfilter_escape = true;
      }
      else if( _char == chr(127)) {
	if(this.vt100_mode_backspace){
	  o += chr(8);
	}
	else{
	  o += chr(127);
	}
      }
      else{
	o += c;
	if(this.vt100_mode_lfnewline && _char == chr(13)){
	  o += chr(10);
	}
      }
    }
    return o;
  },
  dump : function() {
    //dump = u"";
    vt1=this;
    this.attrs=[];
    var dump = ""; //fixed
    var attr_ = -1;
      //cx, cy = min(this.cx, this.w - 1), this.cy;
      var cx= Math.min(this.cx, this.w - 1);
      var cy = this.cy; // fixed
    for(var y=0; y < this.h; y++){
      var wx = 0;
      for(var x=0; x< this.w; x++){
	d = this.screen[y * this.w + x];
	_char = d & 0xffff;
//	console.log(_char);


	attr = d >> 16;
	this.attrs.push(d);
	// Cursor
	if(cy == y && cx == x && this.vt100_mode_cursor){
	  attr = attr & 0xfff0 | 0x000c;
	}
	// Attributes
	if(attr != attr_){
	  if(attr_ != -1){
	    dump += '</span>'; //fixed
	  }
	  if((attr_ & 0x0800) && !(attr & 0x0800)){
//	    dump+='</blink>';
	  }
	  if((attr_ & 0x1600) && !(attr & 0x1600)){
	    dump+='</b>';
	  }
	  bg = attr & 0x000f;
	  fg = (attr & 0x00f0) >> 4;
	  // Inverse
	  inv = attr & 0x0200;
	  inv2 = this.vt100_mode_inverse;
	  if((inv && !( inv2)) || (inv2 && !( inv))){ //fixed
	    //fg, bg = bg, fg;
	    var temp = fg;
	    fg = bg;
	    bg = temp;
	  }
	  // Concealed
	  if(attr & 0x0400){
	    fg = 0xc;
	  }
	  // Underline
	  if(attr & 0x0100){
	    ul = ' ul';
	  }
	  else{
	    ul = '';
	  }
	  if( attr & 0x0800){
//	    dump+= '<blink>';
	  }
          if( attr & 0x1600){
	    dump+= '<b>';
	  }

	  dump += '<span class="f'+hex(fg) + ' b' + hex(bg) +' ' + ul + '">';
	  attr_ = attr;
	}
	// Escape HTML characters
	if(_char == 38){
	  dump += '&amp;';
	}
	else if(_char == 60){
	  dump += '&lt;';
	}
	else if(_char == 62){
	  dump += '&gt;';
	}
	else{
	  wx += this.utf8_charwidth(_char);
	  if(wx <= this.w){
	    dump += unichr(_char);
	  }
	}
      }
      dump += "\n";

    }
    // Encode in UTF-8
    //dump = dump.encode('utf-8');
    dump = dump; //fixed
    //console.log(dump);
    dump += '</span>';
    // Cache dump
    if(this.dump_cache == dump){
      return '';
    }
    else{
      this.dump_cache = dump;
      //return '<c cy="%03d" />' % cy + dump;
      return dump;
    }
  }
}
    function MyVt100(w,l,el){

      this.el=document.getElementById(el);
      this.terminal=new Terminal(w,l);
    }
aa =0, bb=0,cc=0,dd=0,ee=0,ff=0;
MyVt100.prototype = {


  write : function(str){

    this.terminal.write(str)

    dout=this.terminal.dump();
    this.el.innerHTML=dout;
//    console.log(dout);


//    console.log(aa,bb,cc,dd,ee,ff);
    //console.log(this.terminal.mcount);

//    console.log(vt100_chars);
  }
}
