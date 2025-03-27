#include <stdio.h>
int findMax(int a, int b, int c);

int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = findMax(num1, num2, num3);
    printf("The maximum number is: %d\n", max);

    return 0;
}
int findMax(int a, int b, int c) {
    int max;
    
    if (a >= b && a >= c) 
        max = a;
    else if (b >= a && b >= c) 
        max = b;
    else 
        max = c;

    return max; 
}

