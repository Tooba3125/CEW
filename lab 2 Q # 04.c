// 4. Write a C program to read a sentence and replace lowercase characters with uppercase and vice 
// versa.

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000]; // Assuming a maximum sentence length of 1000 characters

    printf("Enter a sentence: ");
    scanf("%999[^\n]", sentence); // Read input from the user until a newline character

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]); // Convert lowercase to uppercase
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]); // Convert uppercase to lowercase
        }
    }

    printf("Modified sentence: %s", sentence);

    return 0;
}
