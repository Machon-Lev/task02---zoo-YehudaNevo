#include <iostream>
#include <memory>
#include "Zoo.h"
#include "Lion.h"
#include "Monkey.h"
#include "Goose.h"

int main() {
    Zoo zoo;

    std::shared_ptr<Animal> lion1 = std::make_shared<Lion>("Simba", Location{5, 5});
    std::shared_ptr<Animal> monkey1 = std::make_shared<Monkey>("Rafiki", Location{10, 10});
    std::shared_ptr<Animal> goose1 = std::make_shared<Goose>("Akka", Location{15, 15});

    zoo.addAnimal(lion1);
    zoo.addAnimal(monkey1);
    zoo.addAnimal(goose1);

    std::cout << "Initial state of the zoo:" << std::endl;
    zoo.printZoo();

    for (int i = 0; i < 10; ++i) {
        std::cout << "Zoo state after " << (i + 1) << " steps:" << std::endl;
        for (const auto& animal : {lion1, monkey1, goose1}) {
            animal->step();
        }
        zoo.printZoo();
    }

    return 0;
}
