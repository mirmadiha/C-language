/*Write a C program to display a pattern like a right angle triangle with a number.

The pattern like :

1
12
123
1234*/
#include<stdio.h>
int main(){
    int i;
    int j;
    int rows;
    printf("\nEnter the number of rows = ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++)
            printf("%d",j);
            printf("\n");
        }
return 0;
}