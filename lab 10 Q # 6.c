// Using “while” loop:
#!/bin/bash


# Initialize counter count=1
 
# Use while loop to display parameters and their numbers while [ "$#" -gt 0 ]; do
echo "Parameter $count: $1" shift
count=$((count + 1)) done
Using “until” loop:
#!/bin/bash
# Initialize counter count=1
# Use until loop to display parameters and their numbers until [ "$#" -eq 0 ]; do
echo "Parameter $count: $1" shift
count=$((count + 1)) done
