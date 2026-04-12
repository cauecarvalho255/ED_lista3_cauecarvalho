#include <stdio.h>

int ehPrimo(int num){
    int i;

    if(num <= 1){
        return 0; 
    }

    for(i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return 0; 
        }
    }

    return 1; 
}

int main(){
    
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nNumeros primos e suas posicoes:\n");
    for(i = 0; i < 10; i++){
        if(ehPrimo(vetor[i])){
            printf("Valor: %i | Posicao: %i\n", vetor[i], i);
        }
    }

    return 0;
}
