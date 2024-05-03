/*Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.*/
#include<stdio.h>
int main(){
    int i;
    int sum=0;
    
    
    while(1){
        printf("\nEnter any number = ");
        scanf("%d",&i);

        if(i==0){
            break;
        }
        
        if(i>0){
          sum=sum+i;
          }
    }
        
          printf("\n The sum of positive integers = %d",sum);
        
    
    return 0;
}