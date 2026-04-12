#include <stdio.h>

int main(){
    
    int A[10], B[10], C[10];
    int i;

    printf("Digite os valores do vetor A:\n");
    for(i = 0; i < 10; i++){
        printf("A[%d]: ", i);
        scanf("%i", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < 10; i++){
        printf("B[%d]: ", i);
        scanf("%i", &B[i]);
    }

    for(i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    printf("\nVetor C (A - B):\n");
    for(i = 0; i < 10; i++){
        printf("%i ", C[i]);
    }

    return 0;
}
