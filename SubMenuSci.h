//defining header. Prevents multimpe includes.
#ifndef SUBMENUSCI_H_
#define SUBMENUSCI_H_
#include "SimpleMenuHeader.h"

//externals
extern bool repeat;
extern string input;
extern int MainMenuSelection;

extern MenuStd menu;
extern SavedNumberClass SNObj;
//


//Scientific menu functions..
void XTOY() {
	int x;
	int y;
	int result;
	system("CLS");
	if (SNObj.GetSavedNumber() != 0) {
		cout << " Do you want to use the saved number? Y/N\n";
		cin.ignore();
		getline(cin, input);
		while ((input != "y") && (input != "Y") && (input != "n") && (input != "N")) {
			cout << "please specify\n";
			getline(cin, input);
		};

		if ((input == "y") || (input == "Y")) {
			x = SNObj.GetSavedNumber();
			cout << "Calculating " << x << " to the power of : ";
			cin >> y;
			result = pow(x, y);
			cout << "\n " << x << " to the power of " << y << " is " << result;;
			SNObj.AskForSave(result);
		}
		else if ((input == "n") || (input == "N")) {
			x = 0;
			cout << "\n Input the first number :  ";
			cin >> x;
			cout << "\n input the second number : ";
			cin >> y;
			result = pow(x, y);
			cout << "\n" << x << "to the power of " << y << " is " << result;
			SNObj.AskForSave(result);
		}
		
	}else{
			
			cout << "\n Input the first number : ";
			cin >> x;
			cout << "\n input the second number : ";
			cin >> y;
			result = pow(x, y);
			cout << "\n" << x << " to the power of " << y << " is " << result;
			SNObj.AskForSave(result);
	}
}





void sineCalc() {
	int side1;
	float result;

	system("CLS");
	cout << "\n Sine Calculator. Input Variables : ";
	cin >> side1;
	result = side1 * (3.1415 / 180);
	cout << "Sine is " << sin(result);
	SNObj.AskForSave(sin(result));
	Sleep(2000);
}

void cosineCalc() {
	int side1;
	float result;

	system("CLS");
	cout << "\n Cosine Calculator. Input Variables : ";
	cin >> side1;
	result = side1 * (3.1415 / 180);
	cout << "Sine is " << cos(result);
	SNObj.AskForSave(cos(result));
	Sleep(2000);
}

void tangent() {
	int side1;
	float result;

	system("CLS");
	cout << "\n Tangent Calculator. Input Variables : ";
	cin >> side1;
	result = side1 * (3.1415 / 180);
	cout << "Sine is " << tan(result);
	SNObj.AskForSave(tan(result));
	Sleep(2000);
}

void tentox() {
	int x;
	long long result;
	system("CLS");
	cout << "\n Power of 10 to x. Input x \n";
	cin >> x;
	result = pow(10, x);
	cout << "10 to the power of " << x << " is " << result;
	SNObj.AskForSave(result);
	Sleep(2000);
}


void factorialn() {
	int x;
	long long result;
	int i;
	system("CLS");
	cout << "Factorial calculator. Input x \n";
	cin >> x;
	result = x;
	for (i = 1; i < x; i++) {
		result = (result * x);
	}
	cout << "\n Factorial of " << x << " is " << result;
	SNObj.AskForSave(result);
	Sleep(3000);


}




#endif

