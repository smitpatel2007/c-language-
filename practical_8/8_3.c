#include <stdio.h>

// Global variable declared
int number = 10;  // Variable 
void displayNumber() {
    extern int number; // Using extern for access global variable
    printf("The value of number is: %d\n", number);
}

int main() {
    displayNumber(); // function calling for output
    return 0;
}
