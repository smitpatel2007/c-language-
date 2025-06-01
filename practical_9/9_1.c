#include <stdio.h>

struct Student {
    int n;
    int roll_no;
    char name[50];
    float marks1;
    float marks2;
    float total;
    float percentage;
};

int main() {
    struct Student students[3];
    int i;

   
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks in Subject 1: ");
        scanf("%f", &students[i].marks1);

        printf("Enter Marks in Subject 2: ");
        scanf("%f", &students[i].marks2);

        // calculation
        students[i].total = students[i].marks1 + students[i].marks2;
        students[i].percentage = students[i].total / 2.0;
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks in Subject 1: %.2f\n", students[i].marks1);
        printf("Marks in Subject 2: %.2f\n", students[i].marks2);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}

