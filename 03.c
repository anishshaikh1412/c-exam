//Create a C program that defines a function to check if a given number is divisible by 3 and 5 both or not.
#include <stdio.h>

// Function to determine if a number is a multiple of both 3 and 5
int checkMultiple(int value) {
    if (value % 3 == 0 && value % 5 == 0) {
        return 1;  // Returns 1 if the number is a multiple of 3 and 5
    } else {
        return 0;  // Returns 0 otherwise
    }
}

int main() {
    int number;

    // Get input from the user
    printf("Enter any integer: ");
    scanf("%d", &number);

    // Use the function and display the result
    if (checkMultiple(number)) {
        printf("%d is a multiple of both 3 and 5.\n", number);
    } else {
        printf("%d is not a multiple of both 3 and 5.\n", number);
    }

    return 0;
}

