#!/usr/bin/python
import sys

cut_start = int(sys.argv[1])
cut_end = int(sys.argv[2])
in_stream = sys.stdin.read()
sys.stdout.write("".join([in_stream[:cut_start],in_stream[cut_end:]]))

