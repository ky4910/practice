#!/bin/bash

i=1
j=1

for file in $(ls)
do
	name[$i]=$file
	#echo $i ${name[$i]}
	temp=${name[$i]}
	
	# cut off the suffix 
	echo $i ${temp%.*}
	
	let i++
done

echo 

for file in $(ls)
do
	name[$i]=$file
	#echo $i ${name[$i]}
	temp=${name[$j]}

	# cut off the preffix 
	# single # just check first .
	echo $j ${temp##*.}
	
	let j++
done


