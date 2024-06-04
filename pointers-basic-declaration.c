/*Write a program in C to show the basic declaration of a pointer.*/
#include<stdio.h>
int main(){
    int a;
    int *aptr=&a;
    printf("\nEnter the value for a = ");
    scanf("%d",&a);
    printf("\nThe address of a = %x",aptr);
    printf("\nThe address of a = %x",&a);
    printf("\nThe value of a = %d",a);
    printf("\nThe value of a = %d",*aptr);
    printf("\nThe address of aptr = %x",&aptr);

    return 0;
}