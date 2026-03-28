#include <stdio.h>

int main(){
    
    int vetor[8];
    int soma;
    int i, x, y;
    
    printf("Insira os elementos do vetor: \n");
    
    for(i = 0; i < 8; i++){
        printf("[%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    
    printf("Escolha 2 posicoes do vetor (0 até 7)\n");
    scanf("%i", &x);
    scanf("%i", &y);
    
    soma = vetor[x] + vetor[y];
    
    printf("A soma das posicoes do vetor eh: %i", soma);
    
    return 0;
}
