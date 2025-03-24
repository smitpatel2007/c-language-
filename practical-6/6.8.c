#include <stdio.h>

int main() {

    int array[2][3][2];
    int i, j, k;
    printf("Enter 2 x 3 x 2 = 12 elements for the 3D array:\n");
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 2; k++) {
                printf("Enter element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    printf("\nThe 3D array elements are:\n");
    for(i = 0; i < 2; i++) {
        printf("Dimension 1, Layer %d:\n", i);
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 2; k++) {
                printf("%d\t", array[i][j][k]);
            }
            printf("\n"); 
        }
        printf("\n"); 
    }

    return 0;
}
