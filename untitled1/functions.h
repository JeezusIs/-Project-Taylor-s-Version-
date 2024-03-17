//
// Created by Duygu Kaser on 16.03.2024.
//

#ifndef UNTITLED1_FUNCTIONS_H
#define UNTITLED1_FUNCTIONS_H

#include <iostream>
#include "Spaceship.h"
#include "SpaceshipTypes.h"
#include <memory>

class Spaceship;
std::shared_ptr<Spaceship> getSelectedShip();
void RandomEventGenerator();
void ScoreCalculator();

#endif //UNTITLED1_FUNCTIONS_H
