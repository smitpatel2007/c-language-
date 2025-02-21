//using if else
#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maximum number is: %d\n", a);
    } else if (b > a) {
        printf("Maximum number is: %d\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

// using switch caase
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = (a > b) ? 1 : (b > a) ? 2 : 0;

    switch (result) {
        case 1:
            printf("Maximum number is: %d\n", a);
            break;
        case 2:
            if (b > a) {
                printf("Maximum number is: %d\n", b);
            } else {
                printf("Both numbers are equal.\n");
            }
            break;
        case 0:
            printf("Both numbers are equal.\n");
            break;
    }

    return 0;
}




// using conditional
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Maximum number is: %d\n", a) :
    (b > a) ? printf("Maximum number is: %d\n", b) :
              printf("Both numbers are equal.\n");

    return 0;
}
