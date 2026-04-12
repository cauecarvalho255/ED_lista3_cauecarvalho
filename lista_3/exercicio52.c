#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m[5][5];
    int usados[100] = {0};
    int i, j, num;

    srand(time(NULL));

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            do {
                num = rand() % 100;
            } while(usados[num]);

            usados[num] = 1;
            m[i][j] = num;
        }
    }

    printf("Cartela de Bingo:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%2i ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
