#include <iostream>
#include <vector>

using namespace std;

<<<<<<< HEAD
=======
void outvector(int vector[7]) {
  // Вывод массива
  for (int i = 0; i < 7; i++) {
    cout << vector[i] << ' ';
  }
  cout << endl;
}
// переделать.
>>>>>>> 049d78f18860ebd5be6695dc19bfdadd9ff73639
int main() {
  const int n = 7;
  int vector1[n] = {4, 7, 2, 8, 1, 3, 0};
  int vector2[n];
<<<<<<< HEAD
  int temp;
  int count;
  cin >> count;
  int k = 0;

  while (k < count) {
    temp = vector1[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      vector1[i + 1] = vector1[i];
    }
    vector1[0] = temp;
    // for (int j = 0; j < n; j++) {
    //    vector1[j] = vector2[j];
    //    }
    k++;
  }

  for (int i = 0; i < n; i++) {
    cout << vector1[i] << ' ';
  }
  cout << endl;
}
=======
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

>>>>>>> 049d78f18860ebd5be6695dc19bfdadd9ff73639
