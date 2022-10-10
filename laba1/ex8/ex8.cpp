#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main() {
  int n = 4;
  int num;
  int res;
  vector<int> arr(4);
  
  cout<<"Введите 4 числа. Три из них должны быть равными, одно отличное\n";
  //Запись в массив
  for (int i=0; i<n; i++) {
    cin>>num;
    arr[i]=num;
  }
  int len = arr.size();
  //Проверка чисел
  for (int i=0; i<len; i++) {
    for (int j=0; j<len; j++) {
      if (arr[j]!=arr[i]) {
        res = arr[j];
        break;
      }
    } 
  }
  cout<<"Отличное от остальных число: "<<res<<endl;
}
