#pragma once
#include "Spaceship.h"
#include <iostream>
using namespace std;



void Astreoid() {
	void SafePassProbabilityFunc();
}


void SafePassProbabilityFunc(int probability) {
	int probability;
	int x;
	x = (rand() % 3000);
	if (0 < x <= 1500) {
		cout << "Astreoid kusagindan guvenli bir sekilde gectiniz." << endl;
	}
	if (1500 < x <= 3000) {
		cout << "Geminiz astreoid kusagindaki kayalara takildi!" << endl;
		//Cani guncelleyecek.
	}
}





void spacePirate() {
	void SpacePirateEncounterFunc();
}


void SpacePirateEncounterFunc() {
	int x;
	char answerToPirates;
	cout << "Uzay korsanlarinin bize bir teklifi var..." << endl;
	cout << "Korsan: Bize ya parani teslim edeceksin ya da canini!" << endl;
	cout << "A-Parayi uzat.(10 kredi ver)" << endl;
	cout << "B-Sikiysa gel de al. (Savas!)" << endl;

	if (answerToPirates == 'A') {
		cout << "Korsan:Akilli oldugunu biliyorduk kaptan" << endl;
	}
	if (answerToPirates == 'B') {
		x = (rand() % 3000);
		if (0 < x <= 1500) {
			cout << "Korsanlar bizi maglubiyete ugratti ve bolgeden yavasca uzaklasmak zorunda kaldik..." << endl;
			//Cani guncelleyecek.
		}
		if (1500 < x <= 3000) {
			cout << "Korsanlari maglubiyete ugrattik ve ganimetlerine el koyduk.." << endl;
			//Parayi guncelleyecek.
		}
	}
}





void planet() {
	void planetEncounter();
}


void planetEncounter() {
	int x;
	x = (rand() % 3000);
	if (0 < x <= 1000) {
		cout << "Gezegende herhangi bir sey bulunamadi..." << endl;
	}
	if (1000 < x <= 2000) {
		cout << "Gezegende hazine bulduk!(Kasaya 10 kredi eklendi.)" << endl;
		//Para guncellenir.
	}
	if (2000 < x <= 3000) {
		cout << "Bu bir tuzak!Gezegenden uzay korsanlari cikti." << endl;
		//uzay korsani fonksiyonu cagrilir.
	}
}
