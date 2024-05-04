/*Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.*/
#include<stdio.h>
int main(){
    int num;
    int i=0;
    printf("\nEnter a positive number = ");
    scanf("%d",&num);
    while(i<=10){
        printf("\n%d multiplied by %d = %d",num,i,num*i);
        i++;
    }
    return 0;
}