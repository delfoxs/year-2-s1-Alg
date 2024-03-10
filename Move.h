#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getName() = 0;
    virtual ~Move() {}
};

class Rock : public Move {
public:
    std::string getName() override;
};

class Paper : public Move {
public:
    std::string getName() override;
};

class Scissors : public Move {
public:
    std::string getName() override;
};

class Monkey : public Move {
public:
    std::string getName() override;
};

class Robot : public Move {
public:
    std::string getName() override;
};

class Pirate : public Move {
public:
    std::string getName() override;
};

class Ninja : public Move {
public:
    std::string getName() override;
};

class Zombie : public Move {
public:
    std::string getName() override;
};

#endif
