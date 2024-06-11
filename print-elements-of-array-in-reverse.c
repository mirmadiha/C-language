/*Write a program in C to print the elements of an array in reverse order.*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements in the array = ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("\nEnter the value at index:%d = ",i);
        scanf("%d",ptr+i);
    }
    printf("\nElements in the array are:");
    for(int i=0;i<n;i++){
        printf("\nelement %d = %d \n ",i,*(ptr+i));
    }
    printf("\nElements in the array in REVERSE order are:");
     for(int i=n-1;i>=0;i--){
        printf("\n %d \n ",*(ptr+i));
    }
    return 0;
}