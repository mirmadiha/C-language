/*write a C program to store tables of 2 and 3 in a 2D array */
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array = ");
    scanf("%d",&n);

    int arr[2][n];
    printf("\nMultiplication table of 2:");
    for(int i=0;i<n;i++){
        arr[0][i]=2*i;
        printf("\n%d\n ",arr[0][i]);
    }

      printf("\nMultiplication table of 3:");
      for(int i=0;i<n;i++){
        arr[1][i]=3*i;
        printf("\n%d\n",arr[1][i]);
    }
    return 0;
}