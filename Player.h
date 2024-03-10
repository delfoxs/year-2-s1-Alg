#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Move;

class Player {
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
    virtual ~Player() {}
};

#endif
