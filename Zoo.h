
//
// Created by yehuda nevo on 22/04/2023.
//

#ifndef HW_ZOO_ZOO_H
#define HW_ZOO_ZOO_H


#include <vector>
#include <memory>
#include "Animal.h"
#include "Lion.h"
#include "Monkey.h"
#include "Goose.h"

class Zoo {
public:
    Zoo();

    void addAnimal(const std::shared_ptr<Animal> &animal);

    void removeAnimal(int index);

    void printZoo() const;

    std::shared_ptr<Animal> getAnimal(int index) const;

private:
    std::vector<std::shared_ptr<Animal>> animals;
    mutable char zooBoard[20][40]{};
};


#endif //HW_ZOO_ZOO_H
