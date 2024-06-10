/* Write a program in C to find the factorial of a given number using pointers.*/
#include<stdio.h>
void fact(int n,int *f);

int main()
{
int num,factorial;
printf("Enter the number of which factorial you want to find = ");
scanf("%d",&num);
fact(num,&factorial);
printf("\nThe factorial of %d = %d",num,factorial);
    return 0;
}

void fact(int n,int *f){
    *f=1;
    for(int i=1;i<=n;i++){
        *f=*f*i;
        }
    
}