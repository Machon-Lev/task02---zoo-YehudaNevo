//
// Created by yehuda nevo on 22/04/2023.
//

#include "Monkey.h"


Monkey::Monkey(const std::string &name, const Location &location)
        : Animal(name, location), stepsTaken(0), stepSize(1) {
    std::srand(std::time(0));
    direction = static_cast<Direction>(std::rand() % 4);
}

char Monkey::getInitial() const {
    return 'M';
}

void Monkey::step() {
    if (!isMoving) {
        return;
    }

    if (stepsTaken % 5 == 0) {
        stepSize = (std::rand() % 2) + 1;
        direction = static_cast<Direction>(std::rand() % 4);
    }

    switch (direction) {
        case UP:
            location.row -= stepSize;
            break;
        case DOWN:
            location.row += stepSize;
            break;
        case LEFT:
            location.col -= stepSize;
            break;
        case RIGHT:
            location.col += stepSize;
            break;
    }

    // Make sure the monkey stays within the boundaries of the zoo
    if (location.row < 0) location.row = 0;
    if (location.row > 19) location.row = 19;
    if (location.col < 0) location.col = 0;
    if (location.col > 39) location.col = 39;

    stepsTaken++;
}
