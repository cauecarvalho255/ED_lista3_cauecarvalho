#include <stdio.h>

int main() {
    
  int x[5], y[5];
    int soma[5], produto[5];
    int diferenca[5], intersecao[5], uniao[10];
    int i, j, k, existe;

    for(i = 0; i < 5; i++) scanf("%i", &x[i]);
    for(i = 0; i < 5; i++) scanf("%i", &y[i]);

    for(i = 0; i < 5; i++) {
        soma[i] = x[i] + y[i];
        produto[i] = x[i] * y[i];
    }

    k = 0;
    for(i = 0; i < 5; i++) {
        existe = 0;
        for(j = 0; j < 5; j++) {
            if(x[i] == y[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            diferenca[k++] = x[i];
        }
    }

    k = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(x[i] == y[j]) {
                intersecao[k++] = x[i];
                break;
            }
        }
    }

    k = 0;
    for(i = 0; i < 5; i++) {
        uniao[k++] = x[i];
    }

    for(i = 0; i < 5; i++) {
        existe = 0;
        for(j = 0; j < 5; j++) {
            if(y[i] == x[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            uniao[k++] = y[i];
        }
    }

    for(i = 0; i < 5; i++) printf("%i ", soma[i]);
    printf("\n");

    for(i = 0; i < 5; i++) printf("%i ", produto[i]);
    printf("\n");

    for(i = 0; i < k; i++) printf("%i ", diferenca[i]);
    printf("\n");

    for(i = 0; i < 5; i++) printf("%i ", intersecao[i]);
    printf("\n");

    for(i = 0; i < k; i++) printf("%i ", uniao[i]);

    return 0;
}
