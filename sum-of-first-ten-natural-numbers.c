/*Write a C program to compute the sum of the first 10 natural numbers.*/
#include<stdio.h>
int main(){
    int sum=0;
    printf("\nFirst ten natural numbers : ");
    for(int i=1;i<=10;i++){
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\nThe sum of first ten natural numbers = %d",sum);
    
    return 0;
}