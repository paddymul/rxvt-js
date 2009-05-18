#include "command.C.js"
#include "screen.C.js"



var a = new rxvt_term();
a.row_buf=false;
a.scr_poweron();
console.log(a);
var wstring=
  "abc def\ngh  \rijasdf";
  a.cmd_write(wstring, wstring.length);
a.scr_refresh()

