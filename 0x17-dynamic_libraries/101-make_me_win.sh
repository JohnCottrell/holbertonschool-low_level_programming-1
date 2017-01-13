#!/bin/bash
wget -q https://github.com/wintermanc3r/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/wrapper.so -O /tmp/wrapper.so
export LD_PRELOAD=/tmp/wrapper.so
