#include <stdio.h>
void countVowels() {
    char str[100];
    int count = 0;
    // Taking input from user
    printf("Enter a string: ");
    scanf("%s", str); // Reads a full line until newline
    // Counting vowels
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    // Display result
    printf("Number of vowels in the given string: %d\n", count);
}
int main() {
    countVowels(); // Call the function to count vowels
    return 0;
}
