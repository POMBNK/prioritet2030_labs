#include <iostream>
#include <vector>

using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

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


int dayOfYear(Date date) {
  int totalSum = 0;
  int i;
  for (i=0; i<date.month; i++) {
    totalSum+=monthLength(date.year,date.month-i);
    cout<<date.month-i<<endl;
  }
  return totalSum;
}


int main() {
  Date d;
  cout << "Enter year, month, day: ";
  cin >> d.year >> d.month >> d.day;
  cout<< dayOfYear(d)<<endl;
}





