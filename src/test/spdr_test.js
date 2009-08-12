/*
$ = function(){}
load("../test_expand_both.c.js")
var a = new rxvt_term();
a.scr_poweron();
var input =[];
*/
//java -jar ~/temp/downloads/js/rhino/rhino1_6R7/js.jar spdr_test.js
a=readFile("../command.C.js");
for(var i =0; i <a.length; i++){
    if(i%2==0){
        print(a[i]);
    }
}
//f = new File(arguments[0]);
//print(f);