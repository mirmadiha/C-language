/*Write a program in C to store n elements in an array and print the elements using a pointer.*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements in an array = ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("\nEnter the value at index:%d = ",i);
        scanf("%d",ptr+i);
    }
    printf("\nThe elements in the array are:\n");
    for(int i=0;i<n;i++){
        printf("\nThe value at index:%d = %d\n",i,*(ptr+i));
    }

    return 0;
}