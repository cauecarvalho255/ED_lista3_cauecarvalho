#include <stdio.h>

int main() {
    int m[3][3];
    int i, soma = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%i", &m[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        soma += m[i][i];
    }

    printf("\nSoma da diagonal principal: %i\n", soma);

    return 0;
}
