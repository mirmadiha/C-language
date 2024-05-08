/*Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.*/
#include<stdio.h>
int main(){
    int i=1;
    printf("\n Display numbers from 1 to 10 :");
    do{
        printf("\n%d",i);
        i++;
    }while(i<=10);
    printf("\n");
    i=10;
    printf("\nDisplay numbers from 10 to 1 :");
    do{
        printf("\n%d",i);
        i--;
    }while(i>=1);
    return 0;
}