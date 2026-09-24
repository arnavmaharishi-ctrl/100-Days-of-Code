#include <stdio.h>

int main() {
    char str[1000];
    int visited[26] = {0};
    char repeated = '\0';

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (visited[ch - 'a'] == 1) {
                repeated = ch;
                break;
            }
            visited[ch - 'a'] = 1;
        }
    }

    if (repeated != '\0') {
        printf("First repeating lowercase alphabet: %c\n", repeated);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}
