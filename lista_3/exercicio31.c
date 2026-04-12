#include <stdio.h>

int main() {
    int A[10], B[10], C[20];
    int i, j, k = 0;
    int existe;

    for(i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%i", &A[i]);
    }

    for(i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%i", &B[i]);
    }

    for(i = 0; i < 10; i++) {
        existe = 0;
        for(j = 0; j < k; j++) {
            if(C[j] == A[i]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            C[k++] = A[i];
        }
    }

    for(i = 0; i < 10; i++) {
        existe = 0;
        for(j = 0; j < k; j++) {
            if(C[j] == B[i]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            C[k++] = B[i];
        }
    }

    printf("\nUniao dos vetores:\n");
    for(i = 0; i < k; i++) {
        printf("%i ", C[i]);
    }

    return 0;
}
