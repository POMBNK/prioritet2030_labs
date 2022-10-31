#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> g = {{1, 1, 5, 1}, {2, 2, 2, 5}, {10, 9, 4, 99}};
  int len = g.size();
  int max = g[0][0];

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len + 1; j++) {
      if (max < g[i][j]) {
        max = g[i][j];
      }
    }
  cout << max << endl;
  }
}
