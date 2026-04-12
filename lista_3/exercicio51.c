#include <stdio.h>

int main() {
    int m[4][4], t[4][4];
    int i, j;

    printf("Digite os valores da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &m[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(i < j) t[i][j] = 0;
            else t[i][j] = m[i][j];
        }
    }

    printf("\nMatriz original:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz triangular inferior:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
