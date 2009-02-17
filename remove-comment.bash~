#!/bin/bash

#c_kws_regex="(void|char|unsigned|int |short|static|rend_t|unicode_t)" 
#comment_start="C KEY_WORDS"
comment_start=$1
c_kws_regex=$2

sed  -E '/.*'"$c_kws_regex"'.*/{h;x;s/^/\/\/"$comment_start"/;p;x;s/'"$c_kws_regex"'//g;}'