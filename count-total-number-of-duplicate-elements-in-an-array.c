/*Write a program in C to count the total number of duplicate elements in an array.*/
#include<stdio.h>
int main(){
    int n;
    int duplicate=0;
    printf("\nEnter the number of elements in an array = ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        printf("\nindex:%d = ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                duplicate++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements = %d",duplicate);

return 0;
}