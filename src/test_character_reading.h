#define DEBUG 1
#define chr_debug_loop 1


#define CHR_FUNCTION_DEBUG(function_name) print(function_name);
#define CHR_VAR_DEBUG(var_name, var_val) print(var_name,var_val);


#define ROW_BUF_DEBUG ;
#define  ROW_IN_BUF_DEBUG(label) ;
#define  ROW_DEBUG(label, line)  ;

#define FUNCTION_DEBUG(function_name) 
#define VAR_DEBUG(var_name, var_val)
#define CASE_DEBUG(function_name) 


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
