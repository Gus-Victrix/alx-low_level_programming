#!/bin/bash
wget -P /tmp -q "https://github.com/Gus-Victrix/alx-low_level_programming/raw/master/0/0x18-dynamic_libraries/libmask.so"
export LD_PRELOAD="/tmp/libtest.so"
