/*sort an array*/
#include<stdio.h>
int main()
{
    int temp;
    int n;
    printf("\nEnter the number of elements in the array = ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for (int i=0;i<n;i++){
        printf("\n The element at index:%d = ",i);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("\nThe value at index:%d = %d\n",i,*(ptr+i));
    }
    //sorting the aray
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
             }
        }
    }
    printf("\nSort in Ascending order:\n");
    for(int i=0;i<n;i++)
    {
    printf("\nThe value at index:%d=%d\n",i,*(ptr+i));
    }
    return 0;
}