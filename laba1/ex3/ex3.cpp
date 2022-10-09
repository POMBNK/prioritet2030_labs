#include <iostream>
#include <sys/types.h>

int main() {
  u_int c0;
  std::cout<<"Введите любое неотрицательное число больше нуля";
  std::cin>>c0;
  if (c0 <= 0) {
    std::cout<<"Вы ввели неверное значение";
  }
  if (c0%2==0) {
    c0 = c0/2; 
  } else {
    c0 = 3*c0+1;
  }
}
