/*Write a program in C to add numbers using call by reference.*/
#include<stdio.h>
int sum(int *aptr,int *bptr);
int main(){
    int a,b;
    int *aptr=&a;
    int *bptr=&b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    sum(a,b);
    printf("The sum of two numbers = %d",sum(*aptr,*bptr));
    return 0;
}

int sum(int *aptr,int *bptr){
    int add=*aptr+*bptr;
    return add;
}