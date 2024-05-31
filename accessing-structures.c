/*Write a programin C to access structures.*/
#include<stdio.h>

struct student
{
    int roll_no;
    char grade;
    float marks;
};
int main(){
    struct student Sam={1,'A',91.5};
    struct student Bella={2,'B',86.52};
    printf("\nRoll no. of Sam = %d\n",Sam.roll_no);
    printf("\nGrade of Sam = %c\n",Sam.grade);
    printf("\nMarks of Sam = %f\n",Sam.marks);
    printf("\nRoll no. of Bella = %d\n",Bella.roll_no);
    printf("\nGrade of Bella = %c\n",Bella.grade);
    printf("\nMarks of Bella = %f\n",Bella.marks);
    return 0;
}
