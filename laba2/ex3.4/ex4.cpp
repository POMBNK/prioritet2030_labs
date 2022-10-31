#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> vect = {{1, 3, 5, 6}, {6, 7, 5, 2}, {4, 8, 1, 2}};
  int len = vect.size();
  int count1 = 0;
  int count2 = 0;

  for (int i = 1; i < len; i++) {
    count1 = count2;
    for (int j = 0; j < len + 1; j++) {
      if (vect[i][j] % 2 == 0 && vect[i][j] > 0) {
        count2++;
      }
    }
    if (count2 > count1) {
      swap(vect[i - 1], vect[i]);
    }
  }

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len + 1; j++) {
      cout << vect[i][j] << ' ';
    }
    cout << endl;
  }
}
