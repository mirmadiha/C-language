/*Write a C program to find whether a given year is a leap year or not.*/
#include<stdio.h>
int main(){

    int year;   //declare the variable
    printf("\n Enter the year = ");
    scanf("%d",&year);

    //conditional statements
    if(year%4==0){
        printf("\n%d is a leap year",year);
    }

    else if(year%100==0){
        printf("\n%d is a leap year ",year);
    }

    else if(year%400==0){
        printf("\n%d is a leap year",year);
    }

    else{
        printf("\n%d is not a leap year",year);
    }

    return 0;
}