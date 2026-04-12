#include <stdio.h>

int main(){
    
    int num, i;
    int somaPares = 0;
    int qtdImpares = 0;

    printf("Digite 6 numeros inteiros:\n");

    for(i = 0; i < 6; i++) {
        scanf("%i", &num);

        if(num % 2 == 0) {
            
            printf("Par: %i\n", num);
            somaPares += num;
        } else {

            printf("Impar: %i\n", num);
            qtdImpares++;
        }
    }

    printf("\nSoma dos numeros pares: %i\n", somaPares);
    printf("Quantidade de numeros impares: %i\n", qtdImpares);

    return 0;
}
