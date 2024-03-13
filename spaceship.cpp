#include "Spaceship.h"


Spaceship::Spaceship(string _name, int _hp, int _fuel, int cash, int _type) {

	name = _name;
	hp = _hp;
	fuel = _fuel;
	cout << endl;
	pcash = new int(cash); // *pcash=cash de yazilabilirdi.
	type = _type;

};



HizliGemi::HizliGemi(int _hp1, int _fuel1, int cash1, int _type, int _hasarKatsayisi1) {
	hp = _hp1;
	fuel = _fuel1;
	cout << endl;
	pcash = new int(cash1);
	type = _type;

};


DengeliGemi::DengeliGemi(int _hp2, int _fuel2, int cash2, int _type, int _hasarKatsayisi2) {
	hp = _hp2;
	fuel = _fuel2;
	cout << endl;
	pcash = new int(cash2);
	type = _type;

};


GucluGemi::GucluGemi(int _hp3, int _fuel3, int cash3, int _type, int _hasarKatsayisi3) {
	hp = _hp3;
	fuel = _fuel3;
	cout << endl;
	pcash = new int(cash3);
	type = _type;

};
