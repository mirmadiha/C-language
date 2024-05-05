/*Write a program in C to display n terms of natural numbers and their sum*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("\n Enter any number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\nThe sum of first %d natural numbers = %d",n,sum);
    return 0;
}