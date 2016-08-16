dem=0
while [ $dem -eq 0 ]
do
	echo "please enter passwd"
	read pw
	matkhau="nhut"
	if [ $pw = $matkhau ]
		then
			echo "login success"
			dem=1
	else
			echo "please login again"
			dem=0
	fi
done
exit 0

