#include <stdio.h>

int main() {
    int dados[5][4];
    int maior_nota_final = -1;
    int matricula_maior_nota;
    float soma_notas_finais = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &dados[i][0]);
        printf("Digite a média das provas: ");
        scanf("%d", &dados[i][1]);
        printf("Digite a média dos trabalhos: ");
        scanf("%d", &dados[i][2]);

        dados[i][3] = dados[i][1] + dados[i][2];
        soma_notas_finais += dados[i][3];

        if (dados[i][3] > maior_nota_final) {
            maior_nota_final = dados[i][3];
            matricula_maior_nota = dados[i][0];
        }
        printf("\n");
    }

    printf("--- Resultados ---\n");
    printf("Matrícula do aluno com a maior nota final: %d\n", matricula_maior_nota);
    printf("Média aritmética das notas finais: %.2f\n", soma_notas_finais / 5);

    return 0;
}
