ls | grep "[.][Chx]" | grep -v js | xargs grep -h "#define" | gsed -r 's/#define ([a-zA-Z_]*).*/\1/' | sort -u > macrodefs
cat macrodefs |xargs -L 1  -I {}  echo " echo \`cat screen.C command.C | grep -h -c  {}  \`\" {} \" \` ls | grep \"[.][Chx]\" | grep -v js | xargs grep  \"#define {}\" \` " > count_macrodefs
chmod +x count_macrodefs
./count_macrodefs