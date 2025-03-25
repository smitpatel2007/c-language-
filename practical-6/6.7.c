#include <stdio.h>
int main() {
    int a[10], size, i;
    int larg = 1; 
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < size; i++) {
        if(a[i] % 2 == 1) { 
            if(larg == 1 || a[i] > larg) {
                larg = a[i];
            }
        }
    }
    if(larg == 1) {
        printf("No odd numbers found in the array.\n");
    } else {
        printf("The largest odd number is: %d\n", larg);
    }

    return 0;
}
