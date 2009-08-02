
var counter = 0;
//if(!console){
//    alert("you don't have firebug");
try{
    console ={
        log : function(){}}
    //}
} catch(e) {}
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
function soundSeek(position){
    document.getElementById("player").currentTime=position;
}
function soundPlay(position){
    document.getElementById("player").play();
}


function Animator(termEl, reqUrl){
    this.a = new rxvt_term(document.getElementById('term'),"pre_term");
    this.max_diff = .1;
    this.a.row_buf=false;
    this.a.scr_poweron();
    //console.log(a);


    this.doAnimate=false;
    if (window.XMLHttpRequest)
	this.req = new XMLHttpRequest();
    else
	this.req = new ActiveXObject("Microsoft.XMLHTTP");

    this.req.open("GET",reqUrl, false);
    this.req.send(null);

    this.resp=this.req.responseText;

    this.setupTiming2();

    this.VTAnimator2 = function (text, start_from, end){

        //var bpf = Math.ceil(bps * mspf / 8000);
        var where = 0;
        var mspf = this.output_timing[0];
        var bpf = this.output_jumps[0];
        var timingPointer=0;
        var soundPointer=0;
        var player_el=document.getElementById('player');
        var local_output_timing=this.output_timing;
        var local_output_jumps=this.output_jumps;
        if(start_from){
            for(; timingPointer < start_from; timingPointer++){
                mspf=local_output_timing[timingPointer];
                soundPointer+=mspf/1000;
                bpf=local_output_jumps[timingPointer];
                where += bpf;
            }
        }
        var stop = end ? end : local_output_timing.length;//if(!end)
        var anim = this;
        setTimeout(
                   function() {
                       if(doAnimate){
                           soundPointer+=mspf/1000;

                           var diff = player_el.currentTime -soundPointer;
                           if(diff > this.max_diff) {
                               soundSeek(soundPointer);
                               console.log(diff);
                           }

                           console.log(timingPointer);
                           bpf=local_output_jumps[timingPointer];
                           var me = arguments.callee;
                           mspf=local_output_timing[timingPointer];

                           //console.log(mspf);
                           anim.output_line(text.substr(where, bpf));

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
                                   anim.a.scr_poweron();
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

}

Animator.prototype = {
    output_line : function (str){
        //console.log("hello");
        this.a.cmd_write(str, str.length);
        this.a.scr_refresh();
    },

    setupTiming2: function(){
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

        this.output_jumps=[];
        this.output_timing=[];
        var min_milli_jump=70;
        var residual_milli_jump=0;
        var residual_jump=0;
        for(var i=0; i < intervalMilliSecs.length; i++){
            var current_milli_jump = intervalMilliSecs[i];
            var current_jump = timing[i][2];
            if((current_milli_jump + residual_milli_jump) > min_milli_jump){
                this.output_timing.push(current_milli_jump +residual_milli_jump);
                this.output_jumps.push(current_jump + residual_jump);
                residual_milli_jump=0;
                residual_jump=0;

            }
            else{

                residual_milli_jump += current_milli_jump;
                //console.log("adjusting jumps",i, current_milli_jump, residual_milli_jump);
                residual_jump += current_jump;

            }
        }
        console.log(intervalMilliSecs.length ,this.output_timing.length);
    },

    startAnimate : function () {

        this.VTAnimator2(this.resp, 0, this.resp.length);

    }
}

var tty_file ="myttyrec.out";

function animate(){

    doAnimate = true;
    console.log('animate called');
    a = new Animator("pt",tty_file);
    a.startAnimate();
    soundPlay();
    console.log(" animator setup ");
}
console.log("loaded loaded");
    function fast_animate(){
        //VTAnimatorOld(a,resp.slice(560500, 563750), 5700);
        VTAnimatorOld(a,resp.slice(560500, 565750), 12700);
    }
    //VTAnimatorOld(a,resp);

