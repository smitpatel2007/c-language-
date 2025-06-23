
#include <stdio.h>
#include <string.h>

// Define a union
union StudentData {
    char name[50];
    char subject[50];
    float percentage;
};

// Define a structure to combine all fields
struct Student {
    char name[50];
    char subject[50];
    float percentage;
    int i;
};

int main() {
    struct Student s[3];  // Array for 3 students
    int i;

    // Input data
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Subject Name: ");
        scanf("%s", s[i].subject);

        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }

    // Output data
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Subject: %s\n", s[i].subject);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}
