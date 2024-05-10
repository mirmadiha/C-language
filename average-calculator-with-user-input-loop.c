/* Write a C program that calculates the average of a set of numbers input by the user. The user should be able to input as many numbers as desired, and the program should continue until the user decides to stop*/
#include<stdio.h>
int main(){
    int n;
    int avg;
    int sum=0;
    int count=0;
    printf("\nEnter any number (Enter a non-numeric value to stop):");
    do{
        printf("\n Enter a number = ");
        if(scanf("%d",&n)!=1){
            break;
        }
        sum=sum+n;
        count++;
    }while(1);
    if(count>0){
        avg=sum/count;
        printf("\nThe sum of numbers = %d",sum);
        printf("\nThe count of numbers = %d",count);
        printf("\nThe average of numbers = %d",avg);
    }
    else{
        printf("\n You did not enter any number");
    }
    return 0;
}