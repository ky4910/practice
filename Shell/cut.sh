#!/bin/bash
# cut off the suffix 

i=1

for file in $(ls)
do
	name[$i]=$file
	#echo $i ${name[$i]}
	temp=${name[$i]}
	echo $i ${temp%.*}
	let i++
done



