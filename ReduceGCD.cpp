#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y) {
    if (x == 0)
        return y;
    return binaryOperator(y % x, x);
}
