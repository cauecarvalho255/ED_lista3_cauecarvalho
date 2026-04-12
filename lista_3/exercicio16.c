#include <stdio.h>

int main(){
    float vetor[5];
    int i, codigo;

    for(i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Digite o codigo: ");
    scanf("%i", &codigo);

    if(codigo == 0){
      
        return 0;
    } 
    else if(codigo == 1) {

        printf("\nVetor na ordem direta:\n");
        for(i = 0; i < 5; i++){
            printf("%.2f ", vetor[i]);
        }
    } 
    else if(codigo == 2){

        printf("\nVetor na ordem inversa:\n");
        for(i = 4; i >= 0; i--){
            printf("%.2f ", vetor[i]);
        }
    } 
    else {
        printf("\nCodigo invalido!\n");
    }

    return 0;
}
