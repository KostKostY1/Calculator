#pragma once
#ifndef LENGHTCONV_H_
#define LENGHTCONV_H_
//defining header. Prevents multimpe includes.
#include "SimpleMenuHeader.h"

// LENGHT CONVERSION FUNCTIONS
//INCLUDED IN .CPP
extern bool repeat;
extern string input;
extern int MainMenuSelection;
extern double length;
extern MenuStd menu;


void MtoMM(double x) {
	cout << length << " converted to millimeters is " << length * 1000;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoCM(double x) {
	cout << length << " converted to centimeters is " << length * 100;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoKM(double x) {
	cout << length << " converted to Killometers is " << length / 1000;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoLeagues(double x) {
	cout << length << " converted to leagues is " << length / 5556;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoFeet(double x) {
	cout << length << " converted to feet is " << length * 3.281;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoMiles(double x) {
	cout << length << " converted to miles is " << length / 1609;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoNaut(double x) {
	cout << length << " converted to nautical miles  is " << length / 1852;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoInches(double x) {
	cout << length << " converted to inches is " << length * 39.37;
	Sleep(2000);
	menu.ShowMainMenu();
}
void MtoYards(double x) {
	cout << length << " converted to yards is " << length *1.094;
	Sleep(2000);
	menu.ShowMainMenu();
}


#endif
