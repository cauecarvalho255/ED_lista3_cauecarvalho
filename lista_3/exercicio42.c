#include <stdio.h>

int main() {
    int m[4][4];
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            m[i][j] = i * j;
        }
    }

    printf("Matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
