/*Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    do{
        printf("\nEnter a number = ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n>0){
        sum=sum+n;
    }
    }while(n!=0);
    
     printf("\n The sum of all positive integers = %d",sum++);
    return 0;
}