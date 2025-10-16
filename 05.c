//Implement a C program to print the following pattern using nested for loop:
//10 9 8 7 6

//_ 9 8 7 6

//_ _ 8 7 6

//_ _ _ 7 6

//_ _ _ _ 6
#include <stdio.h>

int main() {
    int row, col, limit = 5;   // Total number of rows
    int num = 10;              // Initial number to start printing

    // Loop for each line of the pattern
    for (row = 0; row < limit; row++) {
        
        // Print leading spaces before numbers
        for (col = 0; col < row; col++) {
            printf("  ");  // Print two spaces for alignment
        }

        // Print decreasing numbers for each row
        for (col = num - row; col >= 6; col--) {
            printf("%d ", col);
        }

        // Go to the next line after one full row
        printf("\n");
    }

    return 0;
}

