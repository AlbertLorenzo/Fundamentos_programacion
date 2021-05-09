#include <iostream>

using namespace std;

int main() {
  // La forma correcta de inicializar un puntero no es asignarle una dirección
  // “a pelo”, sino darle la dirección de otra variable preexistente, o de una
  // zona libre en el heap.

  char variable;
  char *puntero;

  // La dirección guardada en puntero es la dirección de variable.
  // Cuando modificamos esa dirección estamos modificando el valor de variable.
  puntero = &variable;
  *puntero = 'a';

  std::cout << "Direccion de memoria de la variable "
            << " : " << static_cast<void *>(puntero)
            << " Contenido de la variable : " << variable << std::endl;

  std::cin.get();
  return 0;
}