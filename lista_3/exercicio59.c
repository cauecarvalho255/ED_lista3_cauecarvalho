#include <stdio.h>

int main() {
    float matriz1[2][2], matriz2[2][2], matriz_result[2][2], constante;
    int opcao;

    printf("Preencha a primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matriz 1 [%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\nPreencha a segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matriz 2 [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    do {
        printf("\n--- MENU DE OPÇÕES ---\n");
        printf("(1) Somar as duas matrizes\n");
        printf("(2) Subtrair a primeira matriz da segunda\n");
        printf("(3) Adicionar uma constante às duas matrizes\n");
        printf("(4) Imprimir as matrizes\n");
        printf("(0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nResultado da Soma:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        matriz_result[i][j] = matriz1[i][j] + matriz2[i][j];
                        printf("%.2f ", matriz_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nResultado da Subtração (M2 - M1):\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        matriz_result[i][j] = matriz2[i][j] - matriz1[i][j];
                        printf("%.2f ", matriz_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("\nDigite o valor da constante: ");
                scanf("%f", &constante);
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        matriz1[i][j] += constante;
                        matriz2[i][j] += constante;
                    }
                }
                printf("Constante adicionada com sucesso.\n");
                break;

            case 4:
                printf("\nMatriz 1:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) printf("%.2f ", matriz1[i][j]);
                    printf("\n");
                }
                printf("\nMatriz 2:\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) printf("%.2f ", matriz2[i][j]);
                    printf("\n");
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}
