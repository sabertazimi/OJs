#! /bin/sh
#
# bash_compute_average.sh
# Copyright (C) 2016 sabertazimi <sabertazimi@gmail.com>
#
# Distributed under terms of the MIT license.
#

read n
sum=0

for ((i=0; i < n; i++)) ; do
    read a
    ((sum+=a))
done

printf "%.3f" $(echo "scale = 4;$sum/$n"|bc)
