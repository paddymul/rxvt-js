#define DEBUG 1

var console = {
 log : function(){}};

var document = {
 getElementById : function() {
    return {};
  }};
debug = {csi_debug :false};
#include "command.C.js"
#include "screen.C.js"

/*output_line("cursorhome            Move cursor to upper left corner       ^[[H");
output_line("cursorhome            Move cursor to upper left corner       ^[[;H");
output_line("cursorpos(v,h) CUP    Move cursor to screen location v,h     ^[[5;8H");
output_line("hvh");
*/
