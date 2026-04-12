#include <stdio.h>

int main(){
   
    int v[10], v1[10], v2[10];
    int i, j1 = 0, j2 = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%i", &v[i]);
    }

    for(i = 0; i < 10; i++) {
        if(v[i] % 2 != 0) {
            v1[j1] = v[i]; 
            j1++;
        } else {
            v2[j2] = v[i];
            j2++;
        }
    }

    printf("\nValores impares (v1):\n");
    for(i = 0; i < j1; i++) {
        printf("%i ", v1[i]);
    }

    printf("\nValores pares (v2):\n");
    for(i = 0; i < j2; i++) {
        printf("%i ", v2[i]);
    }

    return 0;
}
