/*Write a program that converts Centigrade to Fahrenheit.*/
#include<stdio.h>
int main(){
    //Declare variables
    float temp;
    float convert;
    printf("\nEnter the temperature in centigrade = ");
    scanf("%f",&temp);

    //conversion  
    convert=(temp*1.8)+32;
    printf("\n%f centigrade = %f fahrenheit",temp,convert); 
    return 0;
}