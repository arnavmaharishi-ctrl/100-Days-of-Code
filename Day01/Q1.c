//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main(){
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a); //inputs integer value from the user and stores it in the memory address of a
	printf("Enter value of b: ");
	scanf("%d", &b);
	int sum = a+b;
	printf("The sum of numbers is: %d ", sum);
	return 0;
}
