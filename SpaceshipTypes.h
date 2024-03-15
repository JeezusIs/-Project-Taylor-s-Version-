#pragma once
#include <iostream>
#include "Spaceship.h"

class FastShip :public Spaceship {
public:
    FastShip(int _flee, float _dT) : Spaceship(_flee, _dT) {};

    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};


class PowerfulShip :public Spaceship {
public:
    PowerfulShip(int _flee, float _dT) : Spaceship(_flee, _dT) {};

    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};


class BalancedShip :public Spaceship {
public:
    BalancedShip(int _flee, float _dT) : Spaceship(_flee, _dT) {};

    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};
