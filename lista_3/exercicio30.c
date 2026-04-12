#include <stdio.h>

int main(){
    
    int A[10], B[10], C[10];
    int i, j, k = 0;
    int existe;

    printf("Digite os valores do vetor A:\n");
    for(i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%i", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%i", &B[i]);
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(A[i] == B[j]) {


                existe = 0;
                for(int x = 0; x < k; x++) {
                    if(C[x] == A[i]) {
                        existe = 1;
                        break;
                    }
                }

                if(!existe) {
                    C[k] = A[i];
                    k++;
                }
            }
        }
    }

    printf("\nIntersecao dos vetores:\n");
    for(i = 0; i < k; i++) {
        printf("%i ", C[i]);
    }

    return 0;
}
