#!/bin/sh
echo "enter one path directory \n"
for d in $1/*
do
	if [ -d $d ]
		then
			echo $d
	fi
done
exit 0
