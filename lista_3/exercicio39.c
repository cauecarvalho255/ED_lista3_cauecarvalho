#include <stdio.h>

int main() {
    int n, i, j;
    int t[100][100];

    printf("Digite um numero inteiro positivo:\n");
    scanf("%i", &n);

    for(i = 0; i < n; i++) {
        t[i][0] = 1;
        t[i][i] = 1;

        for(j = 1; j < i; j++) {
            t[i][j] = t[i-1][j-1] + t[i-1][j];
        }
    }

    printf("\nTriangulo de Pascal:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%i ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
