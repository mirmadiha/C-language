/*Write a program in C to read n number of values in an array and display them in reverse order.*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    int num[n];
   
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
   
    printf("Values in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", num[i]);
    }
     return 0;
}