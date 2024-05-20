/*Write a program to sort elements of arrays in descending order*/
#include<stdio.h>
int main(){
    int tmp;
    int n;
    printf("\nEnter the number of elements in the array = ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter the value at index:%d = ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("\nThe value at index:%d = %d",i,arr[i]);
    }

    //sort elements in descending order
   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("\nElements of arrays sorted in descending order are:\n");
    for(int i=0;i<n;i++){
        printf("\n%d\n",arr[i]);
    }
    printf("\n\n");
    return 0;
}
