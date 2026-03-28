#include <stdio.h>

int main() {
    float vetor[10];
    float somaPositivos = 0;
    int i, Negativos = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %iº número: ", i + 1);
        scanf("%f", &vetor[i]);

        if(vetor[i] < 0) {
            Negativos++;
        } else if(vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    printf("\nQuantidade de números negativos: %i\n", Negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
