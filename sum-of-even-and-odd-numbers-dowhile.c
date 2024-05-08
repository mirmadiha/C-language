/*Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.*/
#include<stdio.h>
int main(){
    int i=1;
    int sum_even=0;
    int sum_odd=0;
    do{
        if(i%2==0){
        sum_even=sum_even+i;
        }
        else{
            sum_odd=sum_odd+i;
        }
        i++;
        }while(i<=50);
        printf("\nThe sum of even numbers = %d",sum_even);
         printf("\nnThe sum of odd numbers = %d",sum_odd);
    return 0;
}