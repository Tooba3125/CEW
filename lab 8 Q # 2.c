if [ $# -eq 0 ]; then
echo "Usage: $0 <param1> <param2> ... <paramN>" exit 1
fi

# Get the last digit of your roll number
last_digit=3 # Replace this with the actual last digit of your roll number

# Check if the number of parameters is equal to the last digit if [ $# -ne $last_digit ]; then
echo "Error: Expected $last_digit parameters, but received $#." exit 1
fi

# Display the values of the built-in variables echo "Number of parameters: $#"
echo "Script name: $0" echo "All parameters: $*"
