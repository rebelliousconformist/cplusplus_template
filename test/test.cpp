#include "../meaner.hpp"


int main(){

std::vector<float> floats;
    floats.push_back(2.0);
    floats.push_back(2.0);
    floats.push_back(3.0);
    floats.push_back(8.0);
    floats.push_back(5.0);

    Meaner m;
    m.addNumbers(floats);

  if (m.meanOfFloats() == 4.0){
    return 0;
  }
  else
  {return 1;}

}