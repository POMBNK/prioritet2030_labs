#include <iostream>

int main() {
  unsigned int v; // count the number of bits set in v
  unsigned int c; // c accumulates the total bits set in v
  std::cout<<"Введите число";
  std::cout<<">>>";
  std::cin >>v;  
  for (c = 0; v; c++){
    v &= v - 1; // clear the least significant bit set
  }
  std::cout<<"Количество единиц:"<<c<<std::endl;
}
