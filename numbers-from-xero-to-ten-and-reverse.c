/*Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.*/
#include<stdio.h>
int main(){
    int i=0;
    printf("\nDisplay numbers from 0 - 10:");
    while (i<=10)
    {
        printf("\n%d",i);
        i++;
    }
    int j=10;
    printf("\nDisplay numbers from 10 - 0: ");
    while (j>=0)
    {
        printf("\n%d",j);
        j--;
    }
    
    
    return 0;
}
