#include <stdio.h>

int main(){
    
    int vetor[10];
    int i, j;
    int repetido;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores repetidos:\n");

    for(i = 0; i < 10; i++) {
        repetido = 0;

        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                repetido = 1;
            }
        }

        for(j = 0; j < i; j++) {
            if(vetor[i] == vetor[j]) {
                repetido = 0;
            }
        }

        if(repetido) {
            printf("%i\n", vetor[i]);
        }
    }

    return 0;
}
