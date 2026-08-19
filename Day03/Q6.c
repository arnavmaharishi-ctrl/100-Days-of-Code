#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping: \n");
    printf("Value of a: %d \n", a);
    printf("Value of b: %d", b);

    return 0;
}
