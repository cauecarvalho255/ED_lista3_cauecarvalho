#include <stdio.h>
#include <math.h>

int main(){
    float v[10];
    float soma = 0, media, desvio = 0;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / 10;

    for(i = 0; i < 10; i++) {
        desvio += pow(v[i] - media, 2);
    }

    desvio = sqrt(desvio / 9); // (n - 1) = 9

    printf("\nMedia: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);

    return 0;
}
