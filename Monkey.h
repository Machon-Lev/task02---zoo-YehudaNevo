
//
// Created by yehuda nevo on 22/04/2023.
//

#ifndef HW_ZOO_MONKEY_H
#define HW_ZOO_MONKEY_H


#include "Animal.h"
#include <cstdlib>
#include <ctime>

class Monkey : public Animal {
public:
    Monkey(const std::string &name, const Location &location);

    char getInitial() const override;

    void step() override;

private:
    enum Direction {
        UP, DOWN, LEFT, RIGHT
    };
    Direction direction;
    int stepsTaken;
    int stepSize;
};


#endif //HW_ZOO_MONKEY_H
