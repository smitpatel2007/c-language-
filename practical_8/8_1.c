#include <stdio.h>
#include <string.h>
#include <ctype.h>
// In C programming, #include <ctype.h> is a preprocessor directive that incorporates a header file named ctype.h into your code.
//  This header file provides a set of functions for classifying and transforming characters. 

int main() {
    char str1[100], str2[100], copy[100], rev[100];
    int length, cmp_result;

    // Taking input
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);

    // 1. Finding string length
    length = strlen(str1);
    printf("\nLength of first string: %d", length);

    // 2. Convert to uppercase and lowercase
    printf("\nUppercase of first string: ");
    for(int i = 0; str1[i] != '\0'; i++) {
        printf("%c", toupper(str1[i]));
    }

    printf("\nLowercase of first string: ");
    for(int i = 0; str1[i] != '\0'; i++) {
        printf("%c", tolower(str1[i]));
    }

    // 3. Reverse the string manually
    int j = 0;
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        rev[j++] = str1[i];
    }
    rev[j] = '\0';
    printf("\nReversed first string: %s", rev);

    // 4. Copy string
    strcpy(copy, str1);
    printf("\nCopied first string: %s", copy);

    // 5. Concatenation
    strcat(str1, str2);
    printf("\nConcatenated string: %s", str1);

    // 6. String comparison
    cmp_result = strcmp(copy, str2);
    if (cmp_result == 0) {
        printf("\nBoth strings are equal.");
    } else {
        printf("\nStrings are not equal.");
    }

    return 0;
}

