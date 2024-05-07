/* Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
**** 
*/
#include<stdio.h>
int main(){
    int i;
    int j;
    int rows;
    printf("\nEnter the number of rows = ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++)
            printf("*");
            printf("\n");
        }
return 0;
}