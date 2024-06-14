/*Write a program in C to check if a given number is even or odd using the function.*/
#include<stdio.h>
void check(int *x);  //using pointers
int main()
{
  int a;
  printf("\nEnter any number = ");
  scanf("%d",&a);
 check(&a); 
    return 0;
}
void check(int *x){
    if(*x%2==0)
    {
        printf("\nThe number %d is even\n",*x);
    }
    else
    {
        printf("\nThe number %d is odd\n",*x);
    }
}