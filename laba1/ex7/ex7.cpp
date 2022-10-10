#include <iostream>

int main() {
  int a, b, x;
  std::cout << "Введите длину первой стороны четырехугольника (а):";
  std::cin >> a;
  std::cout << "Введите длину второй стороны четырехугольника (b):";
  std::cin >> b;
  std::cout << "Введите угол между сторонами чырехугольника (alpha):";
  std::cin >> x;

  if (a == b) {
    if (x != 90) {
      std::cout << "Равносторонний ромб\n";
    } else {
      std::cout << "Квадрат\n";
    }
  } else {
    if (x != 90) {
      std::cout << "Ромб\n";
    } else {
      std::cout << "Прямоугольник\n";
    }
  }
}
