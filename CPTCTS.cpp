// CPTCTS = ✅ 10. C Program to Concatenate Two Strings

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);  // reads string with spaces

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);  // joins str2 to str1

    printf("Concatenated String: %s\n", str1 + str2);
    return 0;
}
