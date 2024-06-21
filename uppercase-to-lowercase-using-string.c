/*Write a program in C to convert the uppercase letters in the string to lowercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("\nEnter a string: ");
    gets(str);
    printf("\nThe string is : %s",str);
    for(int i=0;str[i]!='\0';i++){
    if(str[i]>='A'&& str[i]<='Z'){
        str[i]=str[i]+32;
    }
    }
    printf("\nThe lowercased string = %s",str);
    return 0;
}