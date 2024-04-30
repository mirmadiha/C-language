/*Write a C program that reads three floating-point values,
 and checks if it is possible to make a triangle with them.
 Determine the perimeter of the triangle if the given values are valid.*/

 #include<stdio.h>
 int main(){
    float no1;
    float no2;
    float no3;
    float perimeter;

    printf("Enter the first number = ");
    scanf("%f",&no1);
    
    printf("Enter the second number = ");
    scanf("%f",&no2);

    printf("Enter the third number = ");
    scanf("%f",&no3);

    //check whether these are the sides of a triangle or not
    if((no1+no2)>no3 && (no2+no3)>no1 && (no3+no1)>no2){
        printf("\nYes! These are the possible sides of a triangle.");
        perimeter=no1+no2+no3;
        printf("\nThe perimeter of the triangle = %f",perimeter);
    }
    else{
        printf("No! These are not the possible sides of a triangle.");
    }
    return 0;
    }
