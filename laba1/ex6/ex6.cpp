#include <iostream>
#include <ostream>

int main() {
  int n;
  std::cout<<"Введите трехзначное число:\n";
  std::cin>>n;
  if (n<100 || n>999) {
    std::cout<<"Ввели неверное число";
  }
  int start = n/100; //1
  int middle = n/10 %10;
  int end = n%10; //3
  if (start != end) {
    int res = start+middle*10+start*100;
    std::cout<<"Ближайший палиндром:"<<res<<std::endl;
  } else {
    std::cout<<"Это уже полином"<<std::endl;
  }
}

