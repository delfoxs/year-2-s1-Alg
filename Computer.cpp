#include "Computer.h"
#include "Move.h"

Move* Computer::makeMove() {
    return new Rock();
}

std::string Computer::getName() {
    return "Computer";
}
