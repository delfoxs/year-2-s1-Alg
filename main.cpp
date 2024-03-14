#include <iostream>
#include <vector>
#include <sstream>
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

std::vector<int> parseInput(const std::string& input) {
    std::vector<int> numbers;
    std::stringstream ss(input);
    std::string token;
    while (getline(ss, token, ',')) {
        numbers.push_back(std::stoi(token));
    }
    return numbers;
}

std::string formatOutput(int min, int gcd) {
    return std::to_string(min) + " " + std::to_string(gcd);
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> numbers = parseInput(input);
    
    ReduceMinimum reduceMin;
    ReduceGCD reduceGcd;
    
    std::vector<int> transformed = reduceMin.reduce(numbers);
    std::vector<int> filtered = reduceMin.reduce(transformed);
    
    int min = reduceMin.reduce(filtered);
    int gcd = reduceGcd.reduce(filtered);
    
    std::cout << formatOutput(min, gcd) << std::endl;
    
    return 0;
}
