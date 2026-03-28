#include <stdio.h>

int main(){
   
    float vetor[5];
    float soma = 0, media;
    float maior, menor;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%f", &vetor[i]);

        soma += vetor[i];

        if(i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if(vetor[i] > maior) {
                maior = vetor[i];
            }
            if(vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    media = soma / 5;

    printf("\nValores digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}
