#include<stdio.h>
int main(){
    //2 students and 3 subjects(2*3)
    int arr[2][3];
    arr[0][0]=92;
    arr[0][1]=94;
    arr[0][2]=90;
    arr[1][0]=91;
    arr[1][1]=95;
    arr[1][2]=98;
    printf("The marks of the first student in maths,english and science are = %d\t%d\t%d\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("The marks of the second student in maths,english and science are = %d\t%d\t%d\t",arr[1][0],arr[1][1],arr[1][2]);
    return 0;
}