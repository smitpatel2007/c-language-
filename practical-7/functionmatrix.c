#include <stdio.h>
void transposematrix();
int main() {
    transposematrix(); 
    return 0;
}

void transposematrix() {
    int a[2][2],b[2][2],c[2][2] ,i, j,k;
    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    // multiplication
    
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
           c[i][j] = 0;
            for(k = 0; k < 2; k++) {
               c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("\nResult of matrix multiplication:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    // addition
    printf("result of matrix addition\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}
