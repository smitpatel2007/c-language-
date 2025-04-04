#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a vowel (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    // Taking input from user
    printf("Enter a string: ");
    gets(str); // Using gets() (not recommended for large inputs, but works here)

    // Count vowels and display result
    int vowelCount = countVowels(str);
    printf("Number of vowels in the given string: %d\n", vowelCount);

    return 0;
}
