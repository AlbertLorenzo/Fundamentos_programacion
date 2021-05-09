#include <stdio.h>

void introducirCoeficiente(int *n) {
    printf("Introduce un numero natural u {0}: ");
    scanf("%d", n);
}

int calcularFactorialN(int n) {
    if (n < 0) {
        printf("El numero introducido no es natural. \n");
        return -1;
    } else {
        return n > 1 ? n * calcularFactorialN(n - 1) : 1;  
    }
}

int main(void) {
    int n;
    introducirCoeficiente(&n);
    printf("%d! es %d", n, calcularFactorialN(n));
    return 0;
}