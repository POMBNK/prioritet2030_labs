#include <iostream>
#include <iomanip>
#include <string>

int main(){
  float v=2;
  float result = (v+1)*2;
  std::cout<<"result:"<<result<<" exepected result:6"<<std::endl;
  
  result = (v+1)*v+2*2;
  std::cout<<"result:"<<result<<" exepected result:24"<<std::endl;
 
  result = (v-1)*v+2*2;
  std::cout<<"result:"<<result<<" exepected result:6"<<std::endl;
  
  result = (v+v)*(v+v)*2;
  std::cout<<"result:"<<result<<" exepected result:32"<<std::endl;

  result = ((int)v%2)*(v+2*2);
  std::cout<<"result:"<<result<<" exepected result:0"<<std::endl;

}
