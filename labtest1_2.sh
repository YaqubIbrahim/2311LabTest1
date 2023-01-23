#!/bin/bash

read n
i=1
j=0
x=0

while test  $i -le $n 
do
	x='expr $i \* i'
	if [ "$x" = "$n" ]
	then
		j=1
		echo "YES"
	else
	fi

	i='expr $i +1'

done

if test $j -eq 0
then
	echo "NO"
fi


