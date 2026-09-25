#include <stdio.h>

int main() {
    char str[1000];
    char longest[1000], current[1000];
    int max_len = 0, cur_len = 0;
    int i = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[cur_len++] = str[i];
        } else {
            if (cur_len > 0) {
                current[cur_len] = '\0';
                if (cur_len > max_len) {
                    max_len = cur_len;
                    for (int j = 0; j <= cur_len; j++) {
                        longest[j] = current[j];
                    }
                }
                cur_len = 0;
            }
        }

        if (str[i] == '\0') {
            break;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
