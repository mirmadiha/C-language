/*Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.*/
#include<stdio.h>
int main(){
    int amount;
    int total;
    printf("\nEnter the amount : ");
    scanf("%d",&amount);
    
// Determine the quantity of each currency unit 
    total=amount/100;
    printf("\nThe total number of Rs. 100 notes = %d", total);
    amount=amount-(total*100);

    total=amount/50;
    printf("\nThe total number of Rs. 50 notes = %d", total);
    amount=amount-(total*50);

    total=amount/20;
    printf("\nThe total number of Rs. 20 notes = %d", total);
    amount=amount-(total*20);

    total=amount/10;
    printf("\nThe total number of Rs. 10 notes = %d", total);
    amount=amount-(total*10);

    total=amount/5;
    printf("\nThe total number of Rs. 5 notes = %d", total);
    amount=amount-(total*5);

    total=amount/2;
    printf("\nThe total number of Rs. 2 notes = %d", total);
    amount=amount-(total*2);

    total=amount/1;
    printf("\nThe total number of Rs. 1 notes = %d", total);
    amount=amount-(total*1);
    return 0;
}