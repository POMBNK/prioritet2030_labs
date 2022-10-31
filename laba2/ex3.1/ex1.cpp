#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> g={1,-2,4,-5,6,-3,9};
  int len = g.size();
  int avg_pos = 0;
  int avg_neg = 0;

  for (int i=0; i<len; i++) {
    if(g[i]>=0){
      avg_pos+=g[i];
    } else {
      avg_neg += g[i];
    }
  }
  cout<<(float)avg_pos/2<<endl;
  cout<<(float)avg_neg/2<<endl;
}
