//Write a C program that uses pointers to find the sum of two 1D arrays.
#include <stdio.h>
int main() {
    int size, j;

    // Take the number of elements for the arrays
    printf("Enter how many elements you want in the arrays: ");
    scanf("%d", &size);

    int first[size], second[size], total[size];

    // Read elements for the first array
    printf("Input elements for the first array:\n");
    for (j = 0; j < size; j++) {
        printf("first[%d] = ", j);
        scanf("%d", &first[j]);
    }

    // Read elements for the second array
    printf("Input elements for the second array:\n");
    for (j = 0; j < size; j++) {
        printf("second[%d] = ", j);
        scanf("%d", &second[j]);
    }

    // Use pointer variables to find the element-wise sum
    int *p1 = &first[0], *p2 = &second[0], *p3 = &total[0];

    for (j = 0; j < size; j++) {
        *(p3 + j) = *(p1 + j) + *(p2 + j); // Add matching elements from both arrays
    }

    // Display the resulting sum array
    printf("\nResultant array after addition:\n");
    for (j = 0; j < size; j++) {
        printf("total[%d] = %d\n", j, total[j]);
    }

    return 0;
}

