#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int vector[] = {3,-5,7,10,-4,14,5,2,-13};
  int n = sizeof(vector)/sizeof(vector[0]);
  int min = *vector;


  for (int i=0; i<n; i++) {
    if (min > *(vector+i)){
      min = *(vector+i);
    }
  }

  printf("Minimum num is %d\n",min);
}
