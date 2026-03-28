#include <stdio.h>

int main(){
    
    int vetor[6];
    int i;
    int valor;

    for(i = 0; i < 6; i++){
        do{
            printf("Insira valores pares:\n");
            scanf("%i", &valor);

            if(valor % 2 != 0){
                printf("invalido! Insira um numero par.\n");
            }

        }while(valor % 2 != 0);

        vetor[i] = valor;
    }

    printf("\nValores na ordem inversa:\n");
    for(i = 5; i >= 0; i--) {
        printf("[%i] ", vetor[i]);
    }

    return 0;
}
