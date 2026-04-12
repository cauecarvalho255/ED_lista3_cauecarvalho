#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_colunas[3] = {0, 0, 0};

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    printf("\nArray gerado pela soma das colunas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", soma_colunas[i]);
    }
    printf("\n");

    return 0;
}
