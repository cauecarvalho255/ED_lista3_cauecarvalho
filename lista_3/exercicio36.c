#include <stdio.h>

int main() {
    float v[10];
    int i, j;
    float temp;

    printf("Digite 10 numeros reais:\n");
    for(i = 0; i < 10; i++) scanf("%f", &v[i]);

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for(i = 0; i < 10; i++) printf("%.2f ", v[i]);

    return 0;
}
