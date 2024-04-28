/* Write a C program that reads 5 numbers and sums all odd values between them.*/
#include<stdio.h>
int main(){
    int number[5];
    int sum=0;
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
        if((number[i])%2!=0){   //check if the number is odd
             sum += number[i];  //add odd numbers to the sum
        }
       }
       printf("\nThe sum of odd numbers = %d",sum);
    return 0;
}