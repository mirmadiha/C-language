/*Write a C program that calculates the product of numbers from 1 to 5 using a while loop*/
#include<stdio.h>
int main(){
    int i=1;
    int prod=1;
    printf("\ncalculate product of numbers from 1 to 5:");
    while(i<=5){
        prod*=i;
        printf("\ncurrent number = %d,current product = %d", i,prod);
        i++;
        }
    return 0;
}