#include <iostream>

int main() {
  int n = 0;
  float a = 1;

  std::cout << "Введите число иттераций подсчета числа pi" << std::endl;
  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      a += 1.f / (float)(2 * i + 1);
    } else {
      a -= 1.f / (float)(2 * i + 1);
    }
  }
  std::cout << "Pi:" << 4 * a << std::endl;
}
