ls |\
grep "[.][Chx]" | grep -v js |\
xargs grep -h "^#define" > raw_defs
cat raw_defs | gsed -r 's/#define ([a-zA-Z_]*)[^a-zA-Z_]*.*/\1/' > cleaned_defs
cat cleaned_defs | sort -u  > macrodefs
cat macrodefs |\
xargs -L 1   -I {}  echo " echo \`cat screen.C command.C | grep -h -c  {}[^a-zA-Z_]  \`\" {} \" \` ls | grep \"[.][Chx]\" | grep -v js | xargs grep  \"#define {}[^a-zA-Z_]\" \` " >count_macrodefs
chmod +x count_macrodefs
./count_macrodefs | sort -n  > macro_usages