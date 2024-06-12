/*Write a program in C to find the square of any number using the function.*/
#include<stdio.h>
int sq(int x);

int main()
{
    int a;
    printf("\nEnter the number = ");
    scanf("%d",&a);
    int c=sq(a);
    printf("\nThe square of the number %d = %d",a,c);
    return 0;
}

int sq(int x){
    int c =x*x;
}
