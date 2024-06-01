/* Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.*/
#include<stdio.h>
struct student{
    char name[50];
    int age;
    int rno;
    float marks;
    
};
int main(){
    struct student s1,s2;
    printf("Input values for student 1:");
    printf("\nEnter the name of the student = ");
    scanf("%s",&s1.name);
    printf("\nEnter the age of the student = ");
    scanf("%d",&s1.age);
    printf("\nEnter the roll number of the student = ");
    scanf("%d",&s1.rno);
    printf("\nEnter the marks of the student = ");
    scanf("%f",&s1.marks);
    

    printf("\nInput values for student 2:");
    printf("\nEnter the name of the student = ");
    scanf("%s",&s2.name);
    printf("\nEnter the age of the student = ");
    scanf("%d",&s2.age);
    printf("\nEnter the roll number of the student = ");
    scanf("%d",&s2.rno);
    printf("\nEnter the marks of the student = ");
    scanf("%f",&s2.marks);
   

    float total=s1.marks+s2.marks;
    float avg=total/2.0;
    printf("\n\nThe average of the marks out of 100 = %f",avg);
    
    return 0;
}