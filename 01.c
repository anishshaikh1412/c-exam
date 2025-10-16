//Write a C program that prompts the user to enter a 3 digit's positive integer. Find the sum of first and last digit.//
#include<stdio.h>

int main() {
    int num, first, last, copy;
    
    // Ask user for input
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    copy = num;

    // Get the last digit
    last = num % 10;

    // Get the first digit
    while(copy >= 10) {
        copy = copy / 10;
    }
    first = copy;

    // Display the result
    printf("The sum of the first and last digits is: %d", first + last);
    
    return 0;
}

