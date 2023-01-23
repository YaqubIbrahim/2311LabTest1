#!/bin/bash
if [[ $1 == "-num" ]]
then
	while IFS='!' read -a arr
	do
		if [[ $2 == ${arr[0]} ]]
		then
			isbn= $( grep \"^$2\!\" books.txt )
			
	fi
	echo $isbn
	done<"courses.txt"
		
elif [[ $1 == "-nobook" ]] 
then
	cat courses.txt |grep '\!O'|cut -d! -f1
fi
