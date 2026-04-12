#include <stdio.h>

int main() {
    int m[4][4];
    int i, j;
    int maior, lin = 0, col = 0;

    printf("Digite os valores da matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &m[i][j]);
            if(i == 0 && j == 0) {
                maior = m[i][j];
            } else if(m[i][j] > maior) {
                maior = m[i][j];
                lin = i;
                col = j;
            }
        }
    }

    printf("\nMatriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %i\n", maior);
    printf("Localizacao: linha %i, coluna %i\n", lin, col);

    return 0;
}
