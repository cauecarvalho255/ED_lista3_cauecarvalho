#include <stdio.h>

int main() {
    int v[10];
    int i, j, temp;

    printf("Digite 10 valores:\n");

    for(i = 0; i < 10; i++) {
        scanf("%i", &v[i]);

        for(j = i; j > 0 && v[j] < v[j - 1]; j--) {
            temp = v[j];
            v[j] = v[j - 1];
            v[j - 1] = temp;
        }
    }

    printf("\nValores em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%i ", v[i]);
    }

    return 0;
}
