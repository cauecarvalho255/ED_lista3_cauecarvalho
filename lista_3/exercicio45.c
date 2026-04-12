#include <stdio.h>

int main() {
    int A[4][4], B[4][4], C[4][4];
    int i, j;

    printf("Digite os valores da matriz A:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &B[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(A[i][j] > B[i][j]) {
                C[i][j] = A[i][j];
            } else {
                C[i][j] = B[i][j];
            }
        }
    }

    printf("\nMatriz C:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
