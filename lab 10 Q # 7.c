#!/bin/bash
# Function to display the menu display_menu() {
echo "Menu:" echo "1. Quotient"
echo "2. Remainder"
 
echo "3. Exit"
}
# Main loop while true; do
# Check if command line arguments are provided if [ "$#" -ne 2 ]; then
echo "Usage: $0 <dividend> <divisor>" exit 1
fi dividend=$1 divisor=$2
# Display the menu display_menu
# Prompt user for choice
echo "Enter your choice (1, 2, or 3):" read choice
# Perform calculation based on user's choice case $choice in
1)
result=$((dividend / divisor)) echo "Quotient: $result" break
;;
2)
result=$((dividend % divisor)) echo "Remainder: $result" break
;;
3)
echo "Exiting the script."
 



*)



esac done
