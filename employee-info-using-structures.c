/*Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.*/
#include<stdio.h>
struct employee{
    int id;
    char name[50];
    int salary;
}e1,e2,e3;
int main(){
    printf("\nDetails of FIRST Employee:");
    printf("\nEnter the ID of the first employee = ");
    scanf("%d, %s, %d",&e1.id);

    printf("\nEnter the name of the first employee = ");
    scanf("%s",&e1.name);

    printf("\nEnter the salary of the first employee = ");
    scanf("%d",&e1.salary);
    
    printf("\nDetails of SECOND Employee:");
    printf("\nEnter the ID of the second employee = ");
    scanf("%d,  %s,  %d",&e2.id);

    printf("\nEnter the name of the second employee = ");
    scanf("%s",&e2.name);

    printf("\nEnter the salary of the second employee = ");
    scanf("%d",&e2.salary);

    printf("\nDetails of THIRD Employee:");
    printf("\nEnter the ID of the third employee = ");
    scanf("%d,%s,%d",&e3.id);

    printf("\nEnter the name of the third employee = ");
    scanf("%s",&e3.name);

    printf("\nEnter the salary of the third employee = ");
    scanf("%d",&e3.salary);
    
    if(e1.salary>e2.salary&&e1.salary>e3.salary){
        printf("\n The first employee has the highest salary");
    }
    else if(e2.salary>e1.salary&&e2.salary>e3.salary){
        printf("\n The second employee has the highest salary");
    }
    else{
        printf("\n The third employee has the highest salary");
    }

    return 0;
}