#include <stdio.h>

void introducirCoeficiente(int *n) {
    printf("Introduce un numero natural u {0}: ");
    scanf("%d", n);
}

void calcularFactorialN(int n) {
    if (n < 0) {
        printf("El numero introducido no es natural.");
    } else if (n == 0) {
        printf("%d! es 1.", n);
    } else {
        int resultado = n;
        for (int i = n - 1; i > 1; i--) {
            resultado *= i;
        }
        printf("%d! es %d", n, resultado);
    }
}

int main(void) {
    int n;
    introducirCoeficiente(&n);
    calcularFactorialN(n);
    return 0;
}