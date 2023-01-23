#!/bin/bash
FILE=course_DB.txt
if [[ $1 == "-s" ]]
then

	myArr=($( grep $2  course_DB.txt))
echo ${myArr[0]} ${myArr[1]}
echo ${myArr[3]} ${myArr[4]}
elif [[ $1 == "-m" ]]
then
	myArr1=($( grep Jane  course_DB.txt))
	echo ${myArr1[0]} ${myArr1[1]} ${myArr1[2]}
elif [[ $1 == "-c" ]] 
then
	myArr2=($( grep John course_DB.txt))
	echo ${myArr2[0]} ${myArr2[1]}

 

fi
