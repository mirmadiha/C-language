/*Write a program in C to sort elements of an array in ascending order.*/
#include<stdio.h>
#include <stdio.h>

void main() {
    int arr1[100];
    int n, i, j, tmp;

    printf("Enter the number of elements in the  array= ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                tmp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = tmp;
            }
        }
    }

    printf("\nElements of array in sorted ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n\n");
}