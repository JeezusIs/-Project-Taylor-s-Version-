#include <iostream>
#include <random>
#include <memory>
#include"functions.h"
#include "Spaceship.h"
#include "SpaceshipTypes.h"
#include "Event.h"

class Spaceship;
class PowerfulShip;
class BalancedShip;
class FastShip;

int RandomNumberGenerator(int start, int end) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distribution(start,end);

    int random_number = distribution(gen);
    return random_number;
}

std::shared_ptr<Spaceship>getSelectedShip() {
    int shipSelector{0};
    std::cout << "Please select your ship type. \n";
    std::cout << "1-Balanced ship\n";
    std::cout << "2-Fast ship\n";
    std::cout << "3-Powerful ship\n";
    std::cin >> shipSelector;

    if (shipSelector == 1) {
        return std::make_shared<BalancedShip>(50, 1);
    }
    else if (shipSelector == 2) {
        return std::make_shared<FastShip>(75, 1.5);
    }
    else if (shipSelector == 3) {
        return std::make_shared<PowerfulShip>(25, 0.5);
    }
    else {
        std::cout << "Please select a valid number.\n";
        return nullptr;
    }

}

void RandomEventGenerator() {
    std::shared_ptr<Spaceship> getSelectedShip = nullptr;
    getSelectedShip->status();
    int eventCounter{0}, eventFirst{1}, eventLast{3}, totalEvent{5};
    do {
        int eventNumber = RandomNumberGenerator(eventFirst, eventLast);
        if(eventNumber==1){
                ++eventCounter;
                events MyEvent;
                MyEvent.AstreoidBelt();
                getSelectedShip->status();
        }
        else if(eventNumber==2){
                ++eventCounter;
                events my_event;
                my_event.AbondenedPlanet();
                getSelectedShip->status();
        }
        else if(eventNumber==3){
                ++eventCounter;
                events myEvent;
                myEvent.SpacePirates();
                getSelectedShip->status();
        }

        if (getSelectedShip->getFuel() <= 1) {
            std::cout << "Low fuel! GAME OVER...\n";
            break;
        } else if (getSelectedShip->getHp() <= 1) {
            std::cout << "Low health! GAME OVER...\n";
        }
    } while (eventCounter < totalEvent);
    {
        if (eventCounter == totalEvent) {
            std::cout << "Congrats, you've finished the game!\n";
        }
    }
}

void ScoreCalculator() {
    std::shared_ptr<Spaceship> selectedShip = nullptr;
    int healthMultiplier{ 10 }, fuelMultiplier{ 5 }, cashMultiplier{ 10 };
    float endGameScore;
    endGameScore = (selectedShip->getHp() * healthMultiplier) + (selectedShip->getFuel() * fuelMultiplier) + (selectedShip->getCash() * cashMultiplier);
    std::cout<<"Your Score is"<<endGameScore;

}
