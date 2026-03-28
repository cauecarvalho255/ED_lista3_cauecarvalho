#include <stdio.h>

int main(){
    
    float vetor[10];
    float vetorR[10];
    int i;
    
    printf("Insira os elementos do vetor:\n");
    
    for(i = 0; i < 10; i++){
        printf("[%i]: ", i);
        scanf("%f", &vetor[i]);
    }

    printf("O quadrado dos elementos do vetor eh:\n");
    
    for(i = 0; i < 10; i++){
       vetorR[i] = vetor[i] * vetor[i];
       printf("[%.2f]\n", vetorR[i]);
    }
    
    return 0;
}
