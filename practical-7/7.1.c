#include <stdio.h>

// Function Prototype
void checkPrime(int num);

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Function Calling
    checkPrime(number);

    return 0;
}

// Function Definition
void checkPrime(int num) {
    int i, isPrime = 1;

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so not prime
                break;
            }
        }
    }

    // Printing the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
}

