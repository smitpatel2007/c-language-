#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    printf("sum of digits: %d\n", sum);

    return 0;
}
