#include <iostream>
#include <vector>

using namespace std;

void outvector(int vector[7]) {
  // Вывод массива
  for (int i = 0; i < 7; i++) {
    cout << vector[i] << ' ';
  }
  cout << endl;
}
// переделать.
int main() {
  const int n = 7;
  int vector1[n] = {4, 7, 2, 8, 1, 3, 0};
  int vector2[n];
  int k;
  cout << "Введите offset:";
  cin >> k;
  int t = vector1[n - 1];
  for (int count=0; count < k; count++) {
    for (int i = n - 1; i >= 0; i--) {
      vector1[i + 1] = vector1[i];
    }
  }
  vector1[0] = t;
  outvector(vector1);
}
// dano {4,7,2,8,1,3,0}
// k=1 => {0,4,7,2,8,1,3}
// k=2 => {3,0,4,7,2,8,1}
// vetor[i] = vector[i+1]
// if i = len(vector1)-1 => a = vector1[len(vector1)-1] =>

