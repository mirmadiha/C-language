/*Write a program in C to calculate the sum of three numbers with input .*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the three numbers = ");
    scanf("%d%d%d",&a,&b,&c);

    int sum = a+b+c;
    printf("The sum of three numbers = %d",sum);
    return 0;
}