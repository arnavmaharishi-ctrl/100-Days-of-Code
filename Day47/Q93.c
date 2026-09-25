#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
