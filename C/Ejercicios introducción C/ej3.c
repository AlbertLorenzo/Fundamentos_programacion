#include <stdio.h>

void introducirCoeficientes(float *a, float *b, float *c) {
    printf("Introduce los tres coeficientes reales (a b c): ");
    scanf("%f %f %f", a, b, c);
}

int absoluto(int n) {
   return n < 0 ? -n : n;
}

double encontrarRaizNewton(double num) { 
  double x1 = (num * 1.0) / 2; 
  double x2 = (x1 + (num / x1)) / 2; 
  while(absoluto(x1 - x2) >= 0.0000001) { 
    x1 = x2; 
    x2 = (x1 + (num / x1)) / 2; 
  } 
  return x2; 
} 

void mostrarSoluciones(float a, float b, float c) {
    float const discriminanteEcuacion = ((b * b) - 4 * a * c);
    if (discriminanteEcuacion > 0) {
        float const raiz1 = (-b + encontrarRaizNewton(discriminanteEcuacion)) / (2 * a); 
        float const raiz2 = (-b - encontrarRaizNewton(discriminanteEcuacion)) / (2 * a); 
        printf("Las dos soluciones son: %.1f %1.f", raiz1, raiz2);
    } else if (discriminanteEcuacion == 0) {
        float const raiz1 = -b / (2 * a);
        printf("Como la discriminante equivale a 0 las dos raices son identicas: %.1f", raiz1);
    } else {
        printf("La ecuacion no tiene soluciones reales ya que la discriminante es menor que 0.");
    }
}

int main(void) {
    float a, b, c;
    introducirCoeficientes(&a, &b, &c);
    mostrarSoluciones(a, b, c);
    return 0;
}