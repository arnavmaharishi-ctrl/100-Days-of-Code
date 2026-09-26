#include <stdio.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        if (str[i] == '\0') {
            break;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}
