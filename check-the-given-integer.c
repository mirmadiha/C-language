/*Check whether a given integer is positive even, negative even, positive odd or negative odd*/
#include<stdio.h>
int main(){
    int num;
    printf("\n Enter the number : ");
    scanf("%d",&num);

    if(num%2==0 && num>0){
        printf("\nThe number is positive even");
    }
    else if(num%2==0 && num<0){
        printf("\nThe number is negative even");
    }
    else if(num%2!=0 && num>0){
        printf("\nThe number is positve odd");
    }
    else if(num%2!=0 && num<0){
        printf("\nThe number is negative odd ");
     }
     else{
        printf("\nError : You entered the wrong input");
     }
    return 0;
}
