/* Write a program in C to find the sum of all elements of the array.*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("\nEnter the desired number of elements in an array = ");
    scanf("%d",&n);
    int arr[n];    //declare array size

    // Input elements into the array and calculate their sum
    for(int i=0;i<n;i++){
        printf("\nElements at index %d = ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    //display sum of all elements
    printf("Sum of all the elements of array is : %d ",sum);

    return 0;
}








