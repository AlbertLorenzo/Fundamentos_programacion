#include <stdio.h>
#include <math.h>

void introducirNumeros(int *n) {
    printf("Introduce un numero natural: ");
    scanf("%d", n);
}

void esPrimo(int *n) {
    int esDivisible = 1;
    for (int i = 2; i <= sqrt(*n); i++) {
        if (*n % i == 0) {
            esDivisible = 0;
            break;
        }
    }

    if (*n <= 1) {
        esDivisible = 0;
    } else if (*n == 2) {
        esDivisible = 1;
    }

    if (esDivisible == 1) {
        printf("%d es primo.", *n);
    } else {
        printf("%d no es primo", *n);
    }
}

int main(void) {
    int n;
    introducirNumeros(&n);
    esPrimo(&n);
}