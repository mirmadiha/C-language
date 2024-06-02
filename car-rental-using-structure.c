/*Design a structure named "Car" to store details like car ID, model, and rental rate per day. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.*/
#include<stdio.h>
struct car{
    int id;
    int model;
    float rate;
}c1,c2,c3;
int main(){
    int days;
    printf("\nEnter the details of car 1:\n");
    printf("Car ID = ");
    scanf("%d",&c1.id);
    printf("Car Model = ");
    scanf("%d",&c1.model);
    printf("Rental rate/day = ");
    scanf("%f",&c1.rate);

    printf("\nEnter the details of car 2:\n");
    printf("Car ID = ");
    scanf("%d",&c2.id);
    printf("\nCar Model = ");
    scanf("%d",&c2.model);
    printf("\nRental rate/day = ");
    scanf("%f",&c2.rate);

    printf("\nEnter the details of car 3:\n");
    printf("Car ID = ");
    scanf("%d",&c3.id);
    printf("\nCar Model = ");
    scanf("%d",&c3.model);
    printf("\nRental rate/day = ");
    scanf("%f",&c3.rate);

    printf("Enter the no. of days for use = ");
    scanf("%d",&days);
    int total1=c1.rate*days;
    int total2=c2.rate*days;
    int total3=c3.rate*days;
    printf("\nThe total rental cost of car 1 for %d days = %d",days,total1);
    printf("\nThe total rental cost of car 2 for %d days = %d",days,total2);
    printf("\nThe total rental cost of car 3 for %d days = %d",days,total3);
    return 0;
}