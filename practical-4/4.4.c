#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("Entered character is in lowercase\n");
    } 
    else if(ch>='0'&& ch<='9'){
        printf("entered character is digit");
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Entered character is in uppercase\n");
    } else {
        printf("Entered character is not a digit and alphabet \n");
    }

    return 0;
}
