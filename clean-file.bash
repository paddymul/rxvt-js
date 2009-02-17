#!/bin/bash


#
#pulling the original source out of all the expanded macro definitions
#since cpp expands all the macros especially the includes, the 2000 lines of source in command.c dont occur in the cpp output until 
#around line 24000, here is how I can find it
#includes look like this 
## 234 orginal_file
#I can use this to find the first include after the last include that isnt from the original source file
#so
# 2 command.c
# 234 gcc/io.h
# 8 gcc/std.io
# 9 command.c
# 38 command.c
#!/bin/bash
# $1=original file name

base_dir=`dirname "$0"`/


orig_source_name="command.C"
expanded_source_name="$orig_source_name"_exp.C
echo $expanded_source_name
stripped_expanded_name="$expanded_source_name"_strp.C
echo $stripped_expanded_name
$base_dir./strip_to_orig_file_only.bash $expanded_source_name $orig_source_name > $stripped_expanded_name
#$base_dir./strip_to_orig_file_only.bash $expanded_source_name $orig_source_name # > $stripped_expanded_name


cat "$base_dir"multi-line.test | \
sed -e 's:^\([#] [0-9]+ .*\):\/\\1:' |\
sed -e ':"$block_start"'[ ]*$/ {
N
s:'"$block_start"'\n[ ]*[{]:\1 {:
}'\
| sed -E '/'"$c_kws_regex"'[ ]*$/ {
N
s:'"$c_kws_regex"'\n(.*[:][:]):\1 \2:
}'

#outfile="$1.mod.js"
#./remove-comment.bash  " c_keywords " "(void|char|unsigned|int |short|static|rend_t|unicode_t)"  $1 >
#c_kws_regex="(void|char|unsigned|int |short|static|rend_t|unicode_t)" 
#sed  -E '/.*'"$c_kws_regex"'.*/{h;x;s/^/\/\//;p;x;s/'"$c_kws_regex"'//g;}'