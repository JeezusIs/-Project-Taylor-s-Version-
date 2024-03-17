#include <iostream>
#include "Event.h"
#include "Spaceship.h"
#include "functions.h"

int main() {
    std::cout << "Welcome to Space Voyager.\n";
    getSelectedShip();
    RandomEventGenerator();
    return 0;
}