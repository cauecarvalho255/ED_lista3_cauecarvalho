#include <stdio.h>

int main(){
    
    int vetor[100];
    int i = 0;
    int num = 1;

    while(i < 100) {
        if(num % 7 != 0 && num % 10 != 7) {
            vetor[i] = num;
            i++;
        }
        num++;
    }

    printf("Vetor:\n");
    for(i = 0; i < 100; i++) {
        printf("%i ", vetor[i]);
    }

    return 0;
}
