//
// Created by yehuda nevo on 22/04/2023.
//

#ifndef HW_ZOO_LION_H
#define HW_ZOO_LION_H


#include "Animal.h"

class Lion : public Animal {
public:
    Lion(const std::string &name, const Location &location);

    char getInitial() const override;

    void step() override;

private:
    enum Direction {
        LEFT, RIGHT
    };
    Direction direction;
};


#endif //HW_ZOO_LION_H
