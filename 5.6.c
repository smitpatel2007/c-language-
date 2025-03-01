#include <stdio.h>

int main() {
    char choice;
    int a, b;
    char op;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    do {
        printf("=====================\n");
        printf("Enter any operation listed below:\n");
        printf("1. Addition (press +)\n");
        printf("2. Subtraction (Press -)\n");
        printf("3. Multiplication (Press *)\n");
        printf("4. Division (Press /)\n");
        printf("5. Modulo (Press %%)\n");
        
        
        printf("Enter your choice of operation: ");
        scanf(" %c", &op); 
        
        switch (op) {
            case '+':
                printf("The sum of %d and %d is: %d\n", a, b, a + b);
                break;
            case '-':
                printf("The difference of %d and %d is: %d\n", a, b, a - b);
                break;
            case '*':
                printf("The product of %d and %d is: %d\n", a, b, a * b);
                break;
            case '/':
                if (b != 0)
                    printf("The division of %d by %d is: %.2f\n", a, b, (float)a / b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case '%':
                if (b != 0)
                    printf("The remainder of %d divided by %d is: %d\n", a, b, a % b);
                else
                    printf("Error! Modulo by zero is not allowed.\n");
                break;
            default:
                printf("Invalid operation! Please try again.\n");
        }
        
       
        printf("Do you want to continue (Y/N)?: ");
        scanf(" %c", &choice);
        
    } while (choice == 'Y' || choice == 'y');
    
    printf("Thank you for using the calculator!\n");
    
    return 0;
}
