#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vect = {1, 0, -9, 12, -1, -3, 0, 1, 6, 9, 0, 0, 100};
  int len = vect.size();
  int temp;

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      if (vect[j] < 0) {
        temp = vect[j];
        vect[j] = vect[j + 1];
        vect[j + 1] = temp;
      }
      if (vect[j] < 1) {
        temp = vect[j];
        vect[j] = vect[j + 1];
        vect[j + 1] = temp;
      }
    }
  }

  for (int i = len - 1; i >= 0; i--) {
    cout << vect[i] << ' ';
  }
  cout << endl;
}
