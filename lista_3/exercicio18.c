#include <stdio.h>

int main(){
    
    int vetor[10];
    int i, x;

    for(i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%i", &x);

    printf("\nMultiplos de %i no vetor:\n", x);

    for(i = 0; i < 10; i++){
        if(vetor[i] % x == 0) {
            printf("%i ", vetor[i]);
        }
    }

    return 0;
}
