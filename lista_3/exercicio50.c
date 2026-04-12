#include <stdio.h>

int main() {
    int m[3][3], t[3][3];
    int i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%i", &m[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            t[j][i] = m[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%i ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
