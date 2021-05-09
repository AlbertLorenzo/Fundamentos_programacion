#include <stdio.h>

void introducirNumero(int *n) {
    printf("Introduce un numero (entero): ");
    scanf("%d", n);
}

void mostrarEsEntero(int n) {
    if (n % 2 == 0) {
        printf("El numero entero %d es par.", n);
    } else {
        printf("El numero entero %d no es par.", n);
    }
}

int main(void) {
    int n;
    introducirNumero(&n);
    mostrarEsEntero(n);
    return 0;
}