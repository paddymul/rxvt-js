
var counter = 0;
if(!console){
try{
    console ={log:function(){}};

} catch(e) {}
}
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
    this.max_diff = .2;
    this.min_milli_jump=300;
    //this.a.row_buf=false;
    //this.a.scr_poweron();
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
        /*
        if(start_from){
            for(; timingPointer < start_from; timingPointer++){
                mspf=local_output_timing[timingPointer];
                soundPointer+=mspf/1000;
                bpf=local_output_jumps[timingPointer];
                where += bpf;
            }
        }
        */
        var stop = end ? end : local_output_timing.length;//if(!end)
        var anim = this;
        var hnd;
        hnd = setTimeout(
                   function() {
                       
                       soundPointer+=mspf/1000;

                       var diff = player_el.currentTime -soundPointer;
                       if(diff > this.max_diff) {
                           soundSeek(soundPointer);
                           console.log(diff);
                       }

                       //console.log(timingPointer);
                       bpf=local_output_jumps[timingPointer];
                       var me = arguments.callee;
                       mspf=local_output_timing[timingPointer];

                       //console.log(mspf);
                       anim.output_line(text.substr(where, bpf));
                       
                       console.log(timingPointer, where, bpf);
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
                               hnd = setTimeout(me, mspf);
                           }
                       }
                   }, mspf);
        
        /*        setTimeout(
                   function() {
                       if(doAnimate){
                           soundPointer+=mspf/1000;

                           var diff = player_el.currentTime -soundPointer;
                           if(diff > this.max_diff) {
                               soundSeek(soundPointer);
                               console.log(diff);
                           }

                           //console.log(timingPointer);
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
        */
    }

}

Animator.prototype = {
    output_line : function (str){
        if(this.is_outputting){
            console.log("outputting while already outputting");
        }
        this.is_outputting=true;
        //console.log(str);
        this.a.cmd_write(str, str.length);
        this.a.scr_refresh();
        this.is_outputting=false;
    },
    /*
    setupTiming2: function(){
        var added_time = [];

        for(var i = 0 ; i < timing.length-1; i++){
            var secs = timing[i][0];
            var micro_secs =(timing[i][1]/(1000*1000));
            console.log("secs,micro_secs", secs,micro_secs);
        
            added_time.push(secs + micro_secs);
        }
        var startsecs=added_time[0];
        var zero_based_time = [];
        for(var i = 0 ; i < added_time.length; i++){
            var diff_secs = added_time[i]- startsecs;
            console.log("diff_secs",diff_secs);
        
            zero_based_time.push(diff_secs);
        }


        this.output_jumps=[];
        this.output_timing=[];
        var residual_milli_jump=0;
        var residual_jump=0;

        for(var i = 0 ; i < zero_based_time.length; i++){
            residual_milli_jump += zero_based_time[i]*100;
            residual_jump += timing[i][2];
            if(residual_milli_jump < this.min_milli_jump){
                continue;}
            else{
                this.output_timing.push(residual_milli_jump);
                this.output_jumps.push(residual_jump);
                console.log(residual_jump,residual_milli_jump);
                residual_milli_jump=0;
                residual_jump=0;
            }
            
        }
    },
    */
    setupTiming2: function(){
        var added_time = [];

        for(var i = 0 ; i < timing.length-1; i++){
            var secs = timing[i][0];
            var micro_secs =(timing[i][1]/(1000*1000));
            console.log("secs,micro_secs", secs,micro_secs);
        
            added_time.push(secs + micro_secs);
        }
        var startsecs=added_time[0];
        var zero_based_time = [];
        for(var i = 0 ; i < added_time.length; i++){
            var diff_secs = added_time[i]- startsecs;
            console.log("diff_secs",diff_secs);
        
            zero_based_time.push(diff_secs);
        }


        this.output_jumps=[];
        this.output_timing=[];
        var residual_milli_jump=0;
        var residual_jump=timing[0][2];

        for(var i = 0 ; i < zero_based_time.length-1; i++){
            var current_jump = zero_based_time[i]*100;
            residual_milli_jump += current_jump;
            residual_jump += timing[i+1][2];
            if(current_jump< this.min_milli_jump){
                continue;}
            else{
                this.output_timing.push(residual_milli_jump);
                this.output_jumps.push(residual_jump);
                console.log(residual_jump,residual_milli_jump);
                residual_milli_jump=0;
                residual_jump=0;
            }
            
        }
    },

    startAnimate : function () {

        this.VTAnimator2(this.resp, 0, this.resp.length);
        //this.VTAnimator2(this.resp.slice(0,5650), 0, 5650);

    }
}

$('document').ready(

    function (){
        a = new Animator("pt",tty_file);
        function animate(){
            doAnimate = true;
            console.log('animate called');
            //a = new Animator("pt",tty_file);
            a.startAnimate();
            soundPlay();
            console.log(" animator setup ");
        }
        console.log("ready function");
        $('#play_start').click(animate);
        $('#fast_forward').click(
            function(){
                //a.output_line(a.resp.slice(5150,5250));
                a.output_line(a.resp.slice(0,5850));
                a.a.scr_refresh();
                                 });
    });