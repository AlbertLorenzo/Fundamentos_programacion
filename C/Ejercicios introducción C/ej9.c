#include <stdio.h>

#define DIM 10

void introducirNumeros(int *vector) {
    for (int i = 0; i < DIM; i++) {
        printf("Introduce el elemento %d para el vector: ", (i + 1));
        scanf("%d", &vector[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void seleccion(int *vector) {
    int min;
    for (int i = 0; i < DIM - 1; i++) {
        min = i;
        for (int j = i + 1; j < DIM; j++) {
            if (vector[j] < vector[min]) {
                min = j;
            }
        }
        swap(&vector[min], &vector[i]);
    }
}

void mostrarVector(int *vector) {
    for (int i = 0; i < DIM; i++) {
        printf("%d ", vector[i]);
    }
}

int main(void) {
    int vector[DIM];
    introducirNumeros(vector);
    seleccion(vector);
    mostrarVector(vector);
    return 0;
}
