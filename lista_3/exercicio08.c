#include <stdio.h>

int main(){
    
    int vetor[6];
    int i;
    
    printf("Insira os valores do vetor:\n");
    for(i = 0; i < 6; i++){
        printf("[%i]: ", i);
        scanf("%i", &vetor[i]);
    }
    
    printf("Valores do vetor na ordem inversa:\n");
    for(i = 5; i >= 0; i--){
        printf("[%i]", vetor[i]);
    }
    
    return 0;
}
