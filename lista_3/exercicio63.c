#include <stdio.h>

int main() {
    int tabuleiro[3][3];
    int i, j;
    int jogada_feita = 0;

    printf("Digite o estado atual do tabuleiro (3x3):\n");
    printf("(-1 para Minha Peça, 0 para Vazio, 1 para Oponente)\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        int soma_h = 0, vazio_j = -1;
        for (j = 0; j < 3; j++) {
            soma_h += tabuleiro[i][j];
            if (tabuleiro[i][j] == 0) vazio_j = j;
        }
        if (soma_h == -2 && vazio_j != -1) {
            printf("\nPróxima jogada sugerida (Vencer): [%d][%d]\n", i, vazio_j);
            return 0;
        }
    }

    for (j = 0; j < 3; j++) {
        int soma_v = 0, vazio_i = -1;
        for (i = 0; i < 3; i++) {
            soma_v += tabuleiro[i][j];
            if (tabuleiro[i][j] == 0) vazio_i = i;
        }
        if (soma_v == -2 && vazio_i != -1) {
            printf("\nPróxima jogada sugerida (Vencer): [%d][%d]\n", vazio_i, j);
            return 0;
        }
    }

    for (i = 0; i < 3; i++) {
        int soma_h = 0, vazio_j = -1;
        for (j = 0; j < 3; j++) {
            soma_h += tabuleiro[i][j];
            if (tabuleiro[i][j] == 0) vazio_j = j;
        }
        if (soma_h == 2 && vazio_j != -1) {
            printf("\nPróxima jogada sugerida (Bloquear): [%d][%d]\n", i, vazio_j);
            return 0;
        }
    }

    for (j = 0; j < 3; j++) {
        int soma_v = 0, vazio_i = -1;
        for (i = 0; i < 3; i++) {
            soma_v += tabuleiro[i][j];
            if (tabuleiro[i][j] == 0) vazio_i = i;
        }
        if (soma_v == 2 && vazio_i != -1) {
            printf("\nPróxima jogada sugerida (Bloquear): [%d][%d]\n", vazio_i, j);
            return 0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("\nPróxima jogada sugerida (Livre): [%d][%d]\n", i, j);
                return 0;
            }
        }
    }

    printf("\nNão há jogadas possíveis (Empate ou Tabuleiro Cheio).\n");

    return 0;
}
