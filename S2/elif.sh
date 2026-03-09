#!/bin/bash

num=10
if [ $num -gt 15 ];
then
echo "Number is greater than 15"
elif [ $num -gt 5 ];
then
echo "Number is greater then 5 but less than or equal to 15"
else
echo "Number is less than or equal to 5"
fi
