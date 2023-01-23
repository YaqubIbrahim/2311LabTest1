#!/bin/bash
z=0
for i in `seq $1 $2`;
do
	z=$((z+i))
done 
echo $z
echo
