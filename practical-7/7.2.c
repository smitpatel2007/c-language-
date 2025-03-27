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
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
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
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    return PI * radius * radius; // Returning the area
}

           // 3. With arguments but no return value

#include <stdio.h>
#define PI 3.14159

// Function prototype
void areaOfCircle(float radius);

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    areaOfCircle(radius); // Function calling with argument
    return 0;
}

// Function definition
void areaOfCircle(float radius) {
    float area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
}

              // 4. With arguments and a return value


#include <stdio.h>
#define PI 3.14159

// Function prototype
float areaOfCircle(float radius);

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = areaOfCircle(radius); // Function calling with argument and storing the returned value
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

// Function definition
float areaOfCircle(float radius) {
    return PI * radius * radius; // Returning the calculated area
}


