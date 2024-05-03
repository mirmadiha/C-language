/*Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.*/
#include<stdio.h>
int main(){
    int i=0;
    int j=10;
    printf("\nDisplay numbers from 0 - 10:");
    while (i<=j)
    {
        printf("\n%d",i);
        i++;
    }
    j=10;
    printf("\nDisplay numbers from 10 - 0: ");
    while (j>=i)
    {
        printf("\n%d",j);
        j--;
    }
    
    
    return 0;
}