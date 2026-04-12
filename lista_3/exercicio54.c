#include <stdio.h>

int main() {
    char gabarito[10];
    int matriculas[3];
    char respostas[3][10];
    int notas[3] = {0, 0, 0};
    int aprovados = 0;

    printf("Digite o gabarito oficial (10 questões de 'a' a 'e'):\n");
    for (int i = 0; i < 10; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nDigite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &matriculas[i]);

        printf("Digite as 10 respostas do aluno:\n");
        for (int j = 0; j < 10; j++) {
            printf("Questão %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);

            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }

        if (notas[i] >= 7) {
            aprovados++;
        }
    }

    printf("\n--- Relatório Final ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Matrícula: %d | Respostas: ", matriculas[i]);
        for (int j = 0; j < 10; j++) {
            printf("%c ", respostas[i][j]);
        }
        printf("| Nota: %d\n", notas[i]);
    }

    float percentual = (float)aprovados / 3 * 100;
    printf("\nPercentual de aprovação: %.2f%%\n", percentual);

    return 0;
}
