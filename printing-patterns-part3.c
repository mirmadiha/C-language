/*printing patterns of numbbers like 
55555           5
4444            44
333             333
22              2222
1               11111
*/
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            printf("%d",i);
        }
        printf("\n");
    }

    
    return 0;
}