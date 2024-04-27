/*  Write a C program that accepts two item's weight
 and number of purchases (floating point values) and 
 calculates their average value.*/
 #include<stdio.h>
 int main(){
 	float weight_1,no_1,weight_2,no_2;
 	
 	printf("\nNumber of purchase for item 1=");
 	scanf("%f",&no_1);
 	
 	printf("\nNumber of purchase for item 2=");
 	scanf("%f",&no_2);
 	
 	printf("\nweight of item number 1 =");
 	scanf("%f",&weight_1);
 	
 	printf("\nweight of item number 2 =");
 	scanf("%f",&weight_2);
 	
 	float average=(weight_1*no_1)+(weight_2*no_2)/no_1+no_2;
 	
 	printf("\nThe average is %f",average);
 	
	return 0;
 }
