#include <iostream>

int main() {
  int n;
  std::cout << "Введите двузначное число\n";
  std::cin >> n;
  int res1 = n / 10; // 1
  int res2 = n % 10; // 2
  int res = res1 + res2;
  if (res >= 10 && res < 99) {
    std::cout << "Число двузначное\n";
  } else {
    std::cout << "До двузначного числа:" << 10 - res << " чисел" << std::endl;
  }
}
