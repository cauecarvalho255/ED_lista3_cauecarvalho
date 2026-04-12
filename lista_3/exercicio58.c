#include <stdio.h>

int main() {
    float matriz[3][6];
    float soma_colunas_impares = 0;
    float soma_segunda_quarta = 0;

    printf("Digite os valores reais para uma matriz 3x6:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if ((j + 1) % 2 != 0) {
                soma_colunas_impares += matriz[i][j];
            }

            if (j == 1 || j == 3) {
                soma_segunda_quarta += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("\n(a) Soma dos elementos das colunas ímpares: %.2f\n", soma_colunas_impares);
    printf("(b) Média aritmética da segunda e quarta colunas: %.2f\n", soma_segunda_quarta / 6.0);

    printf("\n(d) Matriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
