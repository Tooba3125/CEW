// 2. Write a C program to make the following pattern as a pyramid with an asterisk.
//    * 
//   * * 
//  * * * 
// * * * *

#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pyramid

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" "); // Print leading spaces
        }
        for (int k = 0; k <= i; k++) {
            printf("* "); // Print asterisks with a space
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
