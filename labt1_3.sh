#!/bin/bash
read a b c
if [[$a -gt $b && $a -lt $b ]]
then
	echo $a
elif [[$b -gt $a
