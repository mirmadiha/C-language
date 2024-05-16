/*Write a program in C to count how many times a number x occurs in an array*/
#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter the number of elements in an array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nThe value at index:%d = ",i );
        scanf("%d",&arr[i]);
    }
      printf("\nThe elements of the array are: ");
      for(int i=0;i<n;i++){
        printf("\n%d ",arr[i]);
      }

    int x;
    printf("\nEnter the number from the array who's occurence you want to check = ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        count++;
        }
    }
    printf("\nThe number of occurence of %d = %d ",x,count);
    return 0;
}