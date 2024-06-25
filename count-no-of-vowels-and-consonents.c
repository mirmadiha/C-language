/*count no. of vowels and consonants in string*/
#include<stdio.h>
int main()
{
    char str[100];
    int vow=0;
    int con=0;
    printf("\nEnter a string= ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vow++;
        }
        else{
            con++;
        }
    }
    printf("\nThe number of vowels = %d",vow);
    printf("\nThe number of consonants = %d",con);
    return 0;
}