/*Write a C program to reverse a given number using a do-while loop.*/
#include<stdio.h>
int main(){
    int n;
    int ReversedNumber=0;
    int remainder;
    printf("\nEnter any number = ");
    scanf("%d",&n);
    do{
        remainder=n%10;
        ReversedNumber=ReversedNumber*10+remainder;
        n=n/10;
    }while(n!=0);
    printf("\nThe reverse = %d",ReversedNumber);
    return 0;
}