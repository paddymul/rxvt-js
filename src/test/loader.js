
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
var a = new rxvt_term(document.getElementById('term'),"pre_term");
a.row_buf=false;
a.scr_poweron();
//console.log(a);


var doAnimate=false;
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

function output_line(str){
    //console.log("hello");
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
        vt.scr_refresh();
	where += bpf;
	if (where >= text.length) {
            doAnimate=false;
            console.log("done");
            //clearTimeout(hnd);
            //where = 0;
            //setTimeout(me, 1000);
	}
      }
    }, mspf);
};

function VTAnimator(vt, text){

    //var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
  var mspf =intervalMilliSecs[0];
  var bpf=timing[0][2];
  var timingPointer=0;
  var soundPointer=0;

  setTimeout(
    function() {
      if(doAnimate){
          

        soundPointer+=mspf/1000;

        if(diff > 0.2) {
            soundSeek(soundPointer);
            console.log(diff);
        }
	bpf=timing[timingPointer][2];
	var me = arguments.callee;
	mspf=intervalMilliSecs[timingPointer];
	var hnd = setTimeout(me, mspf);
        //console.log(mspf);
	output_line(text.substr(where, bpf));
	timingPointer++;
	where += bpf;
	if (where >= text.length) {
	  clearTimeout(hnd);
	  where = 0;
	  timingPointer=0;
          vt.scr_poweron();
	  setTimeout(me, 0);
          soundSeek(0);
          
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

  output_jumps=[];
  output_timing=[];
  var min_milli_jump=70;
  var residual_milli_jump=0;
  var residual_jump=0;
  for(var i=0; i < intervalMilliSecs.length; i++){
      var current_milli_jump = intervalMilliSecs[i];
      var current_jump = timing[i][2];
      if((current_milli_jump + residual_milli_jump) > min_milli_jump){
          output_timing.push(current_milli_jump +residual_milli_jump);
          output_jumps.push(current_jump + residual_jump);
          residual_milli_jump=0;
          residual_jump=0;

      }
      else{

          residual_milli_jump += current_milli_jump;
          //console.log("adjusting jumps",i, current_milli_jump, residual_milli_jump);
          residual_jump += current_jump;

      }
  }
  console.log(intervalMilliSecs.length ,output_timing.length);
}

function VTAnimator2(vt, text, start_from, end){

    //var bpf = Math.ceil(bps * mspf / 8000);
  var where = 0;
  var mspf =output_timing[0];
  var bpf=output_jumps[0];
  var timingPointer=0;
  var soundPointer=0;
  var player_el=document.getElementById('player');
  var local_output_timing=output_timing;
  var local_output_jumps=output_jumps;
  if(start_from){
      for(; timingPointer < start_from; timingPointer++){
	mspf=local_output_timing[timingPointer];
        soundPointer+=mspf/1000;
	bpf=local_output_jumps[timingPointer];
	where += bpf;
      }
  }
  var stop = end ? end : local_output_timing.length;//if(!end)
  setTimeout(
    function() {
      if(doAnimate){
          

        soundPointer+=mspf/1000;

        var diff = player_el.currentTime -soundPointer;
        if(diff > 0.2) {
            soundSeek(soundPointer);
            console.log(diff);
        }

        console.log(timingPointer);
	bpf=local_output_jumps[timingPointer];
	var me = arguments.callee;
	mspf=local_output_timing[timingPointer];

        //console.log(mspf);
	output_line(text.substr(where, bpf));

        //console.log(timingPointer);
	timingPointer++;
	where += bpf;
        if(timingPointer > stop){
            clearTimeout(hnd);
        }
        else {
            if (where >= text.length) {
                clearTimeout(hnd);
                where = 0;
                timingPointer=0;
                vt.scr_poweron();
                setTimeout(me, 0);
                soundSeek(0);
            }
            else {
                var hnd = setTimeout(me, mspf);
            }
        }
      }
    }, mspf);
}

function animate(){
    setupTiming2();
    //soundPlay();
    //VTAnimator2(a,resp,230,245);
    VTAnimator2(a,resp);
        
    doAnimate=!doAnimate;
    console.log(doAnimate);
}

function fast_animate(){
    //VTAnimatorOld(a,resp.slice(560500, 563750), 5700);
    VTAnimatorOld(a,resp.slice(560500, 565750), 12700);
}
//VTAnimatorOld(a,resp);

