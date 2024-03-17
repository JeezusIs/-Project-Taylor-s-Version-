//
// Created by Duygu Kaser on 16.03.2024.
//

#ifndef UNTITLED1_EVENT_H
#define UNTITLED1_EVENT_H
#include <iostream>
#include "SpaceshipTypes.h"
#include "functions.h"

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
#endif //UNTITLED1_EVENT_H
