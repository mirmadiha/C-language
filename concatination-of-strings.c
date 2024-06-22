/*Write a program to perform concatination of strings*/
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    char y[30];
    printf("\nEnter the first string : ");
    gets(x);
    printf("\nEnter the second string : ");
    gets(y);
    printf("\nThe two strings are : %s \n %s",x,y);
    unsigned int l2=strlen(y);
    unsigned int l1=strlen(x);
    for(int i=0;i<=l2;i++){
        x[l1+i]=y[i];
    }
    printf("\nThe merged string: %s",x);
    return 0;
}