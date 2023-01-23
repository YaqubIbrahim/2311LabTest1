#!/bin/bash

read n
declare -i i=1
declare -i sq=1
while (($sq<n))
do
	printf $sq" "
	i=$((i+1))
	sq=$((i*i))
done


