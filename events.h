#pragma once
#ifndef UNTITLED_EVENT_H
#define UNTITLED_EVENT_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include "Spaceship.h"
#include "SpaceshipTypes.h"


class Event {
public:
    Event() {}
    ~Event() {}
    virtual void execute(std::unique_ptr<Spaceship>ship) = 0;
};

class AstreoidBelt :public Event {
public:
    int dT = 10;
    void execute(std::unique_ptr<Spaceship>ship) override {
        if (rand() % 100 < 50) {
            //GEMI HASAR ALIR
        }
        else {
            std::cout << "Hasar almadan kacmayi basardiniz\n";
        }
    }
};

class AbondenedPlanet :public Event {
public:
    int treasure = 10;
    void execute(std::unique_ptr<Spaceship>ship) override {
        srand(time(nullptr));
        // Yuzde 50 olasilikla altin kazanma islemi
        if (rand() % 100 < 50) {
            std::cout << "Altin kazandiniz!\n";
            new Spaceship.cash = Spaceship.cash + treasure;
        }
        else {
            SpacePirates space_pirates;
            std::cout << "Maalesef altin kazanamadiniz.Uzay korsanlari geldi.\n";
            SpacePirates.execute();
        }
    }

};

class SpacePirates : public Event {
public:

    void execute(int selection) override {
        int selection;
        std::cout << "Kacmak için 1,savasmak için 2, pazarlik etmek için 3 giriniz\n";
        std::cin >> selection;

        if (selection == 1) {
            std::cout << "Kacmayi sectiniz\n";
            if () {
                if (Spaceship.fuel > 33) {
                    //kacma olasiligi
                    Spaceship.fuel -= 33;
                }
                else {
                    std::cout << "Yeterli yakitiniz bulunmamaktadir\n";

                }
            }
            else {
                execute()

            }

        }

        else if (selection == 2) {
            std::cout << "Savasmayi sectiniz\n";
        }

        else if (selection == 3) {
            std::cout << "Pazarlik etmeyi sectiniz\n";
            void randomsayi(int a, int b, int c, int d) {
                //  a = time(0);
                //  srand(a);
                  //b = c + rand()% d ;
                  //gecis ucreti ode
            }

        else {
            std::cout << "Hatali sayi girisi ";
        }

        }
    };

#endif //UNTITLED_EVENT_H
