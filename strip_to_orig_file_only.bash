#!/bin/bash
#$1=file_to_search
#$2=orig_file_name

base_dir=`dirname "$0"`/
# when macros are expanded all the header files are prepended to the file, this makes for too large a file
#this script tries to strip the completely macro expanded fil back to its original size



#                     looks like :# 347 "stdio.h"  | remove the lines that aren't the original file  | get the last line not from the original file| grab only the number of that line
first_orig_line=`cat "$1" | grep -n '^[#] [0-9]*'  | grep -v $2                                      | tail -n 1                                   | sed 's/\([0-9]*\).*/\1/'`

$base_dir./print_after.bash $first_orig_line $1

