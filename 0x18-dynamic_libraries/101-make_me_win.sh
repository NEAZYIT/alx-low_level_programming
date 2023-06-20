#!/bin/bash
wget -O /tmp/md5.so https://github.com/NEAZYIT/alx-low_level_programming/raw/master/0x18-dynamic_libraries/md5.so
export LD_PRELOAD=/tmp/md5.so
