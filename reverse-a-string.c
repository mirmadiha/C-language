/*Write a program to reverse a string*/
#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int n;
    int temp;
    char str[30];
    printf("\nEnter your name:");
    gets(str);
    printf("\nYour name : %s",str);
    n=strlen(str);
    if(n%2==0){
    for(int i=0;i<n/2;i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    }
    else{
        for(int i=0;i!=n-i-1;i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
        }
    }
    printf("\nThe reverse of your name : %s",str);
    return 0;
}