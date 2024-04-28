/* Write a C program to calculate the distance between two points.
Note: x1, y1, x2, y2 are all double values.*/

#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2;

    printf("\nEnter the value for x1=");
    scanf("%lf",&x1);

    printf("\nEnter the value for x2=");
    scanf("%lf",&x2);

    printf("\nEnter the value for y1=");
    scanf("%lf",&y1);

    printf("\nEnter the value for y2=");
    scanf("%lf",&y2);

    double formula=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    printf("\nThe distance between two points=%lf",sqrt(formula));
    
    return 0;
}