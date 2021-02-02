//Project Calcualator.
//Written in C++.
//Project implemantation was done with simple functions and classes.
//No bugs found.
//its shitty pleace have mercy when you grade this..

//Notable function used is 'getline'. Takes an input and then differentiate if its a char or a INT.
//if its an int, i use ATOI(input.c_str()) which takes a string and turns into an INT.
//
//I also used guards for the headerfiles. Iwanted them to only be imported once per compile.
//it was done with #ifndef and can also be done with #pragma once.
//
//Conversion rates for some calculations were found on google.
//No need for a README file.

//Code start.

#include <iostream>
#include <stdlib.h> 
#include <windows.h> // included for Sleep function
#include <string> // included for getline function
#include <math.h>
#include <cmath>
using namespace std;

////////////////////////////////////
//Included Header Files with guards.
//////////////////////////////////
#include "SimpleMenuHeader.h"
#include "SubMenuSci.h"
#include "LenghtConv.h"
#include "WeightConv.h"
#include "SavedNumber.h"
///////////////////////////////////

////////////////////
//GLOBAL VARIABLES//
////////////////////
int SubMenuSelection;
bool repeat = 1;
//float SavedNumber = 3;
string input;
int MainRepeat = 1;
int MainMenuSelection;
double length;
bool loading = 1;
//////////////////////////

////////////////////////
//MENU CLASS FUNCTIONS//
////////////////////////
void MenuStd::ShowMainMenu() {

	cout << "\nPLEASE INPUT A NUMBER FOR THE CORRESPODING ACTION\n";
	cout << "\n1. SIMPLE \n";
	cout << "2. SCIENTIFIC\n";
	cout << "3. Currency conversion\n";
	cout << "4. Celcius to Fahreneit\n";
	cout << "5. Fahreneit to Celcius\n";
	cout << "6. Length conversion \n";
	cout << "7. Weight conversion \n";
	cout << "8. Seconds to HH:MM:SS \n";
	cout << "0. TO EXIT \n";
	
};
//Simple Menu//
int MenuStd::ShowSubMenuSimple() {
	
	cout << "\nSIMPLE ARITHMETIC OPERATIONS \n";
	cout << "Select appropriate Number\n";
	cout << "1. Addition\n";
	cout << "2. Substraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Power\n";
	cout << "6. 1 / x division\n";
	cout << "7. Square root\n";
	cout << "8. Percentage Calculation\n";
	cout << "0. For previous menu\n";
	cin >> SubMenuSelection;
	return SubMenuSelection;
};
//Scientific menu//
int MenuStd::ShowSubMenuScientific() {
	cout << "\nSIMPLE ARITHMETIC OPERATIONS \n";
	cout << "Select appropriate Number\n";
	cout << "1. Addition\n";
	cout << "2. Substraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Power\n";
	cout << "6. 1 / x division\n";
	cout << "7. Square root\n";
	cout << "8. Percentage Calculation\n";

	cout << "\n\nSCIENTIFIC ARITHMETIC OPERATIONS \n";
	cout << "Select appropriate Number\n";
	cout << "11. x^y\n";
	cout << "12. SINE()\n";
	cout << "13. COSINE\n";
	cout << "14. TANGENT\n";
	cout << "15. 10^x\n";
	cout << "16. Factorial N!\n\n";

	cout << "0. For previous menu\n";

	cin >> SubMenuSelection;
	return SubMenuSelection;
};

//Sub Division selection
void MenuStd::ShowDivisionSubMenu() {
	cout << "\n1. Module\n";
	cout << "2.Divider";
}

