#pragma once
#include <iostream>
using namespace std;


class Spaceship {
public:
    Spaceship() = default;
    Spaceship(int _flee, int _dT) : flee_posibility{ _flee }, dT{ _dT } {};

    inline float getHp() const {
        return Hp;
    }
    inline int getFuel() const {
        return fuel;
    }
    inline int getCash() const {
        return cash;
    }
    inline void setHealth(float _newHp) {
        Hp = _newHp;
    }
    inline void setFuel(int _newFuel) {
        fuel = _newFuel;
    }
    inline void setMoney(int _newCash) {
        cash = _newCash;
    }
    inline float getDamagePossibility() const {
        return dT;
    }
    inline int getEscapePossibility() const {
        return flee_posibility;
    }
    virtual void status() = 0;

protected:
    float Hp{ 100 };
    int fuel{ 100 };
    int cash{ 0 };
    float dT{ 0 };
    int flee_posibility{ 0 };
};
