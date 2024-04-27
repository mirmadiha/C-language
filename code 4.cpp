/* Write a C program that accepts two integers from the user
 and calculates the sum of the two integers.*/
 #include<stdio.h>
 int main(){
 	int first,second;
 	printf("\nEnter the first number = ");
 	scanf("%d",&first);
	printf("\nEnter the second number = ");
	scanf("%d",&second);
	int sum=first+second;
	printf("\nThe sum of the two numbers is = %d",sum);
    return 0;
 }
