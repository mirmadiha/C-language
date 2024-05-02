/* Write a C program to accept the height of a person in centimeters and categorize the person according to their height.*/
#include<stdio.h>
int main(){
    int height;
    printf("\nEnter the height in centimeters = ");
    scanf("%d",&height);

    if(height<150){
        printf("\nVery Short");
    }

    else if(height >= 150 & height <= 159){
        printf("\nShort");
    }

    else if(height >= 160 & height <= 164){
        printf("\nBelow Average");
    }

    else if(height >= 165 & height <= 174){
        printf("\nAverage");
    }

    else if(height >= 175 & height <= 179){
        printf("\nAbove Average");
    }

    else if(height >= 180 & height <= 189){
        printf("\nTall");
    }

    else if(height > 190){
        printf("\nVery Tall");
    }

    else {
        printf("\n You Entered the wrong input");
    }
    
    return 0;
}