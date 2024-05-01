/*Write a C program to find the third angle of a triangle if two angles are given.*/
#include<stdio.h>
int main(){
    int angle1;
    int angle2;
    int angle3;

    printf("\nEnter the first angle of the triangle = ");
    scanf("%d",&angle1);

    printf("\nEnter the second angle of the triangle = ");
    scanf("%d",&angle2);

    angle3=180-(angle1+angle2);

    printf("\nThe third angle = %d",angle3);

    return 0;
}