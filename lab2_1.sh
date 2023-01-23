#!/bin/bash
read a b c
if [[ $b == "*" ]]
then
	echo $((a*c))
	echo
elif [[ $b == "+" ]]
then
	echo $((a+c))
	echo
elif [[ $b == "-" ]]
then
	echo $((a-c))
	echo
elif [[ $b == "/" ]]
then
	echo $((a/c))
	echo
elif [[ $a == "min" && $c -gt $b ]]
then
	echo $c
	echo

elif [[ $a == "max" &&  $c -lt $b ]]
then
	echo $c
	echo
else
	echo $b
	echo

fi
