#include <stdio.h>

int main() {
    int m[5][5];
    int i, j, x, encontrado = 0;

    printf("Digite os valores da matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%i", &m[i][j]);
        }
    }

    printf("Digite o valor a ser buscado:\n");
    scanf("%i", &x);

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(m[i][j] == x) {
                printf("Encontrado na linha %i, coluna %i\n", i, j);
                encontrado = 1;
            }
        }
    }

    if(!encontrado) {
        printf("Nao encontrado\n");
    }

    return 0;
}
