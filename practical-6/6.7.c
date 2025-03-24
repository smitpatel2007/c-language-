#include <stdio.h>
int main() {
    int array[10], size, i;
    int largestOdd = -1; 
    printf("Enter the size of the array (max 10): ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < size; i++) {
        if(array[i] % 2 != 0) { 
            if(largestOdd == -1 || array[i] > largestOdd) {
                largestOdd = array[i];
            }
        }
    }
    if(largestOdd == -1) {
        printf("No odd numbers found in the array.\n");
    } else {
        printf("The largest odd number is: %d\n", largestOdd);
    }

    return 0;
}