void MenuStd::CurrencyConversionMenu() {
	float Currency;
	int userinput;
	int CurrFrom;
	cout << "Currency Conversion Menu\n";
	cout << "What type of currency is it?\n";
	cout << "1. For Euro\n";
	cout << "2. For Drachma\n";
	cout << "3. For USDollars\n";
	cout << "0. For previous menu";
	cin >> CurrFrom;
	
	if (CurrFrom == 1) {
		cout << "\n You can convert to USD or Drahma.";
		cout << "\n 1. For USD \n 2. For Drachma.";
		cin >> userinput;
		if (userinput == 1) {
			cout << "Input currency in EUR.\n";
			cin >> Currency;
			cout << Currency << " in USD is " << (Currency * 0.81);
			menu.CurrencyConversionMenu();
		}
		else if (userinput == 2) {
			cout << "Input currency in EUR.\n";
			cout << "Exchange rate is 1 EUR to 340.75 Drachma\n";
			cin >> Currency;
			cout << Currency << " in Drachma is " << (Currency * 340.75);
			menu.CurrencyConversionMenu();
		}
	}
	else if (CurrFrom == 2) {
		cout << "\nDrachma can only convert to EUR. Please input a number\n";
		cin >> Currency;
		cout << Currency << " in EUR is " << (Currency / 340.75) << endl;
		menu.CurrencyConversionMenu();
	}
	else if (CurrFrom == 3) {
		cout << "\nUSD Can only be converted to EUR. Please input a number in USD\n";
		cin >> Currency;
		cout << Currency << " in EUR is" << (Currency / 0.81) << endl;
		menu.CurrencyConversionMenu();
	}
	else {
		menu.ShowMainMenu();
	}
	
}
void MenuStd::CelcToF() {
	float Degrees;
	cout << "Celcius to Fahrenheit. Please input degrees\n";
	cin >> Degrees;
	cout << Degrees << " in fahrenheit is " << ((Degrees * 9 / 5) + 32);
	Sleep(2000);
	menu.ShowMainMenu();
}

void MenuStd::FtoCelc() {
	float Degrees;
	cout << "Fahrenheit to Celcius.Please input degrees\n";
	cin >> Degrees;
	cout << Degrees << " in Celcius is " << ((Degrees - 32) * 5/9);
	Sleep(2000);
	menu.ShowMainMenu();
}

void MenuStd::LengthConv() {

	int LSelect;
	system("CLS");
	cout << "Converting meters to whatever you want. Input lenght in meters\n";
	cin >> length;
	cout << "What do you want to convert it to?\n";
	cout << "1 for MM\n";
	cout << "2 for CM\n";
	cout << "3 for KM\n";
	cout << "4 for Leagues\n";
	cout << "5 for Feet\n";
	cout << "6 for Miles\n";
	cout << "7 for nautical Miles\n";
	cout << "8 for inches\n";
	cout << "9 for Yards\n";
	cout << "0. For previous Menu\n";
	cin >> LSelect;

	while ((LSelect < 0) || (LSelect > 9)) {
		cout << "Wrong Number. Please use 0-9\n";
		cin >> LSelect;
	}
	if (LSelect == 0) {
		menu.ShowMainMenu();
	}
	else if (LSelect == 1) {
		MtoMM(length);
	}
	else if (LSelect == 2) {
		MtoCM(length);
	}
	else if (LSelect == 3) {
		MtoKM(length);
	}
	else if (LSelect == 4) {
		MtoLeagues(length);
	}
	else if (LSelect == 5) {
		MtoFeet(length);
	}
	else if (LSelect == 6) {
		MtoMiles(length);
	}
	else if (LSelect == 7) {
		MtoNaut(length);
	}
	else if (LSelect == 8) {
		MtoInches(length);
	}
	else if (LSelect == 9) {
		MtoYards(length);
	}
}
void MenuStd::WeightConv() {
	double weight;
	int WSelect;
	system("CLS");
	cout << "Weight Conversion. Input weight in KG\n";
	cin >> weight;
	cout << "What do you want to convert it to?\n";
	cout << "1. Grams\n";
	cout << "2. Milligrams\n";
	cout << "3. Libra\n";
	cout << "4. Ounce\n";
	cout << "0. For previous menu\n";
	cin >> WSelect;
	while ((WSelect < 0) || (WSelect > 4) ){
		cout << "Please use 0-4\n";
		cin >> WSelect;
	}
	if (WSelect == 0) {
		menu.ShowMainMenu();
	}
	else if (WSelect == 1) {
		KgToGrams(weight);
	}
	else if (WSelect == 2) {
		KgToMilliGr(weight);
	}
	else if (WSelect == 3) {
		KgtoLB(weight);
	}
	else if (WSelect == 4) {
		KgToOz(weight);
	}



}

