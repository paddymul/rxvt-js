#!/bin/bash

./configure --disable-backspace-key                        --disable-swapscreen                           --disable-resources                            --disable-delete-key                           --disable-xft --disable-font-styles --disable-xim --disable-combining --disable-fallback--disable-utmp --disable-wtmp --disable-lastlog --disable-afterimage --disable-transparency --disable-fading --disable-rxvt-scroll --disable-next-scroll --disable-frills --disable-keepscrolling --disable-selectionscrolling --disable-mousewheel --disable-slipwheeling --disable-pointer-blank --disable-perl 

make exp

c_kws_regex="(void|char|unsigned|int |short|static|rend_t|unicode_t)" 
sed  -E '/.*'"$c_kws_regex"'.*/{h;x;s/^/\/\//;p;x;s/'"$c_kws_regex"'//g;}'