#include <stdio.h>

int main() {
    int A[11];
    int temp[11];
    int i, j, k = 0, t;

    printf("Digite 11 numeros:\n");
    for(i = 0; i < 11; i++) scanf("%i", &A[i]);

    for(i = 0; i < 6; i++) temp[k++] = A[i];
    for(i = 10; i >= 6; i--) temp[k++] = A[i];

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 11; j++) {
            if(temp[i] > temp[j]) {
                t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for(i = 0; i < 11; i++) printf("%i ", temp[i]);

    return 0;
}
