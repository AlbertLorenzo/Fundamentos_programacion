#include <iostream>

void incrementar_int_referencia(int &p_int) {
    p_int += 1;
}

void incrementar_int_puntero(int *p_int) {
    *p_int += 1;
}

int incrementar_int_return(int p) {
    return p + 1;
}

int main(void) {
    int a = 5, *pa = &a;
    
    std::cout << "valor a: " << a << std::endl;

    incrementar_int_referencia(a);
    std::cout << "valor a: " << a << std::endl;

    incrementar_int_puntero(pa);
    std::cout << "valor a: " << a << std::endl;

    a = incrementar_int_return(a);
    std::cout << "valor a: " << a << std::endl;
}