#include <stdio.h>

int main() {
    int num[5];
    int i, a = 0, b = 1;
  
    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            b = b * num[i];   
        } else {
            a = a + num[i];   
        }
    }
    printf("\nSum of elements at odd indexes = %d\n", a);
    printf("Multiplication of elements at even indexes = %d\n", b);

    return 0;
}

