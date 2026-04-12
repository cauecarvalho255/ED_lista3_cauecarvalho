#include <stdio.h>

int main() {
    int v[15];
    int i, j, n = 15;

    printf("Digite 15 valores:\n");
    for(i = 0; i < 15; i++) scanf("%i", &v[i]);

    for(i = 0; i < n; i++) {
        if(v[i] == 0) {
            for(j = i; j < n - 1; j++) {
                v[j] = v[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("\nVetor compactado:\n");
    for(i = 0; i < n; i++) printf("%i ", v[i]);

    return 0;
}
