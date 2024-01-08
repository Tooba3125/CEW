#!/bin/bash


# Function to display the day name display_day_name() {
local day_number=$1


case $day_number in 1)
echo "Sunday"
;;
2)
echo "Monday"
;;
3)
echo "Tuesday"
;;
4)
echo "Wednesday"
;;
5)
echo "Thursday"
;;
6)
echo "Friday"
;;
7)
echo "Saturday"
;;
*)
 



esac
}
 
echo "Error: Please provide a number between 1 and 7."
;;
 
# Prompt user for input
echo "Enter a day number (1-7):" read user_day_number

# Call the function with user input display_day_name "$user_day_number"
