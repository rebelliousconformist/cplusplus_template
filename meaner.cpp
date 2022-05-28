#include "meaner.hpp"


float Meaner::meanOfFloats(){

    return (std::accumulate(std::begin(this->mNumbers),std::end(this->mNumbers),0.0)/(this->mNumbers.size()));
}

void Meaner::addNumbers(std::vector<float> &inNumbers) {
    this->mNumbers = inNumbers;
}
Meaner::Meaner(/* args */)
{
}

Meaner::~Meaner()
{
}
