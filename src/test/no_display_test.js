

var a = new rxvt_term();
a.row_buf=false;
a.scr_poweron();
console.log(a);


function output_line(str){
  a.cmd_write(str, str.length);
  a.scr_refresh();
}

function test_no_display(t_str, name){
    output_line(t_str);
    //console.log(a.row_buf[0].t);
    //console.assert(a.row_buf[0].t=="");
    //    a.row_buf[0].t="";
    
}

//t_str="\[2;62H";
test_no_display("\[2;");
//debugger
test_no_display("\[2;62H");
test_no_display("\[2;62H");
//t_str"\e[2;62H";
