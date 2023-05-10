//
// Created by yehuda nevo on 22/04/2023.
//

#include "Animal.h"
#include <iostream>
#include <utility>

Animal::Animal(std::string  name, const Location& location)
        : name(std::move(name)), location(location), isMoving(true) {}

void Animal::printDetails() const {
    std::cout << "Name: " << name << ", Type: " << getInitial() << ", Location: (" << location.row << ", " << location.col << ")\n";
}

Location Animal::getLocation() const {
    return location;
}

void Animal::stop() {
    isMoving = false;
}

void Animal::move() {
    isMoving = true;
}

void Animal::turnVertically() {
    // Default implementation does nothing.
}

void Animal::turnHorizontally() {
    // Default implementation does nothing.
}

