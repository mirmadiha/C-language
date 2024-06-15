/*prime numbers*/
#include<stdio.h>

    void check(int *x);

int main()
{
    int n;
    printf("\nEnter the number = ");
    scanf("%d",&n);
    check(&n);
    return 0;
}

void check(int *x){
    int count =0;
for(int i=1;i<=10;i++){
  if(*x%i==0){
    count++;
  }
}
    if(count>2){
        printf("\n%d is NOT  a PRIME number",*x);
    }
    else{
        printf("\n%d IS a PRIME number",*x);
    }
}