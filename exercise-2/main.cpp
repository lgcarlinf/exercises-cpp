#include <iostream>

int main(){
  char character;
  int number;
  double decimal;

  std::cout << "Ingrese un solo caracter: ";
  std::cin >> character;
  std::cout << "Ingrese un numero entero: ";
  std::cin >> number;
  std::cout << "Ingrese un numero decimal: ";
  std::cin >> decimal;

  std::cout << character << "\n" << number<< "\n" << decimal<<"\n";

  return 0;

}
