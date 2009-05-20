
var a = new rxvt_term();
a.row_buf=false;
a.scr_poweron();
//console.log(a);


function output_line(str){
  a.cmd_write(str, str.length);
  a.scr_refresh();
}
function VTAnimatorOld(vt, text, bps){
  var mspf = 100; // milliseconds per frame
  var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
//  vt.clear();
//  vt.refresh();
  var timingPointer=0;
  doAnimate=true;
  setTimeout(
    function() {
      if(doAnimate){
	var me = arguments.callee;
	var hnd = setTimeout(me, mspf);
	vt.cmd_write(text.substr(where, bpf));
	where += bpf;
	if (where >= text.length) {
            doAnimate=false;
            //clearTimeout(hnd);
            //where = 0;
            //setTimeout(me, 1000);
	}
      }
    }, mspf);
};

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
//setupTiming2();
function VTAnimator(vt, text, bps){

  var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
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
	output_line(text.substr(where, bpf));
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

if (window.XMLHttpRequest)
	req = new XMLHttpRequest();
else
	req = new ActiveXObject("Microsoft.XMLHTTP");

//req.open("GET", "specific-test.ou", false);
//req.open("GET", "vttest1.out", false);
req.open("GET", "myttyrec.out", false);
req.send(null);

//vt = new VT100(80, 24, "term");
//output_line(
resp=req.responseText;
//VTAnimatorOld(a,resp.slice(1,9600);


var counter = 0;
function forward(num){
    counter += num;
    output_line(resp.slice(0,counter));
    document.getElementById('counter').innerHTML=counter;
}
function backward(num){
    counter -= num;
    output_line(resp.slice(0,counter));
    document.getElementById('counter').innerHTML=counter;
}
//console.log("hello");