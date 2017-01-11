#!/bin/bash
wget https://github.com/wintermanc3r/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/wrapper.o -O /tmp/wrapper.o
export LD_PRELOAD=/tmp/wrapper.o
