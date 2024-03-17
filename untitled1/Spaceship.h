//
// Created by Duygu Kaser on 13.03.2024.
//

#ifndef UNTITLED1_SPACESHIP_H
#define UNTITLED1_SPACESHIP_H

#include <iostream>
#include "functions.h"


class Spaceship {
public:
    Spaceship() = default;
    Spaceship(int _flee, float _damageMultiplier) : flee_posibility{ _flee }, damageMultiplier{ _damageMultiplier } {};

    inline float getHp() const {
        return Hp;
    }
    inline int getFuel() const {
        return fuel;
    }
    inline int getCash() const {
        return cash;
    }
    inline void setHp(float _newHp) {
        Hp = _newHp;
    }
    inline void setFuel(int _newFuel) {
        fuel = _newFuel;
    }
    inline void setCash(int _newCash) {
        cash = _newCash;
    }
    inline float getDamageMultiplier() const {
        return damageMultiplier;
    }
    inline int getEscapePossibility() const {
        return flee_posibility;
    }

    virtual void status();


protected:
    float Hp{ 100 };
    int fuel{ 100 };
    int cash{ 0 };
    float damageMultiplier{ 0 };
    int flee_posibility{ 0 };
};
#endif //UNTITLED1_SPACESHIP_H
