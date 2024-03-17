//
// Created by Duygu Kaser on 17.03.2024.
//

#ifndef UNTITLED2_MANAGER_H
#define UNTITLED2_MANAGER_H


#include <iostream>
#include "Spaceship.h"
#include <memory>

class Spaceship;
int  RandomNumberGenerator(int start,int end);
std::shared_ptr<Spaceship> getSelectedShip();
void RandomEventGenerator(std::shared_ptr<Spaceship>Ship);
void ScoreCalculator();



#endif //UNTITLED2_MANAGER_H
