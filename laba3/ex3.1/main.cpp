#include <iostream>
#include <vector>
using namespace std;

struct Good {
  int count;
  double price;
  double weight;
  string name;
};

struct Car {
  double capacity;
};

int main() {
  // TYPES
  int maxWeight = 200.0; // max truck capacity
  int n = 3;             // count of types
  double maxProfit = 0.0;
  int goods_id;
  // List of goods
  vector<Good> goods(n);
  Car Car;
  Car.capacity = maxWeight;
  // Fill struct
  goods[0].count = 60;
  goods[0].price = 300;
  goods[0].weight = 3;
  goods[0].name = "meat";

  goods[1].count = 10;
  goods[1].price = 10;
  goods[1].weight = 10;
  goods[1].name = "bread";

  goods[2].count = 3;
  goods[2].price = 1;
  goods[2].weight = 300;
  goods[2].name = "memi";

  // main cycle
  for (int i = 0; i < goods.size(); i++) {
    if (goods[i].weight * goods[i].count <= Car.capacity) {
      if (maxProfit < goods[i].count * goods[i].price) {
        maxProfit = goods[i].count * goods[i].price;
        goods_id = i;
      }
    } else {
      std::cout << goods[i].name << " not a good choice. Cant stack in truck\n";
    }
  }
  std::cout << "Most valuable choice: " << goods[goods_id].name << "\n";
  std::cout << "The count of goods: " << goods[goods_id].count << "\n";
  std::cout << "The weight of goods: " << goods[goods_id].count * goods[goods_id].weight << "\n";
  std::cout << "The price of all goods in truck: " << maxProfit << "\n";
}
