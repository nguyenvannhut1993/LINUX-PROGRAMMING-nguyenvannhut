#!/bin/sh
echo "Desciption: please to choice a water"
echo "Coca | Pepsi | Sting | Milk |  Icetea "
read n
case $n in
	"Coca" | "coca" )
	echo "you choices Coca price 8000"
	;;
	"Pepsi" | "pepsi" )
	echo "you choices Pepsi price 9000"
	;;
	"Sting" | "sting" )
	echo "you choices Sting price 10000"
	;;
	"Milk" | "milk" )
	echo "you choices Milk price 6000"
	;;
	"Icetea" | "ice tea" )
	echo "you choices Ice tea price 2000"
	;;
	* )
	echo "please to choice correctly".
esac
exit 0

 