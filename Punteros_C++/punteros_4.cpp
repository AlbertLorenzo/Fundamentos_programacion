#include <iostream>

int main(void) {
    int a = 5, *ptr_a = &a, *ptr_b = ptr_a;

    std::cout << (void*)ptr_a << std::endl;
    std::cout << (void*)ptr_b << std::endl;
}