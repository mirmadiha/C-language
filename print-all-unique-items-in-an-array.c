/*Write a program in C to print all unique elements in an array.*/
#include<stdio.h>

int main() {
    int arr[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter the value for element at index : %d = ",i);
        scanf("%d", &arr[i]);
    }
    
    printf("Unique elements in the array is/are: ");
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                break; 
            }
        }
        if(j == n) {
            printf("%d ", arr[i]); 
        }
    }
    
    return 0;
}
