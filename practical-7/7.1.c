#include <stdio.h>
void Prime(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    Prime(n);
    return 0;
}
void Prime(int n) {
    int isPrime = 1;
    if (n < 2) {
        isPrime = 0; 
    } else {
        for (int i = 2; i < n; i++) { 
            if (n% i == 0) {
                isPrime = 0; 
                break; 
            }
        }
    }
    if (isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is Not a Prime Number.\n", n);
    }
}
