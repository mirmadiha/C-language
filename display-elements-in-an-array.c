/*Write a program in C to store elements in an array and print them.*/
#include<stdio.h>
int main(){
    int num[5];
    num[0]=3;
    num[1]=4;
    num[2]=2;
    num[3]=3;
    num[4]=5;
    for(int i=0;i<5;i++){
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}