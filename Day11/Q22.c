#include <stdio.h>

int main() {
    float cp, sp, amount, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Profit: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (cp > sp) {
        amount = cp - sp;
        percentage = (amount / cp) * 100;
        printf("Loss: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
