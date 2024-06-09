/*Write a program in C to print the elements of an array in reverse order.*/
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements in the array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter the element at index:%d",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("\nThe element at index:%d = %d",i,arr[i]);
    return 0;
}