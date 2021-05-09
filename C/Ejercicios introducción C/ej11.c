#include <stdio.h>
#include <stdlib.h>

#define LIMITE 1000

void cribaEratostenes() {
    unsigned long int i, j;
    int *primos = malloc(LIMITE * sizeof(int));

    for (i = 2; i < LIMITE; i++) primos[i] = 1;

    for (i = 2; i < LIMITE; i++) {
        if (primos[i])
            for (j = i; i * j < LIMITE; j++) {
                primos[i * j] = 0;
            }
    }

    printf("\nLos numeros primos entre 1 y 1000 son: \n");
    for (i = 2; i < LIMITE; i++) {
        if (primos[i]) printf("%d\n", i);
    }

    free(primos);
}

int main(void) {
    cribaEratostenes();
    return 0;
}