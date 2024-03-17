#ifndef UNTITLED2_EVENT_H
#define UNTITLED2_EVENT_H
#include <iostream>
#include "Spaceship.h"
#include "Manager.h"

class events {
private:
    std::shared_ptr<Spaceship> selectedShip;
public:
    void setSpaceship(std::shared_ptr<Spaceship> Ship){
        selectedShip=Ship;
    }
    void AstreoidBelt();
    void AbondenedPlanet();
    void SpacePirates();
};
#endif //UNTITLED2_EVENT_H