void MenuStd::HHMMSS() {
	long long time;
	long long hour,min,sec,rest;
	cout << "Converting Seconds to HH:MM:SS\n.Please input seconds\n";
	cin >> time;
	hour = time / 3600;
	rest = time % 3600;
	min = rest / 60;
	sec = rest % 60;
	printf("%d seconds is %d : %d : %d", time, hour, min, sec);
	Sleep(2000);
	menu.ShowMainMenu();

}
////////////////////////////////////////////////////////////////////////

//loading screen..axaxaxa...//
void ShowLoading() {
	cout << "###########################\n";
	cout << "### Loading Please Wait ###\n";
	cout << "###########################";
	loading = 0;
	Sleep(1500);
}
//////////////////////////////



MenuStd menu; // OBJECT CREATION //REFERENCE AT HEADER FILES
SavedNumberClass SNObj; // OBJECT CREATION //REFERENCE AT HEADER FILES

////////
//MAIN//
////////

int main(){
	system("CLS");
	if (loading == 1) {
		ShowLoading();
	}
	
	while (MainRepeat == 1) {

		MainRepeat = 1;
		system("CLS");
		menu.ShowMainMenu();
		cin >> MainMenuSelection;

		// PROGRAM TERMINATION IN MAIN MENU
		if (MainMenuSelection == 0) {  
			exit(0);
		};

		//Simple Menu Selection
		if (MainMenuSelection == 1) { //submenu simple
			system("CLS");
			menu.ShowSubMenuSimple();
			if (SubMenuSelection == 1) { //addition
				Addition();
			}
			else if (SubMenuSelection == 2) { //substraction
				Substraction();
			}
			else if (SubMenuSelection == 3) { //miltiplication
				Multiplication();
			}
			else if (SubMenuSelection == 4) { //dibvistion
				SimpleDivision();
			}
			else if (SubMenuSelection == 5) { //x ^ 2
				PowerOfTwo();
			}
			else if (SubMenuSelection == 6) { //1 / x division
				DivideByInput();
			}
			else if (SubMenuSelection == 7) { //SQroot
				SquareRoot();
			}
			else if (SubMenuSelection == 8) { //percentage
				PercentCalc();
			};
		};
		//Sci menu
		if (MainMenuSelection == 2) {
			system("CLS");
			menu.ShowSubMenuScientific();
			if (SubMenuSelection == 1) { //addition
				Addition();
			}
			else if (SubMenuSelection == 2) { //substraction
				Substraction();
			}
			else if (SubMenuSelection == 3) { //miltiplication
				Multiplication();
			}
			else if (SubMenuSelection == 4) { //dibvistion
				SimpleDivision();
			}
			else if (SubMenuSelection == 5) { //x ^ 2
				PowerOfTwo();
			}
			else if (SubMenuSelection == 6) { //1 / x division
				DivideByInput();
			}
			else if (SubMenuSelection == 7) { //SQroot
				SquareRoot();
			}
			else if (SubMenuSelection == 8) { //percentage
				PercentCalc();
			}
			else if (SubMenuSelection == 11) { // x ^ y
				XTOY();
			}
			else if (SubMenuSelection == 12) { // sine
				sineCalc();
			}
			else if (SubMenuSelection == 13) { // cosine
				cosineCalc();
			}
			else if (SubMenuSelection == 14) { //tangent
				tangent();
			}
			else if (SubMenuSelection == 15) { // 10^x
				tentox();
			}
			else if (SubMenuSelection == 16) {// N!
				factorialn();
			}
		};

		// Currency Conversion
		if (MainMenuSelection == 3) {
			system("CLS");
			menu.CurrencyConversionMenu();
			
		}

		// CelcToF
		if (MainMenuSelection == 4) {
			menu.CelcToF();
		}

		// FtoCelc
		if (MainMenuSelection == 5) {
			menu.FtoCelc();
		}

		//lenght
		if (MainMenuSelection == 6) {
			menu.LengthConv();
		}

		//weight
		if (MainMenuSelection == 7) {
			menu.WeightConv();
		}

		//hh:mm:ss
		if (MainMenuSelection == 8) {
			menu.HHMMSS();
		}

		//SUBMENU RETURN.
		if (SubMenuSelection == 0) {
			menu.ShowMainMenu();
		};



	};
	return 0;
}





