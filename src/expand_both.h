#include "command.C.js"
#include "screen.C.js"



var a = new rxvt_term();
a.scr_poweron();
console.log(a);
a.cmd_write("fo\no",4);
//console.profileEnd();

