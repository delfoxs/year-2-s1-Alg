#include "Human.h"
#include <iostream>
#include "Move.h"

Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter move: ";
    std::cin >> moveName;

    if (moveName == "Rock")
        return new Rock();
    else if (moveName == "Paper")
        return new Paper();
    else if (moveName == "Scissors")
        return new Scissors();
    else if (moveName == "Monkey")
        return new Monkey();
    else if (moveName == "Robot")
        return new Robot();
    else if (moveName == "Pirate")
        return new Pirate();
    else if (moveName == "Ninja")
        return new Ninja();
    else if (moveName == "Zombie")
        return new Zombie();
    else {
        std::cerr << "Invalid move! Defaulting to Rock." << std::endl;
        return new Rock();
    }
}

std::string Human::getName() {
    return name;
}
