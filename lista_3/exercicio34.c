#include <stdio.h>

int main() {
    int v[10];
    int i = 0, j, existe;

    printf("Digite 10 numeros diferentes:\n");

    while(i < 10) {
        scanf("%i", &v[i]);

        existe = 0;
        for(j = 0; j < i; j++) {
            if(v[i] == v[j]) {
                existe = 1;
                break;
            }
        }

        if(existe) {
            printf("Numero repetido, digite outro:\n");
        } else {
            i++;
        }
    }

    printf("\nVetor final:\n");
    for(i = 0; i < 10; i++) printf("%i ", v[i]);

    return 0;
}
