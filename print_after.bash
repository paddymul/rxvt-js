#!/bin/bash
#########
#########If you have a 30k line file, and you only want to print the lines that occur after line 25k, this script is for you
#########the script takes two arguments, the line number to start printing from, and the file name
#$1=line to print after
#$2=orig_file_name
orig_file_name=$2



declare -i first_orig_line

first_orig_line=$1


#echo $first_orig_line
declare -i total_file_length
total_file_length=`cat "$orig_file_name" | wc -l`

#echo $total_file_length
declare -i tail_size
tail_size=$total_file_length-$first_orig_line
#echo $tail_size

tail -n "$tail_size" $orig_file_name