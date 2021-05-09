#include <stdio.h>

#define DIM 20

void introducirNumero(int *n) {
    printf("Introduce numero que desea buscar en el array: ");
    scanf("%d", n);
}

int busquedaBinaria(int *vector, int izquierda, int derecha, int n) {
    while (izquierda <= derecha) {
        int i = izquierda + (derecha - izquierda) / 2;
        if (vector[i] == n) return i;
        if (vector[i] < n)
            izquierda = i + 1;
        else
            derecha = i - 1;
    }
    return -1;
}

void mostrarSolucion(int encontrado, int n) {
    if (encontrado >= 0) {
        printf("El numero introducido %d se encuentra en la posicion %d \n", n, encontrado);
    } else {
        printf("El numero introducido %d no se encuentra en el array.\n", n);
    }
}

int main(void) {
    int n, bucle;
    int vector[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    introducirNumero(&n);
    mostrarSolucion(busquedaBinaria(vector, 0, (DIM-1), n), n);
    return 0;
}