#! /bin/sh
#
# bash_recursive_tree.sh
# Copyright (C) 2016 sabertazimi <sabertazimi@gmail.com>
#
# Distributed under terms of the MIT license.
#

# height of tree: 2^5 -> 2^4 -> ... -> 2^1
# width  of tree: 2^5 -> 2^4 -> ... -> 2^1 (offset to center is 2^(i-1))

declare -A matrix

for((i=1;i<=63;i++));
do
    for((j=1;j<=100;j++));
    do
        matrix[$i,$j]='_'
    done
done

function update_matrix {
    local itera power height p4 branch p6
    local q1 q2 q3
    local p13 p14

    power=$(echo $2-1|bc)
    itera=$(echo $1-1|bc)
    height=$(echo 2^$power|bc)
    p4=$(echo 2*$height|bc)
    branch=$(echo $height/2|bc)
    p6=$3

    for((q1=$height;q1<$p4;q1++));
    do
        if [ "$(echo $q1-$height|bc)" -lt "$branch" ]
        then
            # q2 = 18+p6-(branch-(q1-height))
            # left offset to center
            q2=$(echo 18+$p6-$(echo $branch-$(echo $q1-$height|bc)|bc)|bc)

            # q3 = 18+p6+(branch-(q1-height))
            # right offset to center
            q3=$(echo 18+$p6+$(echo $branch-$(echo $q1-$height|bc)|bc)|bc)

            matrix[$q1,$q2]=1
            matrix[$q1,$q3]=1
        else
            # echo crossing point
            matrix[$q1,$(echo 18+$p6|bc)]=1
        fi
    done

    if [ $itera -ge 1 ]
    then
        p13=$(echo $p6-$branch|bc)
        p14=$(echo $p6+$branch|bc)

        update_matrix $itera $power $p13
        update_matrix $itera $power $p14
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