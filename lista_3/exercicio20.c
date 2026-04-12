#include <stdio.h>

int main(){
    
    int v1[10], v2[10];
    int i, j = 0;

    for(i = 0; i < 10; i++){
        do {
            printf("Digite um numero entre 0 e 50: ");
            scanf("%i", &v1[i]);
        } while(v1[i] < 0 || v1[i] > 50);
    }

    for(i = 0; i < 10; i++){
        if(v1[i] % 2 != 0){
            v2[j] = v1[i];
            j++;
        }
    }

    printf("\nVetor 1:\n");
    for(i = 0; i < 10; i++){
        printf("%i ", v1[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    printf("\nVetor 2 (apenas ímpares):\n");
    for(i = 0; i < j; i++){
        printf("%i ", v2[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    return 0;
}
