#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[100];
    int i, j = 0, k = 0, n;

    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr1[i] % 2 == 0) {
            arr2[j++] = arr1[i];
        } else {
            arr3[k++] = arr1[i];
        }
    }

    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}