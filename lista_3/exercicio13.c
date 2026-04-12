#include <stdio.h>

int main(){
    
    int vetor[5];
    int i;
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 1; i < 5; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("Maior valor: %i (posicao %i)\n", maior, posMaior);
    printf("Menor valor: %i (posicao %i)\n", menor, posMenor);

    return 0;
}
