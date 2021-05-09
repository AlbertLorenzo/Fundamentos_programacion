#include <stdio.h>

#define DIM 20

void introducirNumero(int *n) {
    printf("Introduce numero que desea buscar en el array: ");
    scanf("%d", n);
}

void encontrarOcurrencias(int *vector, int *n) {
    int ocurrencias = 0;
    int *posicionesOcurrencias;

    for (int i = 0; i < DIM; i++) {
        if (vector[i] == *n) ocurrencias++;
    }

    if (ocurrencias > 0) {
        printf("El numero %d se repite %d veces en las posiciones: ", *n, ocurrencias);
        for (int i = 0; i < DIM; i++) {
            if (vector[i] == *n) printf("%d ", i + 1);
        }
    } else {
        printf("El numero introducido no se encuentra en el array.");
    }
}

int main(void) {
    int n;
    int vector[DIM] = {11, 9, 11, 2, 3, 7, 6, 3, 4, 5, 6, 7, 12, 15, 1, 2, 1, 6, 7, 11};
    introducirNumero(&n);
    encontrarOcurrencias(vector, &n);
    return 0;
}