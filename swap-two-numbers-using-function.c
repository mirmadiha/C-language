/*Write a program in C to swap two numbers using a function.*/
#include<stdio.h>
int swap(int x, int y);

int main()
{
    int a,b;
    printf("\nEnter the first number = ");
    scanf("%d",&a);
     printf("\nEnter the second number = ");
    scanf("%d",&b);
    printf("\nThe numbers before swap = %d\t%d",a,b);
    int c=swap(a,b);
    return 0;
}

int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    printf("\nThe numbers after swap = %d\t%d",x,y);
}