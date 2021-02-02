//Guard
#ifndef SIMPLEMENUHEADER_H_
#define SIMPLEMENUHEADER_H_
//
#include "SavedNumber.h" // Header for using SavedNumbers...


// EXTERNAL REFERENCES
extern bool repeat;
extern string input;
extern int MainMenuSelection;



//MENU CLASS//

class MenuStd {
public:
	void ShowMainMenu();
	int ShowSubMenuSimple();
	int ShowSubMenuScientific();
	void ShowDivisionSubMenu();
	void CurrencyConversionMenu();
	void CelcToF();
	void FtoCelc();
	void LengthConv();
	void WeightConv();
	void HHMMSS();
};
extern MenuStd menu;  // REFERENCE TO OBJECT
extern  SavedNumberClass SNObj;  // REFERENCE TO OBJECT

void Addition() {
	repeat = 1;
	int sum = 0;
	int add1;
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
			sum = SNObj.GetSavedNumber();
		}
		else if ((input == "n") || (input == "N")) {
			cout << "Number Not Saved\n";
		};
	};
	
	cout << "Please input 2 numbers. Input S to stop\n";

	while (repeat == 1) {
		cout << sum << " + ";
		
		
		getline(cin, input);
		repeat = 0;
		if ((input == "s") || (input == "S")) {
			cout << "total sum is: " << sum << "\n\n";
			SNObj.AskForSave(sum);
			Sleep(1000);
		}
		else {
			add1 = atoi(input.c_str());
			sum = sum + add1;
			repeat = 1;
			
		};

	};

};
void Substraction() {
	repeat = 1;
	int sum = 0;
	int add1;
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
			sum = SNObj.GetSavedNumber();
		}
		else if ((input == "n") || (input == "N")) {
			sum = 0;
		};
	};

	cout << "Please input 2 numbers. Input S to stop\n";

	while (repeat == 1) {
		cout << sum << " - ";
		//cin.ignore();

		getline(cin, input);
		repeat = 0;
		if ((input == "s") || (input == "S")) {
			cout << "total sum is: " << sum << "\n\n";
			SNObj.AskForSave(sum);
			Sleep(1000);
		}
		else {
			add1 = atoi(input.c_str());
			sum = sum - add1;
			repeat = 1;

		};

	};

};

void Multiplication() {
	float sum = 1;
	float userinput;
	float mult1;

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
			sum = SNObj.GetSavedNumber();
		}
		else if ((input == "n") || (input == "N")) {
			sum = 1;
		};
	};

	cout << "Multiplication\n";
	cout << " Each result will multiply with the number you enter\n Please Input Numbers\n You can multiply with decimal numbers\n";
	getline(cin, input);

	while (repeat == 1) {
		cout << sum << " * ";
		

		getline(cin, input);
		repeat = 0;

		if ((input == "s") || (input == "S")) {
			cout << "total sum is: " << sum << "\n\n";
			SNObj.AskForSave(sum);
			Sleep(1000);
		}
		else {
			mult1 = atoi(input.c_str());
			sum = sum * mult1;
			repeat = 1;

		};

	};
}


void SimpleDivision() {
	float x, y;
	float result;
	float divisor, dividend;
	bool savedflag = 0;


	cout << "Choose type of result\n";
	cout << "1. To get Divisor \n";
	cout << "2. To get the Quotient (Shit remaining of the division)\n";
	cin >> x;

	if (x == 1) {

		if (SNObj.GetSavedNumber() != 0) {
			cout << " Do you want to use the saved number? Y/N\n";
			cin.ignore();
			getline(cin, input);
			while ((input != "y") && (input != "Y") && (input != "n") && (input != "N")) {
				cout << "please specify\n";
				getline(cin, input);
			};

			if ((input == "y") || (input == "Y")) {
				y = SNObj.GetSavedNumber();
				savedflag = 1;

			}
			else if ((input == "n") || (input == "N")) {
				y = 1;
				savedflag = 0;
			};
		};
		if (savedflag == 1) {
			y = SNObj.GetSavedNumber();
			cout << "Input second number\n";
			cin >> dividend;
			while (dividend == 0) {
				cout << "You dumb? Cant divide with 0";
				cin >> dividend;
			};
			cout << "The divisor is : " << (y / dividend);
			Sleep(2000);
			menu.ShowMainMenu();
		}
		else if (savedflag == 0) {
			cout << "input first number\n";
			cin >> y;
			cout << "Input second number\n";
			cin >> dividend;
			while (dividend == 0) {
				cout << "You dumb? Cant divide with 0";
				cin >> dividend;
			};
			cout << "The divisor is : " << (y / dividend);
			Sleep(2000);
			menu.ShowMainMenu();
		}
	}
	else if (x == 2) {
		int z, dividend2;

		if (SNObj.GetSavedNumber() != 0) {
			cout << " Do you want to use the saved number? Y/N\n";
			cin.ignore();
			getline(cin, input);
			while ((input != "y") && (input != "Y") && (input != "n") && (input != "N")) {
				cout << "please specify\n";
				getline(cin, input);
			};

			if ((input == "y") || (input == "Y")) {
				z = SNObj.GetSavedNumber();
				savedflag = 1;

			}
			else if ((input == "n") || (input == "N")) {
				z = 1;
				savedflag = 0;
			};
		}

		if (savedflag == 1) {
			z = SNObj.GetSavedNumber();

			cout << "input second number. Cant divided with zero\n";
			cin >> dividend2;
			while (dividend2 == 0) {
				cout << "You dumb? Cant divide with 0";
				cin >> dividend2;
			};
			divisor = (z % dividend2);
			cout << "The quotient (result) is : " << divisor;
			Sleep(2000);
			menu.ShowMainMenu();
		}
		else if (savedflag == 0) {
			cout << "Input first number\n";
			cin >> z;
			cout << "input second number. Cant divided with zero\n";
			cin >> dividend2;
			while (dividend2 == 0) {
				cout << "You dumb? Cant divide with 0";
				cin >> dividend2;
			};
			divisor = (z % dividend2);
			cout << "The quotient (result) is : " << divisor;
			Sleep(2000);
			menu.ShowMainMenu();
		}


	}
}


