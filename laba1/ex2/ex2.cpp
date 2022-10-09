#include <iostream>

int main() {
  int year; 
  std::cout<<"write input data (year)\n";
  std::cin>>year;
float a = year%19;
  std::cout<<"a: "<<a<<std::endl;

  float b = year%4;
  std::cout<<"b: "<<b<<std::endl;
  float c = year%7;
  std::cout<<"c: "<<c<<std::endl;


  float d = (int)(19*a+24)%30;
  float e = (int)(2*b+4*c+6*d+5)%7;
  float res = d+e;
  if (res <10) {
    std::cout<<"March "<<res+22<<std::endl;
  } else {
    std::cout<<"April "<<res-9<<std::endl;
  }
}

