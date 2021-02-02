
//defining header. Prevents multimpe includes.
#ifndef WEIGHTCONV_H_
#define WEIGHTCONV_H_
#include "SimpleMenuHeader.h"

extern bool repeat;
extern string input;
extern int MainMenuSelection;
extern double length;
extern MenuStd menu;
extern double weight;
extern SavedNumberClass SNObj;

void KgToGrams(double weight) {
	cout << weight << " is " << weight * 1000 << " grams\n";
	Sleep(2000);
	menu.ShowMainMenu();
}
void KgToMilliGr(double weight) {
	cout << weight << " is " << weight * 1000000 << " milligrams\n";
	Sleep(2000);
	menu.ShowMainMenu();
}
void KgtoLB(double weight) {
	cout << weight << " is " << weight * 2.205 << " libra\n";
	Sleep(2000);
	menu.ShowMainMenu();
}
void KgToOz(double weight) {
	//current conversion rate found on google.
	cout << weight << " is " << weight * 35.274 << " ounces\n";
	Sleep(2000);
	menu.ShowMainMenu();
}

#endif
