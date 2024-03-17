//
// Created by Duygu Kaser on 17.03.2024.
//

//
// Created by Duygu Kaser on 16.03.2024.
//
#include "Event.h"
#include "Spaceship.h"
#include "Manager.h"

class Spaceship;
class FastShip;
class PowerfulShip;
class BalancedShip;


void events::AstreoidBelt(std::shared_ptr<Spaceship> selectedShip) {
    int possibility;
    int startOfRange=1;
    int endOfRange=2;
    possibility = RandomNumberGenerator(startOfRange,endOfRange);
    std::cout << "You're now entering a Astreoid Belt.\n";
    float damageTaken{0};
    float normalDmg{0};
    float totalDmg{0};

    if (possibility == 1) {
        std::cout << "Our ship has taken damage while passing the Astreoid belt.\n";
        damageTaken += normalDmg * selectedShip->getHp();
        totalDmg = normalDmg + damageTaken;
        selectedShip->setHp(selectedShip->getHp() - totalDmg);
    }
    else {
        std::cout << "We've successfully passed Asteroid belt without taking any damage.\n";
    }

};


void events::AbondenedPlanet(std::shared_ptr<Spaceship> selectedShip) {
    int posibility, i;
    int startOfRange=0;
    int endOfRange=2;
    posibility = RandomNumberGenerator(startOfRange,endOfRange);
    std::cout << "We've found a abondened planet\n";

    if (posibility == 0) {
        std::cout << "We've found a treausure\n";
        selectedShip->setCash(selectedShip->getCash() + 10);
    }
    if (posibility ==1) {
        std::cout << "Planet is completely abandoned.\n";
    }
    if (posibility == 2) {
        std::cout << "Good lord, we've encountered space pirates!\n";
    }
};

void events::SpacePirates(std::shared_ptr<Spaceship> selectedShip) {
    int posibility1, posibility2, dialogueOption;
    int IWantToFlee;

    float damageTaken{0};
    float normalDmg{30};
    float totalDmg{0};


    std::cout << "We've encountered space pirates.\n Pirate: Fool voyager in the search for meaning, emboldened by the sin of ambition. Thee shall not pass.\n";
    std::cout << "1-I believe we can settle this.(Pay tribute)\n2-...(Attack)\n3-...(Flee)\n";
    std::cin >> dialogueOption;


    if (dialogueOption == 1) {
        int tributePosibility;
        tributePosibility = RandomNumberGenerator(0,2);
        std::cout<<tributePosibility;
        switch (tributePosibility) {
            case 0:
                selectedShip->setCash(selectedShip->getCash() - 10);
                std::cout << "Pirates have taken 10 credits.\nPirates:We better not see you around here any time soon.\n";
                break;
            case 1:
                selectedShip->setCash(selectedShip->getCash() - 20);
                std::cout << "Pirates have taken 20 credits.\nPirates:We better not see you around here any time soon.\n";
                break;
            case 2:
                selectedShip->setCash(selectedShip->getCash() - 30);
                std::cout << "Pirates have taken 30 credits.\nPirates:We better not see you around here any time soon.\n";
                break;
        }
    }


    else if (dialogueOption == 2) {
        posibility2 = RandomNumberGenerator(0,1);
        switch (posibility2) {
            case 0:
                damageTaken += normalDmg * selectedShip->getHp();
                totalDmg = normalDmg + damageTaken;
                selectedShip->setHp(selectedShip->getHp() - totalDmg);
                std::cout << "We've lost the battle.\n";
                break;
            case 1:
                selectedShip->setCash(selectedShip->getCash() + 10);
                std::cout << "We've defeated those pirates.\n";
                break;
        }
    }


    else if (dialogueOption == 3) {
        if (selectedShip->getFuel() >= 33) {
            int fled = RandomNumberGenerator(0,100);
            if (fled < selectedShip->getEscapePossibility()) {
                std::cout << "We've escaped successfully.\n";
                selectedShip->setFuel(selectedShip->getFuel() - 33);
            }
            else {
                std::cout << "We've failed to flee.\n";selectedShip->setFuel(selectedShip->getFuel() - 33);
                events::SpacePirates(selectedShip);
            }
        }
    }
};