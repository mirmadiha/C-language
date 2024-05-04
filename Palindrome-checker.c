/* Write a C program that implements a program to check if a given number is a palindrome using a while loop*/
#include<stdio.h>
int main(){
    int num;
    int reversed_num=0;
    int remainder;
    printf("\nEnter any number = ");
    scanf("%d",&num);
    int original_num=num;
    while(num!=0){
        
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num=num/10;
    }
    if(original_num==reversed_num){
        printf("\n %d is a palindromic sequence",original_num);
    } 
    else{
        printf("\n %d is not a palindromic sequence",original_num);
    }
       return 0;
}