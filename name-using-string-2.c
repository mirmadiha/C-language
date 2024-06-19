/*Write a program in C to enter the full name of a person also check the length of string*/
#include<stdio.h>
int main()
{
    char name[30];
    unsigned int len;
    printf("Enter your full name = ");
    gets(name);
    printf("\nYour name is %s",name);
    len=strlen(name);
    printf("\nThe length of the string %s = %d",name,len);
    return 0;
}