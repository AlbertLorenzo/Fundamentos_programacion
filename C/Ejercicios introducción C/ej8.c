#include <stdio.h>

void introducirNumeros(int *a, int *b) {
    printf("Introduce dos numeros naturales para calcular su MCD y MCM (a b): ");
    scanf("%d %d", a, b);
}

int maximoComunDivisor(int a, int b) {
    if (b == 0) return a;
    return maximoComunDivisor(b, a % b);
}

int minimoComunMultiplo(int a, int b) {
    return (a / maximoComunDivisor(a, b)) * b;
}

int main(void) {
    int a, b;
    introducirNumeros(&a, &b);
    printf("MCD(%d, %d) : %d \n", a, b, maximoComunDivisor(a, b));
    printf("MCM(%d, %d) : %d", a, b, minimoComunMultiplo(a, b));
    return 0;
}