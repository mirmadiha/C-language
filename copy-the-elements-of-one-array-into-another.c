/*Copy the elements of one array into another array*/
#include<stdio.h>
int main(){
    int arr_1[100];
    int arr_2[100];
    int n; 
    printf("\nEnter the number of elements = ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("\n index:%d = ",i);
        scanf("%d",&arr_1[i]);
    }

//Displaying the elements of arr_1[]
     printf("\nThe values of first array are =\n ");
    for(int i=0;i<n;i++){
        printf("\n%d", arr_1[i]);
    }

//copying elements of arr_1[] to arr_2[]
    for(int i=0;i<n;i++){
        arr_2[i]=arr_1[i];
    }

//Displaying the elements of arr_2[]
    printf("\nThe values of second array are =\n ");
     for(int i=0;i<n;i++){
        printf("\n%d", arr_2[i]);
    }
}