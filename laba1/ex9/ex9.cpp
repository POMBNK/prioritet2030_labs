#include <iostream>

using namespace std;
int main() {
  int n;
  bool res;
  cout<<"Введите четырехзначное число:";
  cin>>n;
  int first = n/1000;
  int second = n/100 %100%10;
  int third = n/10%10;
  int fourth = n%1000%100%10;
  cout<<"Равна ли сумма первых двух и последних двух цифр?\n";
  if ((first+second)==(third+fourth)){
    cout<<"True\n";
  } else {
    cout<<"False\n";
  }
  cout<<"Кратна ли трем сумма его цифр?\n";
  if ((first+second+third+fourth)%3==0){
    cout<<"True\n";
  } else {
    cout<<"False\n";
  }
  cout<<"Кратно ли произведение его цифр числу А?\n";
  cout<<"Введите число А?\n";
  int a;
  cin>>a;
  if ((first*second*third*fourth)%a==0){
    cout<<"True\n";
  } else {
    cout<<"False\n";
  }
}
