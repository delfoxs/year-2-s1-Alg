#include "ReduceGeneric.h"

int ReduceGeneric::reduce(const std::vector<int>& numbers) {
    if (numbers.size() == 2) {
        return binaryOperator(numbers[0], numbers[1]);
    }
    int lastElement = numbers.back();
    std::vector<int> subList(numbers.begin(), numbers.end() - 1);
    int reduced = reduce(subList);
    return binaryOperator(reduced, lastElement);
}
