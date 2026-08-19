//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	int sum = a+b;
	int diff = a-b;
	int prod = a*b;
	int quo = a/b;
	printf("The Sum of two numbers is: %d \n", sum);
	printf("The Difference of two numbers is: %d \n", diff);
	printf("The Product of two numbers is: %d \n", prod);
	printf("The Quotient of the numbers is: %d \n", quo);
	return 0;
} 
