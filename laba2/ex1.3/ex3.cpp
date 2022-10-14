#include <iostream>
#include <vector>

using namespace std;

int main() {
  const int n = 7;
  int vector1[n] = {4, 7, 2, 8, 1, 3, 0};
  int vector2[n];
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
