#include <iostream>

int main(void) {
    int a = 3;
    int *pa = &a;
    int &ra = a;

    int primer_byte_ref = (ra >> (8*0));
    int primer_byte_ptr = ((*pa) >> (8*0)) & 0xff;
    int primer_byte = (a >> (8*0)) & 0xff;

    std::cout << primer_byte_ref << std::endl;
    std::cout << primer_byte_ptr << std::endl;
    std::cout << primer_byte << std::endl;
    return 0;
}