#include <iostream>
#include <ostream>
#include <sys/types.h>

int main() {
  u_int c0;
  int step = 0;
  std::cout << "Введите любое неотрицательное число больше нуля\n";
  std::cin >> c0;
  if (c0 <= 0) {
    std::cout << "Вы ввели неверное значение";
  }
  while (c0 != 1) {
    if (c0 % 2 == 0) {
      c0 = c0 / 2;
    } else {
      c0 = 3 * c0 + 1;
    }
    std::cout << c0 << std::endl;
    step++;
  }
  std::cout << "steps:" << step << std::endl;
}
