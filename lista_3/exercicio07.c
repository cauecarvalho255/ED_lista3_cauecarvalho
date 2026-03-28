#include <stdio.h>

int main(){
    
    int vetor[10];
    int posicao;
    int maior;
    int i;
    
    printf("Insira os elementos do vetor: \n");
    
    for(i = 0; i < 10; i++){
       printf("[%i]: ", i);
       scanf("%i", &vetor[i]);
    }
    
    maior = vetor[0];
    posicao = 0;
    
    printf("===ELEMENTOS DO VETOR===\n");
    
    for(i = 0; i < 10; i++){
        printf("[%i]", vetor[i]);
    }
    
    printf("\n\n");
    
    for(i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    
    printf("O maior elemento do vetor eh: %i\n", maior);
    printf("Posicao: [%i]\n", posicao);
    return 0;
}
