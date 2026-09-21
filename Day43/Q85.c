#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // Two-pointer swap
    int start = 0, end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
