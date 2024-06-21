/*Write a program in C without using libraray function to find the length of a string*/
#include<stdio.h>
int string(char x[]);       
int main()          
{
    char str[30];
    int len;
    printf("\nEnter your name : ");
    gets(str);
    len=string(str);
    printf("\nThe length of the string = %d",len);
    return 0;
}
int string(char x[]){
    int count=0;
    for(int i=0;x[i]!='\0';i++){
        count++;
    }
    return count;
}