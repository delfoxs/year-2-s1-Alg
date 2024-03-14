#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {
public:
    virtual int binaryOperator(int x, int y) = 0;
    int reduce(const std::vector<int>& numbers);
};

#endif
