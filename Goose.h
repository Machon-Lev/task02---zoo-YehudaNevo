
//
// Created by yehuda nevo on 22/04/2023.
//

#ifndef HW_ZOO_GOOSE_H
#define HW_ZOO_GOOSE_H


#include "Animal.h"

class Goose : public Animal {
public:
    Goose(const std::string &name, const Location &location);

    char getInitial() const override;

    void step() override;

private:
    enum Direction {
        UP, DOWN
    };
    enum Side {
        LEFT, RIGHT
    };

    Direction direction;
    Side side;
    bool isSwinging;
};


#endif //HW_ZOO_GOOSE_H
