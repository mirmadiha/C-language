/* Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150 */
#include<stdio.h>
int main(){
    int n;
    printf("\nEnter any number = ");
    scanf("%d",&n);
    for(int i=0;i<=150;i++){
        printf("\n%d multiplied by %d = %d",n,i,n*i);
    }
    return 0;
}