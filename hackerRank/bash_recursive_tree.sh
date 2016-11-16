#! /bin/sh
#
# bash_recursive_tree.sh
# Copyright (C) 2016 sabertazimi <sabertazimi@gmail.com>
#
# Distributed under terms of the MIT license.
#

declare -A matrix

for((i=1;i<=63;i++));
do
    for((j=1;j<=100;j++));
    do
        matrix[$i,$j]='_'
    done
done

function update_matrix {
    local p1 p2 p3 p4 p5 p6
    local q1 q2 q3
    local p13 p14

    p1=$1
    p2=$(echo $2-1|bc)
    p1=$(echo $p1-1|bc)
    p3=$(echo 2^$p2|bc)
    p4=$(echo 2*$p3|bc)
    p5=$(echo $p3/2|bc)
    p6=$3

    for((q1=$p3;q1<$p4;q1++));
    do
        if [ "$(echo $q1-$p3|bc)" -lt "$p5" ]
        then
            # q2 = 18+p6-(p5-(q1-p3))
            # left offset to center
            q2=$(echo 18+$p6-$(echo $p3/2-$(echo $q1-$p3|bc)|bc)|bc)

            # q3 = 18+p6+(p5-(q1-p3))
            # right offset to center
            q3=$(echo 18+$p6+$(echo $p3/2-$(echo $q1-$p3|bc)|bc)|bc)

            matrix[$q1,$q2]=1
            matrix[$q1,$q3]=1
        else
            # echo crossing point
            matrix[$q1,$(echo 18+$p6|bc)]=1
        fi
    done

    if [ $p1 -ge 1 ]
    then
        p13=$(echo $p6-$p3/2|bc)
        p14=$(echo $p6+$p3/2|bc)

        update_matrix $p1 $p2 $p13
        update_matrix $p1 $p2 $p14
    fi
}

read iteration

# iteration <- [1, 5]
update_matrix $iteration 6 32

for((i=1;i<=63;i++));
do
    for((j=1;j<=100;j++));
    do
        printf '%s' "${matrix[$i,$j]}"
    done
    echo ""
done