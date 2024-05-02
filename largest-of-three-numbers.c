/*Write a C program to find the largest of three numbers.*/
#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("\nEnter the first number = ");
    scanf("%d",&x);

    printf("\nEnter the second number = ");
    scanf("%d",&y);

    printf("\nEnter the third number = ");
    scanf("%d",&z);

    if(x>y & x>z){
        printf("\n%d is the greatest of three numbers",x);
    }

    else if(y>x & y>z){
        printf("\n%d is the greatest of three numbers",y);
    }

    else{
        printf("\n%d is the greatest of three numbers",z);
    }

    return 0;
}