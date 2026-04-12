#include <stdio.h>

int main() {
    int m[4][4];
    int i, j, count = 0;

    printf("Digite os valores da matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &m[i][j]);
            if(m[i][j] > 10) count++;
        }
    }

    printf("\nQuantidade de valores maiores que 10: %i\n", count);

    return 0;
}
