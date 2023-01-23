#!/bin/bash
count=0
while [ $count -le $# ]
do
	count=$((count+1))
	shift 1
done
echo $*

