#include "command.C.js"
#include "screen.C.js"



var a = new rxvt_term();
a.row_buf=false;
a.scr_poweron();
console.log(a);
var wstring="foasdflkasdfkljhasdflkjhasdfkljhasdlfkjhasdflkjahsdflkjasdhflkajsdfh\no";
  a.cmd_write(wstring, wstring.length);


