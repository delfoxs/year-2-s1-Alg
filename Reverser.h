#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);
private:
    int reverseDigitHelper(int value, int reversed);
    std::string reverseStringHelper(std::string characters, size_t index);
};

#endif
