//
// Created by yehuda nevo on 22/04/2023.
//

#include "Goose.h"


Goose::Goose(const std::string &name, const Location &location)
        : Animal(name, location), direction(UP), side(LEFT), isSwinging(true) {}

char Goose::getInitial() const {
    return 'G';
}

void Goose::step() {
    if (!isMoving) {
        return;
    }

    // Move forward
    if (direction == UP) {
        location.row--;
        if (location.row <= 0) {
            location.row = 0;
            direction = DOWN;
        }
    } else {
        location.row++;
        if (location.row >= 19) {
            location.row = 19;
            direction = UP;
        }
    }

    // Swing to the side
    if (isSwinging) {
        if (side == LEFT) {
            location.col--;
            if (location.col <= 0) {
                location.col = 0;
                side = RIGHT;
            }
        } else {
            location.col++;
            if (location.col >= 39) {
                location.col = 39;
                side = LEFT;
            }
        }
    }

    // Toggle swinging state
    isSwinging = !isSwinging;
}
