
//
// Created by yehuda nevo on 22/04/2023.
//

#include "Lion.h"


#include "Lion.h"

Lion::Lion(const std::string& name, const Location& location)
        : Animal(name, location), direction(RIGHT) {}

char Lion::getInitial() const {
    return 'L';
}

void Lion::step() {
    if (!isMoving) {
        return;
    }

    if (direction == RIGHT) {
        location.col += 2;
        if (location.col >= 39) {
            location.col = 39;
            direction = LEFT;
        }
    } else {
        location.col -= 2;
        if (location.col <= 0) {
            location.col = 0;
            direction = RIGHT;
        }
    }
}
