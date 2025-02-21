#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter values of a, b, and c: ");
    scanf("%f", &a);
       printf("Enter values of a, b, and c: ");
    scanf("%f",&b);
       printf("Enter values of a, b, and c: ");
    scanf("%f",&c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check conditions for roots
    if (discriminant > 0) {
        // Two real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
