/*Write a program in C to find the largest number in the array*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want to enter in your array = ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nThe element at index %d = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nThe elements of the array are:\n");
  for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    int greatest = arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>greatest){
        greatest = arr[i];
    }
}
printf("The greatest element in the array = %d",greatest);
    return 0;
}






