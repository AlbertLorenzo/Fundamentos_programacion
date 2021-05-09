#include <stdio.h>

#define PI 3.1415

void introducirRadio(float *radio) {
    printf("Introduce el radio (entero) de la circunferencia: ");
    scanf("%f", radio);
}

void calcularArea(float *area, float radio) {
    *area = (PI * radio * radio);
}

void calcularLongitud(float *longitud, float radio) {
    *longitud = 2 * PI * radio;
}

int main(void) {
    float area, longitud, radio;

    introducirRadio(&radio);
    calcularArea(&area, radio);
    calcularLongitud(&longitud, radio);

    printf("Area de la circunferencia: %.2f \n", area);
    printf("Longitud de la circunferencia: %.2f", longitud);
    return 0;
}