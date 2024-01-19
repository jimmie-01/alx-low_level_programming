#!/bin/bash
wget -P .. https://raw.githubuser.content.com/jimmie-01/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
