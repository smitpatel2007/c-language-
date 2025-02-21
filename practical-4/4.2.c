#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using nested if statements
    if (num >= 0) {  // First check if number is non-negative
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}




























#include <stdio.h>
int main(){
    int a;
    printf("enter the your number");
    scanf("%d",&a);
    if(a>0){
        printf("your number is positive");
    }
    else if(a<0){
        printf("your numberr is nagetive");

    }
    else{
        printf("yuor number is zero");
    }
    return 0;
}