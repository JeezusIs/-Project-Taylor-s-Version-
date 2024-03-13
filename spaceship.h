#pragma once
#include <iostream>

using namespace std;


class Spaceship {
public:
	string name;
	int hp;
	int fuel;
	int* pcash;
	int type;
	int damagetaken = 33;
	int hasarKatsayisi1 = damagetaken * 1.5;
	int hasarKatsayisi2 = damagetaken * 1;
	int hasarKatsayisi3 = damagetaken * 0.5;


	Spaceship(string _name = "", int _hp = 100, int _fuel = 100, int cash = 0, int _type);
};


class HizliGemi : public Spaceship {
public:
	int _hp1 = hp;
	int _fuel1 = fuel;
	int cash1 = *pcash;
	int _type;
	int _hasarKatsayi1;

	HizliGemi(int _hp1, int _fuel1, int cash1, int _type, int _hasarKatsayisi1);
};



class DengeliGemi : public Spaceship {
public:
	int _hp2 = hp;
	int _fuel2 = fuel;
	int cash2 = *pcash;
	int _type;
	int _hasarKatsayisi2;

	DengeliGemi(int _hp2, int _fuel2, int cash2, int _type, int _hasarKatsayisi2);
};



class GucluGemi : public Spaceship {
public:
	int _hp3 = hp;
	int _fuel3 = fuel;
	int cash3 = *pcash;
	int _type;
	int _hasarKatsayisi3;

	GucluGemi(int _hp3, int _fuel3, int cash3, int _type, int _hasarKatsayisi3);
};
