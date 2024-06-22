/*Write a program in C to print individual characters of a string in reverse order.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("\nEnter a string : ");
    gets(str);
    printf("\nThe string is : %s\n",str);
    printf("\nThe individual characters of the string in reverse order are: \n");
    unsigned int n=strlen(str);
    for(int i=n-1;i>=0;i--){
        printf("%c\t",str[i]);
    }
    printf("\n");
    return 0;
}