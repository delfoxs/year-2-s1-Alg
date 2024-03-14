#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric {
public:
    int binaryOperator(int x, int y) override;
};

#endif
