$ = function(){}
load("../test_expand_both.c.js");
var a = new rxvt_term();


function output_section(str, start, end){
    var n_string = str.slice(start,end);
    a.cmd_write(n_string, n_string.length);
    }
function output_file(args){
    var contents=readFile(args[0]);
    var start =0, end = contents.length;
    if(args[1]) {
        start=args[1];
    }
    if(args[2]) {
        end=args[2];
    }
    output_section(contents,start,end);
}
output_file(arguments);
" run like this "
+ " java -jar ~/temp/downloads/js/rhino/rhino1_6R7/js.jar spdr_test.js 58-bak"
