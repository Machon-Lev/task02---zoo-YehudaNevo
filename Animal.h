//
// Created by Yehuda nevo on 22/04/2023.
//

#ifndef HW_ZOO_ANIMAL_H
#define HW_ZOO_ANIMAL_H


#include <string>

struct Location {
    int row;
    int col;
};

class Animal {
public:
    Animal(std::string name, const Location &location);

    virtual void printDetails() const;

    virtual char getInitial() const = 0;

    Location getLocation() const;

    virtual void step() = 0;

    virtual void stop();

    virtual void move();

    virtual void turnVertically();

    virtual void turnHorizontally();

protected:
    std::string name;
    Location location;
    bool isMoving;
};


#endif //HW_ZOO_ANIMAL_H
