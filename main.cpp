#include <iostream>
#include "meaner.hpp"

int main(int, char**) {
    std::cout << "Hello, world!\n";

    std::vector<float> floaters;
    floaters.push_back(2.3);
    floaters.push_back(3.3);
    floaters.push_back(8.3);
    floaters.push_back(5.3);

    Meaner m;
    m.addNumbers(floaters);

    std::cout << "mean is " << m.meanOfFloats() << "\n";
}
