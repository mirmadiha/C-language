/*Write a program in C to swap elements using call by reference.*/
#include<stdio.h>
void swap(int *x,int *y,int *z);

int main()
{
   int a,b,c;
   printf("\nEnter the first number = ");
   scanf("%d",&a);
   printf("\nEnter the second number = ");
   scanf("%d",&b);
   printf("\nEnter the third number = ");
   scanf("%d",&c);
   printf("\nThe numbers before the swap = %d, %d, %d",a,b,c);
   swap(&a,&b,&c);
    printf("\nThe numbers after the swap = %d, %d, %d",a,b,c);

    return 0;
}

void swap(int *x,int *y,int *z){
    int temp=*y;
    *y=*x;
    *x=*z;
    *z=temp;
}