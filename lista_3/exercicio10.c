#include <stdio.h>

int main(){
    
    float notas[15];
    float media;
    float soma = 0;
    int i;
    
    printf("Insira a nota dos alunos: \n");
    for(i = 0; i < 15; i++){
        printf("Nota [%i]: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / 15;
    
    printf("===MEDIA DAS NOTAS===\n");

    printf("%.2f", media);
    
    return 0;
}
