#include <stdio.h>

int main() {
    char str[1000];
    char target;
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to find: ");
    scanf(" %c", &target);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", target, count);

    return 0;
}
