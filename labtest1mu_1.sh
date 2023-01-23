#!/bin/sh
read a
for((i=0;i<1000;i++))
do
	if [[ $a == $((i * i)) ]]
	then
		echo "YES"
	else
		echo "NO"
	fi
done



