#include <iostream>
#include <vector>
using namespace std;

struct CarInfo {
  int number;
  string name;
  bool injured;
  string typeOfInjure;
};

int main() {
  int count = 0;
  int n = 2;
  vector<CarInfo> cars(n);
  
  cars[0].number = 001;
  cars[0].name = "Kekwders";
  cars[0].injured = true;
  cars[0].typeOfInjure = "engine is dead";

  cars[1].number = 002;
  cars[1].name = "McKeeken";
  cars[1].injured = false;

  for (int i=0; i<cars.size(); i++) {
    if (cars[i].injured == true){
      count++;
      cout <<"Type of injure: " << cars[i].typeOfInjure << "\n";
      cout <<"Car's number: " << cars[i].number << "\n";
      cout <<"Car's name: " << cars[i].name << "\n";
    }
  }

  if (count == 0) { 
    cout<< "All cars are good";
  }
}
 
