#include <stdio.h>

#define LIMITE 100

void introducirCoeficientes(int *t, int *r) {
    printf("Introduce el termino y la razon de la serie geometrica (t r): ");
    scanf("%d %d", t, r);
}

void calcularProgresionGeometrica(int t, int r) {
    unsigned long long int e = t;
    for (int i = 0; i < LIMITE; i++) {
        printf("%llu ", e);
        e *= r;
    }
}

int main(void) {
    int t, r;
    introducirCoeficientes(&t, &r);
    calcularProgresionGeometrica(t, r);
    return 0;
}