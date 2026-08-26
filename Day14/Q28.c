#include <stdio.h>

int main() {
    int n;
    long long prod = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        prod = prod * i;
    }

    printf("Product of even numbers from 1 to %d is: %lld\n", n, prod);

    return 0;
}

