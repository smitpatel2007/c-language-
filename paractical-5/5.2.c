#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to find divisors of n
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {  // Check if i is a divisor
            sum = sum + i;
        }
    }

    // Check if sum of divisors equals n
    if (n == sum) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
