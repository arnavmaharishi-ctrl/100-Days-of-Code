//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
        int r;
        printf("Enter the value of radius: ");
        scanf("%d", &r);
        float circum = 2*3.14*r ;
        float carea = 3.14*(r*r) ;
        printf("Circumference of the circle is: %f", circum);
        printf("Area of the circle is: %f", carea);
        return 0;
}

