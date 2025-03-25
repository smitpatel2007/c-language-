#include <stdio.h>
int main() {
    int a[3][3], b[3][3],c[3][3];
    int i, j, k;
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            
        }
        printf("\n");
    }
    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
            
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
           c[i][j] = 0;
            for(k = 0; k < 3; k++) {
               c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResult of matrix multiplication:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
