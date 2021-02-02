//Guard
#ifndef SAVEDNUMBER_H_
#define SAVEDNUMBER_H_

//Externals

extern bool repeat;
extern string input;
extern int MainMenuSelection;


//Class
class SavedNumberClass {
public:
	double GetSavedNumber();
	void SetSavedNumber(double SavedNumberVar);
	void AskForSave(double TestSave);
	//double AskToUseSN(double TestLoad);
private:
	double SavedNumber;
};

extern SavedNumberClass SNObj; // OBJECT REFFERENCE


void SavedNumberClass::SetSavedNumber(double SavedNumberVar) {
	SavedNumber = SavedNumberVar;
}


double SavedNumberClass::GetSavedNumber() {
	return SavedNumber;
}


void SavedNumberClass::AskForSave(double TestSave ) {

	
	cout << "\nDo you want to save it? Y/N\n";
	cin >> input;

	while ((input != "n") && (input != " N") && (input != "y") && (input != "Y")) {
		cout << "\n Please use Y or N\n";
		cin >> input;
	}

	if ((input == "y") || (input == "Y")) {

		SNObj.SetSavedNumber(TestSave);
		cout << "\n Number Saved\n It's " <<TestSave;
		Sleep(1000);
	}
	else if ((input == "n") || (input == "N")) {
		cout << "\n Number not saved\n";
		Sleep(1000);

	}
}



#endif
