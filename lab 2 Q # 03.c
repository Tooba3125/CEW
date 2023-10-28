// 3. Write a C program to compare two strings without using string library functions

#include <stdio.h>

int main() {
    char str1[] = "welcome";
    char str2[] = "felcode";
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] == str2[i]) {
            printf("Character match: %c\n", str1[i]);
        } else {
            printf("Character mismatch: %c (str1) vs %c (str2)\n", str1[i], str2[i]);
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are of the same length and content.\n");
    } else {
        printf("Strings are different lengths.\n");
    }

    return 0;
}
