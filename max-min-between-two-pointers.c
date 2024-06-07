/*Write a program in C to find the maximum number between two numbers using a pointer.*/
#include<stdio.h>
int main()
{
  int a,b;
  int *aptr=&a;
  int *bptr=&b;
  printf("Enter the first number = ");
  scanf("%d",&a);
  printf("Enter the second number = ");
  scanf("%d",&b);
  if(*aptr>*bptr){
    printf("\n%d is the maximum number",*aptr);
    printf("\n%d is the minimum number",*bptr);
  }
  else{
    printf("\n%d is the maximum number",*bptr);
    printf("\n%d is the minimum number",*aptr);
  }
  return 0;
}