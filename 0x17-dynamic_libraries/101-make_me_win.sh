#!/bin/bash
 wget -q -O /tmp/wrapper.so https://github.com/wintermanc3r/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/wrapper.so
 export LD_PRELOAD=/tmp/wrapper.so
