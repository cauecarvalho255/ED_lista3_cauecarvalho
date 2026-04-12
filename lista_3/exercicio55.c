#include <stdio.h>

int main() {
    float notas[10][3];
    int pior_p1 = 0, pior_p2 = 0, pior_p3 = 0;

    printf("Digite as notas dos 10 alunos para as 3 provas:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Nota da Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        float menor = notas[i][0];
        int prova_menor = 0;

        for (int j = 1; j < 3; j++) {
            if (notas[i][j] < menor) {
                menor = notas[i][j];
                prova_menor = j;
            }
        }

        if (prova_menor == 0) pior_p1++;
        else if (prova_menor == 1) pior_p2++;
        else pior_p3++;
    }

    printf("\n--- Resultado da Análise ---\n");
    printf("Alunos cuja pior nota foi na Prova 1: %d\n", pior_p1);
    printf("Alunos cuja pior nota foi na Prova 2: %d\n", pior_p2);
    printf("Alunos cuja pior nota foi na Prova 3: %d\n", pior_p3);

    return 0;
}
