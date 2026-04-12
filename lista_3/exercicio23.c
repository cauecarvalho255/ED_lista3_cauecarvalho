#include <stdio.h>

int main(){
    
    float X[5], Y[5];
    float produtoEscalar = 0;
    int i;

    printf("Digite os valores do vetor X:\n");
    for(i = 0; i < 5; i++) {
        printf("X[%d]: ", i);
        scanf("%f", &X[i]);
    }

    printf("\nDigite os valores do vetor Y:\n");
    for(i = 0; i < 5; i++) {
        printf("Y[%d]: ", i);
        scanf("%f", &Y[i]);
    }

    for(i = 0; i < 5; i++) {
        produtoEscalar += X[i] * Y[i];
    }

    printf("\nVetor X:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", X[i]);
    }

    printf("\nVetor Y:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", Y[i]);
    }

    printf("\n\nProduto escalar: %.2f\n", produtoEscalar);

    return 0;
}
