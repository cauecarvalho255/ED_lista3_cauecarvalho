#include <stdio.h>

int main(){
    
    int vetor[10];
    int pares = 0;
    int i;
    
    printf("Insira os elementos do vetor: \n");
    
    for(i = 0; i < 10; i++){
        printf("[%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    
    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            pares++; 
        }
    }
    
    printf("A quantidade de numeros pares eh: %i", pares);
    
    
    return 0;
}
