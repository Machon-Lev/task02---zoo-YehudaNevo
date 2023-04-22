//
// Created by yehuda nevo on 22/04/2023.
//

#include "Zoo.h"
#include <iostream>

Zoo::Zoo() {

    for (auto & row : zooBoard) {
        for (char & col : row) {
            col = '.';
        }
    }
}

void Zoo::addAnimal(const std::shared_ptr<Animal> &animal) {
    animals.push_back(animal);
}

void Zoo::removeAnimal(int index) {
    if (index >= 0 && index < animals.size()) {
        animals.erase(animals.begin() + index);
    }
}

void Zoo::printZoo() const {
    for (const auto &animal: animals) {
        Location loc = animal->getLocation();
        zooBoard[loc.row][loc.col] = animal->getInitial();
    }

    for (auto & row : zooBoard) {
        for (char col : row) {
            std::cout << col;
        }
        std::cout << std::endl;
    }

    for (const auto &animal: animals) {
        Location loc = animal->getLocation();
        zooBoard[loc.row][loc.col] = '.';
    }
}

std::shared_ptr<Animal> Zoo::getAnimal(int index) const {
    if (index >= 0 && index < animals.size()) {
        return animals[index];
    }
    return nullptr;
}
