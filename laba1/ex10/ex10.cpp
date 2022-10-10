#include <iostream>

using namespace std; 

int main() {
  int n;
  cout<<"Введите трехзначное число:";
  cin>>n;
  int start = n/100; //1
  int middle = n/10 %10;
  int end = n%10; //BSD3
  if (start==1 || middle==1||end==1){
    cout<<"num="<<2*n<<endl;
  } else {
    cout<<"num="<<n*n<<endl;
  }
}
