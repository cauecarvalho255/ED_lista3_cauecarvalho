#include <stdio.h>

int main(){
    
    int vetorA[6] = {1, 0, 5, -2, -5, 7};
    int soma;
    int i; 
    
    soma = vetorA[0] + vetorA[1] + vetorA[5];
    printf("A soma eh: %i\n", soma);
    
    vetorA[4] =  100;
    
    for (i = 0; i < 6; i++){
        printf("[%i]", vetorA[i]);
    }
    
    return 0;
}
