/*Write a program in C to count the number of alpahabets, digits and special-characters in a string*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("\nEnter a string which includes alphabets, digits and special-characters: ");
    gets(str);
    printf("\nThe string is :%s",str);
    int alph=0;
    int dig=0;
    int spch=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&& str[i]<='Z'){
            alph++;
        }
        else if(str[i]>='0' &&str[i]<='9'){
            dig++;
        }
        else{
            spch++;
        }
    }
    printf("\nThe total no of alphabets is : %d",alph);
    printf("\nThe total no of digits is : %d",dig);
    printf("\nThe total no of special characters is : %d",spch);
    return 0;
}