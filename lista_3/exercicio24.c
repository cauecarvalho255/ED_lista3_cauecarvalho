#include <stdio.h>

int main(){
    
    int numero, numMaisAlto, numMaisBaixo;
    float altura, maiorAltura, menorAltura;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o numero do aluno: ");
        scanf("%i", &numero);

        printf("Digite a altura do aluno (em metros): ");
        scanf("%f", &altura);


        if(i == 0){
            maiorAltura = altura;
            menorAltura = altura;
            numMaisAlto = numero;
            numMaisBaixo = numero;
        } else {

            if(altura > maiorAltura) {
                maiorAltura = altura;
                numMaisAlto = numero;
            }

            if(altura < menorAltura) {
                menorAltura = altura;
                numMaisBaixo = numero;
            }
        }
    }

    printf("\nAluno mais alto:\n");
    printf("Numero: %i | Altura: %.2f m\n", numMaisAlto, maiorAltura);

    printf("\nAluno mais baixo:\n");
    printf("Numero: %i | Altura: %.2f m\n", numMaisBaixo, menorAltura);

    return 0;
}
