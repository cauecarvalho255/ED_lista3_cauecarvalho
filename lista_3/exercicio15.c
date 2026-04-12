#include <stdio.h>

int main(){
    
    int vetor[20];
    int i, j;
    int repetido;

    for(i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nVetor sem elementos repetidos:\n");

    for(i = 0; i < 20; i++) {
        repetido = 0;

        for(j = 0; j < i; j++) {
            if(vetor[i] == vetor[j]) {
                repetido = 1;
                break;
            }
        }

        if(!repetido) {
            printf("%i ", vetor[i]);
        }
    }

    return 0;
}
