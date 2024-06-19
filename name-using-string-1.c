/*Write a program in C to enter the first name and second name of a person*/
#include<stdio.h>
int main()
{
    char fname[10];
    char sname[10];
    printf("Enter your first name = ");
    gets(fname);
    printf("Enter your second name = ");
    gets(sname);
    printf("Name=%s %s",fname,sname);
    return 0;
}