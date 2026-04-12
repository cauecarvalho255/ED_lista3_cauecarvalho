#include <stdio.h>

int main() {
    char gabarito[10];
    char respostas[5][10];
    int resultado[5] = {0, 0, 0, 0, 0};

    printf("Digite o gabarito das 10 questões (a, b, c ou d):\n");
    for (int i = 0; i < 10; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nDigite as respostas do Aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Questão %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);

            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    printf("\n--- Pontuação Final ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}
