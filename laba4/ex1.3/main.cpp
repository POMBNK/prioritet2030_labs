#include <iostream>

using namespace std;

bool isLeap(int year){
  if ((year%4 ==0 )||(year%4==0 && year%100!=0)){
    return true;
  } else {
    return false;
  }
}

int main() {
  for (int year = 1995; year<2025; year++) {
    cout << year<<"-->"<<isLeap(year)<<endl;
  }
}
