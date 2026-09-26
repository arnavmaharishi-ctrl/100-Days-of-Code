#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    char temp[2000];

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        printf("Strings are not rotations of each other\n");
        return 0;
    }

    // Concatenate s1 with itself: s1 + s1 contains all rotations of s1
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        printf("Strings are rotations of each other\n");
    } else {
        printf("Strings are not rotations of each other\n");
    }

    return 0;
}
