#include <stdio.h>

// Declaring an extern variable (defined in extern_var.c)
extern char message[];

int main() {
    printf("%s\n", message);  // Accessing the extern variable
    return 0;
}

