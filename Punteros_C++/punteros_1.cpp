#include <iostream>

using namespace std;

int main() {
  float num = 55.7;
  float *ptrNum = &num;  // Puntero para la variable num

  cout << "Valor de la variable num: " << num << endl;
  cout << "Direccion de la variable num: " << &num << endl;
  cout << "Valor de lo que hay almacenado en la direccion de memoria " << ptrNum
       << " : " << *ptrNum << endl;

  // Cambiar valor de num mediante puntero:
  *ptrNum = 288.88;
  cout << "Valor de la variable num: " << num << endl;

  // Cambiar valor de num:
  num = 388.88;
  cout << "Contenido del puntero: " << *ptrNum << endl;

  std::cin.get();
  return 0;
}