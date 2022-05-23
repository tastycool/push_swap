#!/bin/bash

echo 'push_swap 5 numbers'
i=0
result=0
checker=0
average=0
max=0
min=0
while [ $i -lt 100 ]
do
	ARG="`ruby -e "puts (0..4).to_a.shuffle.join(' ')"`" 
	echo "Test $i: $(./push_swap $ARG | ./checker_Mac $ARG)"
	result=$(./push_swap $ARG | wc -l)
	checker=$(./push_swap $ARG | ./checker_Mac $ARG)
	if [[ $checker = "KO" ]]; then
		echo $ARG
		echo $checker
		break
	fi
	if [[ $result -gt 12 ]]; then
		echo $ARG
		echo 'fail'
		break
	else
		if [[ $result -gt $max ]]; then
			max=${result}
		fi
		if [[ $i -eq 0 ]]; then
			min=${max}
		fi
		if [[ $result -lt $min ]]; then
			min=${result}
		fi
		average=$[$average+$result]
	fi
	i=$[$i+1]
done
if [[ $i -eq 100 ]]; then
	average=$[$average/$i]
	echo "Done 5 numbers with an average of ${average} moves"
	echo "Maximum amount of moves is ${max} and the lowest is ${min}" | xargs
fi

echo 'push_swap 100 numbers'
i=0
average=0
result=0
min=0
max=0
while [ $i -lt 100 ]
do
	ARG="`ruby -e "puts (-50..49).to_a.shuffle.join(' ')"`" 
	echo "Test $i: $(./push_swap $ARG | ./checker_Mac $ARG)"
	result=$(./push_swap $ARG | wc -l)
	checker=$(./push_swap $ARG | ./checker_Mac $ARG)
	if [[ $checker = "KO" ]]; then
		echo $ARG
		echo $checker
		break
	fi
	if [[ $result -gt 1500 ]]; then
		echo $ARG
		echo 'fail'
		break
	else
		if [[ $result -gt $max ]]; then
			max=${result}
		fi
		if [[ $i -eq 0 ]]; then
			min=${max}
		fi
		if [[ $result -lt $min ]]; then
			min=${result}
		fi
		average=$[$average+$result]
	fi
	i=$[$i+1]
done
if [[ $i -eq 100 ]]; then
	average=$[$average/$i]
	echo "Done 100 numbers with an average of ${average} moves"
	echo "Maximum amount of moves is ${max} and the lowest is ${min}" | xargs
fi

echo 'push_swap 500 numbers'
i=0
average=0
result=0
min=0
max=0
while [ $i -lt 100 ]
do
	ARG="`ruby -e "puts (-250..249).to_a.shuffle.join(' ')"`" 
	echo "Test $i: $(./push_swap $ARG | ./checker_Mac $ARG)"
	result=$(./push_swap $ARG | wc -l)
	checker=$(./push_swap $ARG | ./checker_Mac $ARG)
	if [[ $checker = "KO" ]]; then
		echo $ARG
		echo $checker
		break
	fi
	if [[ $result -gt 11500 ]]; then
		echo $ARG
		echo 'fail'
		break
	else
		if [[ $result -gt $max ]]; then
			max=${result}
		fi
		if [[ $i -eq 0 ]]; then
			min=${max}
		fi
		if [[ $result -lt $min ]]; then
			min=${result}
		fi
		average=$[$average+$result]
	fi
	i=$[$i+1]
done
if [[ $i -eq 100 ]]; then
	average=$[$average/$i]
	echo "Done 500 numbers with an average of ${average} moves"
	echo "Maximum amount of moves is ${max} and the lowest is ${min}" | xargs
fi
