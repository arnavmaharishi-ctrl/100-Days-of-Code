#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    int last_space = -1;

    printf("Enter a full name: ");
    scanf(" %[^\n]", name);

    // Find the index of the last space separating the surname
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            last_space = i;
        }
    }

    // If there is no space, just print the name as is
    if (last_space == -1) {
        printf("%s\n", name);
        return 0;
    }

    // Print first initial
    if (name[0] != ' ') {
        printf("%c. ", toupper((unsigned char)name[0]));
    }

    // Print middle initials (all words before the surname)
    for (int i = 0; i < last_space; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", toupper((unsigned char)name[i + 1]));
        }
    }

    // Print the full surname
    printf("%s\n", &name[last_space + 1]);

    return 0;
}
