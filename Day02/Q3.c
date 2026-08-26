//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
	int l = 10;
	int b = 2;
	int peri = 2*(l+b);
	int rarea = l*b;
	printf("Area of rectangle is: %d \n" , rarea);
	printf("Perimeter of rectangle is: %d \n" , peri);
	return 0;
}
