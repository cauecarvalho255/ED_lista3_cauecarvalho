#include <stdio.h>

int main() {
    int m[3][3];
    int i, j;
    int soma = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%i", &m[i][j]);
        }
    }

    for(i = 1; i < 3; i++) {
        for(j = 0; j < i; j++) {
            soma += m[i][j];
        }
    }

    printf("\nSoma dos elementos abaixo da diagonal principal: %i\n", soma);

    return 0;
}
