echo "Enter the first numbers"
read a
echo "Enter the second numbers"
read b
echo "Choose and enter +, -, /, *, %"
read op
e='='
case $op in
	'+')
		echo $a $op $b $e $(($a + $b))
		;;
	'-')
		echo $a $op $b $e $(($a - $b))
		;;
	'/')
		if [ $b -eq 0 ]
		then
			echo "The second number must different from zero"
		else
			echo $a $op $b $e $(($a / $b))
		fi
		;;
	'*')
		echo $a $op $b $e $(($a * $b))
		;;
	'%')
		if [ $b -eq 0 ]
                then
			echo echo "The second number must different from zero"
		else
			echo $a $op $b $e $(($a % $b))
		fi
                ;;
	*)
                echo "Invalid operation"
                ;;
	esac
