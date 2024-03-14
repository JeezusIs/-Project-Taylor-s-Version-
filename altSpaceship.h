#pragma once
#include <iostream>
using namespace std;

class Spaceship {
public:
	int hp = 100;
	int fuel = 100;
	int cash = 0;
	int dTAB = 10;
	int dT = 30;
	int dT1 = dT * 1.5;
	int dT2 = dT * 0.5;
	int dT3 = dT * 1;
};

class FastShip :public Spaceship {
	FastShip(int _hp1, int _fuel1, int _cash1, int _dT1);

	void eventStart_FastShip(int _hp1, int _fuel1, int _cash1, int _dT1) {
		hp = _hp1;
		fuel = _fuel1;
		cash = _cash1;
		dT1 = _dT1;
	}
};

class PowerfulShip :public Spaceship {
	PowerfulShip(int _hp2, int _fuel2, int _cash2, int _dT2);

	void eventStart_PowerfulShip(int _hp2, int _fuel2, int _cash2, int _dT2) {
		hp = _hp2;
		fuel = _fuel2;
		cash = _cash2;
		dT2 = _dT2;
	}
};

class BalancedShip :public Spaceship {
	BalancedShip(int _hp3, int _fuel3, int _cash3, int _dT3);

	void eventStart_BalancedShip(int _hp3, int _fuel3, int _cash3, int _dT3) {
		hp = _hp3;
		fuel = _fuel3;
		cash = _cash3;
		dT3 = _dT3;
	}
};
