#include <stdio.h>

int main() {
    // Integer array part
    int arr[10];
    int b = 0;
    float int_avg;
    int i;

    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        b= b + arr[i];
    }

    int_avg = b / 10.0;

    printf("\nInteger Array Result:\n");
    printf("Sum = %d\n", b);
    printf("Average = %.2f\n\n", int_avg);

    // Float array part
    float a[10];
    float c = 0, float_avg;

    printf("Enter 10 float numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Float Number %d: ", i + 1);
        scanf("%f", &a[i]);
        c= c + a[i];
    }

    float_avg = c/ 10;

    printf("\nFloat Array Result:\n");
    printf("Sum = %.2f\n", c);
    printf("Average = %.2f\n", float_avg);

    return 0;
}

