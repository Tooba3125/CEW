// QNO: 01
#!/bin/bash

# Check if a parameter is provided if [ $# -eq 0 ]; then
echo "Usage: $0 <your_name>" exit 1
fi

# Get the name from the command line argument name=$1

echo "Hello, $name!"
