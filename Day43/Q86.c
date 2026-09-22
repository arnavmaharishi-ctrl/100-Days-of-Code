#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    int start = 0, end = len - 1;
    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }

    return 0;
}
