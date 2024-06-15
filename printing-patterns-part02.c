/*printing patterns part 2*/
#include<stdio.h>
int main()
{
    //using increment operator
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n");

    //using decrement operator
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}