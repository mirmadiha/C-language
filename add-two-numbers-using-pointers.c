/*Write a program in C to add two numbers using pointers.*/
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("\nEnter the first number = ");
    scanf("%d",&a);
    printf("\nEnter the second number = ");
    scanf("%d",&b);
    int *aptr=&a;
    int *bptr=&b;
    int sum=*aptr+*bptr;
    int *sptr=&sum;
    printf("\nThe sum of %d and %d = %d",a,b,*sptr);
    return 0;
}