void PowerOfTwo() {
	int x, y;
	int result;
	system("CLS");
	cout << "x ^ 2. Input x\n";
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
			cout << "The saved number is :" << x << endl;
			cout << x << "to the power of 2 is :" << pow(x, 2) << endl;
			cout << "\nDo you want to save it? Y/N\n";
			cin >> input;

			while ((input != "n") && (input != " N") && (input != "y") && (input != "Y")) {
				cout << "\n please use Y or N\n";
				cin >> input;
			}

			if ((input == "y") || (input == "Y")) {
				SNObj.SetSavedNumber(pow(x, 2));
				repeat = 0;
				cout << "\n Number Saved\n";
				Sleep(2000);
				menu.ShowMainMenu();
			}
			else if ((input == "n") || (input == "N")) {
				cout << "\nnumber not saved\n";
				repeat = 0;
				Sleep(2000);
				menu.ShowMainMenu();
			}
		}
	}
	else if (SNObj.GetSavedNumber() != 0) {
		cout << "Input the number you need: ";
		cin >> x;
		y = pow(x, 2);
		cout << x << "to the power of 2 is :" << y;
		cout << "\nDo you want to save it? Y/N\n";
		cin >> input;

		while ((input != "n") && (input != " N") && (input != "y") && (input != "Y")) {
			cout << "\n please use Y or N\n";
			cin >> input;
		}

		if ((input == "y") || (input == "Y")) {
			SNObj.SetSavedNumber(y);
			repeat = 0;
			cout << "\n Number Saved\n";
			Sleep(2000);
			menu.ShowMainMenu();
		}
		else if ((input == "n") || (input == "N")) {
			cout << "\nnumber not saved\n";
			repeat = 0;
			Sleep(2000);
			menu.ShowMainMenu();
		}

	}
}

void DivideByInput() {

	system("CLS");
	float x;
	float result;

	cout << "1/x. Input x. Cant divide with 0\n";

	cin >> x;
	while (x == 0) {
		cout << "cant divide with zero..You dumb?\n";
		cin >> x;
	}
	result = 1 / x;
	cout << "1/" << x << " = " << result;
	cout << "\nDo you want to save it? Y/N\n";
	cin >> input;

	while ((input != "n") && (input != " N") && (input != "y") && (input != "Y")) {
		cout << "\n please use Y or N\n";
		cin >> input;
	}

	if ((input == "y") || (input == "Y")) {
		SNObj.SetSavedNumber(result);
		repeat = 0;
		cout << "\n Number Saved\n";
		Sleep(2000);
		menu.ShowMainMenu();
	}
	else if ((input == "n") || (input == "N")) {
		cout << "\nnumber not saved\n";
		repeat = 0;
		Sleep(2000);
		menu.ShowMainMenu();
	}


}

void SquareRoot() {
	system("CLS");
	float z;

	if (SNObj.GetSavedNumber() != 0) {
		cout << " Do you want to use the saved number? Y/N\n";
		cin.ignore();
		getline(cin, input);

		while ((input != "y") && (input != "Y") && (input != "n") && (input != "N")) {
			cout << "please specify\n";
			getline(cin, input);
		};

		if ((input == "y") || (input == "Y")) {
			z = SNObj.GetSavedNumber();
			cout << "Square root of " << z << " is " << sqrt(z);
			SNObj.AskForSave(sqrt(z));
		}
	}

	if (SNObj.GetSavedNumber() == 0) {
		cout << "\n Input the number you want to find the square root\n";
		cin >> z;
		cout << "The square root of " << z << "is " << sqrt(z);
		SNObj.AskForSave(sqrt(z));
		
	}

}

void PercentCalc() {
	float per;
	float x;
	float result;

	system("CLS");
	cout << "Input percentage : ";
	cin >> per;
	cout << "\nInput the number you want to calculate the percentage you gave:";
	cin >> x;
	result = (x * per) / 100;

	cout << "\n" << per << "% of " << x << " is " << result;
	SNObj.AskForSave(result);

}



#endif