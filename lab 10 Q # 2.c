#!/bin/bash
# Prompt user for input echo "Enter the first string:" read string1
echo "Enter the second string:" read string2
# Compare strings
if [ "$string1" = "$string2" ]; then echo "Strings are equal."
elif [ "$string1" \< "$string2" ]; then echo "String 1 is less than String 2."
else
echo "String 1 is greater than String 2."
fi
