#include <iostream>
#include <vector>

using namespace std;

bool isLeap(int year){
  if ((year%4 ==0 )||(year%4==0 && year%100!=0)){
    return true;
  } else {
    return false;
  }
}

int monthLength(int year, int month) {
  vector<int> daysLength = {31,28,31,30,31,30,31,31,30,31,30,31};

  if (month > 12 || month<=0){
    return -1;
  }
  if (isLeap(year)) {
    if (month == 1) {
      return daysLength[month-1]+1;
    } else {
      return daysLength[month-1];
    }
  } else {
    return daysLength[month-1];
  }
}

int main() {
  cout<< monthLength(1995, 4)<<endl;
  cout<< monthLength(2020,2)<<endl;
}
