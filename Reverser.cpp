#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; // Invalid input
    if (value < 10) return value; // Single digit number
    return reverseDigitHelper(value, 0);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return ""; // Empty string
    return reverseStringHelper(characters, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) return reversed;
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

std::string Reverser::reverseStringHelper(std::string characters, size_t index) {
    if (index == characters.size()) return "";
    return reverseStringHelper(characters, index + 1) + characters[index];
}
