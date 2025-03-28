                           //1. No arguments and no return value
#include <stdio.h>
#define PI 3.14159

// Function prototype
void areaOfCircle();

int main() {
    areaOfCircle(); // Function calling
    return 0;
}

// Function definition
void areaOfCircle() {
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI * r* r;
    printf("Area of the circle: %.2f\n", area);
}


             //2. No arguments but a return value
#include <stdio.h>
#define PI 3.14159

// Function prototype
float areaOfCircle();

int main() {
    float area;
    area = areaOfCircle(); // Function calling
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

// Function definition
float areaOfCircle() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    return PI * r * r; // Returning the area
}

           // 3. With arguments but no return value

#include <stdio.h>
#define PI 3.14159

// Function prototype
void areaOfCircle(float radius);

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    areaOfCircle(r); // Function calling with argument
    return 0;
}

// Function definition
void areaOfCircle(float r) {
    float area = PI * r * r;
    printf("Area of the circle: %.2f\n", area);
}

              // 4. With arguments and a return value


#include <stdio.h>
#define PI 3.14159


float areaOfCircle(float r);

int main() {
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = areaOfCircle(r); 
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

float areaOfCircle(float r) {
    return PI * r * r; 
}


