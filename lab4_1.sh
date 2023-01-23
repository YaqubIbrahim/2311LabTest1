#!/bin/bash
if [[ $# == 0 ]];then
	echo "No such ID"
	exit 1
fi

if [[ $1 == "m" ]];then
	join -t, -o 1.1 1.2 2.1 2.3 -1 3 -2 1 names.txt Courses.txt | sed -e 's/\,/\t/2' -e 's/\,/\t/2'
elif [[ $1 == "-s" ]];then
	IFS=$'\n'
	data=($(join -t,  -o 1.1 1.2 2.1 2.3 -1 3 -2 1 names.txt Courses.txt | grep "$2"))
	declare gpa
	for line in "${data[@]}";do
		grade_leter=$(echo $line | cut -d, -f4);
		if [[ $grade_leter == 'A' ]];then
			gpa=4
		elif [[ $grade_leter == 'B' ]];then
			gpa=3
		elif [[ $grade_leter == 'C' ]];then
			gpa=2
		elif [[ $grade_leter == 'D' ]];then
			gpa=1
		elif [[ $grade_leter == 'F' ]];then
			gpa=0
		fi
		echo "$line,$gpa" | cut -d, -f1,2,5 | sed 's/,/\t/2'
	done
else
	echo "Invalid argument $2"
	exit 2
fi


