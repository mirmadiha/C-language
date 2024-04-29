#include<stdio.h>
int main(){
    int month;
    printf("\nEnter a number between 1 and 12 :  ");
    scanf("%d",&month);
     
    switch(month){    // Start checking the input number using a switch statement
        case 1:
        printf("\nIt is the month of JANUARY");
        break;

        case 2:
        printf("\nIt is the month of FEBRUARY");
        break;

        case 3:
        printf("\nIt is the month of MARCH");
        break;

        case 4:
        printf("\nIt is the month of APRIL");
        break;

        case 5:
        printf("\nIt is the month of MAY");
        break;

        case 6:
        printf("\nIt is the month of JUNE");
        break;

        case 7:
        printf("\nIt is the month of JULY");
        break;

        case 8:
        printf("\nIt is the month of AUGUST");
        break;

        case 9:
        printf("\nIt is the month of SEPTEMBER");
        break;

        case 10:
        printf("\nIt is the month of OCTOBER");
        break;

        case 11:
        printf("\nIt is the month of NOVEMBER");
        break;

        case 12:
        printf("\nIt is the month of DECEMBER");
        break;

        default:
        printf("\nError:You entered wrong input");

    }
    return 0;
    }