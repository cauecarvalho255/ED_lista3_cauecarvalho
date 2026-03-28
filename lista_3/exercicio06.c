#include <stdio.h>

int main(){
    
    int vetor[10];
    int maior;
    int menor;
    int i;
    
    printf("Insira 10 elementos do vetor: \n");
    
    for(i = 0; i < 10; i++){
        printf("[%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for(i = 0; i < 10; i++){
        
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("O MAIOR numero do vetor eh: %i\n", maior);
    printf("O MENOR numero do vetor eh: %i\n", menor);
    
    return 0;
}
