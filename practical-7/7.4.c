
//(a) With the help recursion

#include<stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}


//(b) Without the help recursion

#include <stdio.h>

int factorial(int n);

int main() {
    int num, fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}







