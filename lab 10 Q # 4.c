#!/bin/bash
# Prompt user for roll number echo "Enter your roll number:" read roll_number
# Initialize variables sum=0
count=0
# Calculate average of even numbers less than or equal to the roll number for ((i=2; i<=roll_number; i+=2)); do
sum=$((sum + i)) count=$((count + 1))
done
# Check if there are even numbers if [ $count -eq 0 ]; then
echo "No even numbers found." else
# Calculate and print the average average=$(bc <<< "scale=2; $sum / $count")
echo "Average of even numbers less than or equal to $roll_number is: $average"
fi
