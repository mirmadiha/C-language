/*Write a program in C to enter an element at the end of an array*/
#include<stdio.h>
int main(){
    int x;
    int n;
    printf("Enter the number of elements in the array = ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter the element at index %d = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element to be entered at the end of the array = ");
    scanf("%d",&x);

    arr[n-1]=x;
    
    printf("\nThe updated elements of the array are :");
    for(int i=0;i<n;i++){
        printf("\nThe element at index %d = %d",i,arr[i]);
    }
    return 0;
}





