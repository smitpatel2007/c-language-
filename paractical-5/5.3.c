#include <stdio.h>

int main() {
    int n, org, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    org = n;  // Store original value before modification

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (org == rev) {
        printf("Number is palindrome.\n");
    } else {
        printf("Number is not palindrome.\n");
    }

    return 0;
}
