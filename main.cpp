#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
#include "EfficientTruckloads.h"

int main() {
    Truckloads truckloads;
    std::cout << "Trucks needed: " << truckloads.numTrucks(14, 3) << std::endl;

    Reverser reverser;
    std::cout << "Reversed digit: " << reverser.reverseDigit(12345) << std::endl;
    std::cout << "Reversed string: " << reverser.reverseString("Hello") << std::endl;

    EfficientTruckloads efficientTruckloads;
    std::cout << "Efficient trucks needed: " << efficientTruckloads.numTrucks(14, 3) << std::endl;

    return 0;
}
