#!/bin/sh
tong=0
for i in `seq 0 1510`
do
	if [ $(($i % 2)) -ne 0 ]
		then
		tong=$(($tong +i))
	fi
done 
echo "tong cac so le: $tong"
exit 0
