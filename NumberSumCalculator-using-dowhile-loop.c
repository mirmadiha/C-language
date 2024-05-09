/*Write a C program that prompts the user to enter a series of numbers until they input a negative number. Calculate and print the sum of all entered numbers using a do-while loop.*/
#include<stdio.h>
int main(){
    int i;
    int sum=0;
    do{
        printf("\nEnter a number = ");
        scanf("%d",&i);
        if(i<0){
            break;
        }
        sum=sum+i;
    }while(i>=0);
    printf("\nThe sum of numbers = %d",sum);
    return 0;
}