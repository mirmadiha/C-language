/* Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.*/
#include<stdio.h>
int main(){
    int number[5];
    int positive=0;
    int negative=0;
    printf("\nEnter the first number = ");
    scanf("%d",&number[0]);
    printf("\nEnter the second number = ");
    scanf("%d",&number[1]);
    printf("\nEnter the third number = ");
    scanf("%d",&number[2]);
    printf("\nEnter the fourth number = ");
    scanf("%d",&number[3]);
    printf("\nEnter the fifth number = ");
    scanf("%d",&number[4]);

    for(int i=0;i<5;i++){
        if(number[i]>0){        //check if the number is positive
             positive ++;  
        }
        else if(number[i]<0){   //check if the number is negative
            negative++;
        }
       }
       printf("\nThe number of positive numbers = %d",positive);
       printf("\nThe number of negative numbers = %d",negative);
    return 0;
}