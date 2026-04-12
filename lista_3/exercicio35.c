#include <stdio.h>

int main() {
    int a, b;
    int va[5], vb[5], vs[6];
    int i = 0, j = 0, carry = 0, soma;

    printf("Digite dois numeros (menores que 10000):\n");
    scanf("%i %i", &a, &b);

    while(a > 0) {
        va[i++] = a % 10;
        a /= 10;
    }

    while(b > 0) {
        vb[j++] = b % 10;
        b /= 10;
    }

    int n = (i > j) ? i : j;

    for(int k = 0; k < n; k++) {
        int da = (k < i) ? va[k] : 0;
        int db = (k < j) ? vb[k] : 0;

        soma = da + db + carry;

        if(soma >= 10) {
            vs[k] = soma - 10;
            carry = 1;
        } else {
            vs[k] = soma;
            carry = 0;
        }
    }

    if(carry) {
        vs[n++] = carry;
    }

    printf("\nResultado da soma:\n");
    for(int k = n - 1; k >= 0; k--) {
        printf("%i", vs[k]);
    }

    return 0;
}
