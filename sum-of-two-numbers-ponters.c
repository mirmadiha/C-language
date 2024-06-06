/* Write a program in C to find the maximum number between two numbers using a pointer.*/
#include<stdio.h>
int main()
{
    int a,b;
    int *aptr=&a;
    int *bptr=&b;
    printf("\nEnter the first number = ");
    scanf("%d",&a);
    printf("\nEnter the second number = ");
    scanf("%d",&b);
    int sum=*aptr+*bptr;
    printf("The sum of two numbers %d and %d = %d",*aptr,*bptr,sum);
    return 0;
}