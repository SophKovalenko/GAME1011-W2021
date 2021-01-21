#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
	int choice, choice2, choice3;

	cout << "Welcome to the Hall of Acievements!" << endl;
	cout << "Please select the number of the platform you would like to access (1-3)" << endl;
	cout << "***********************************************************************" << endl << endl;
	cout << "1. PlayStation " << endl;
	cout << "2. Xbox " << endl;
	cout << "3. Switch " << endl;
	cout << "4. PC " << endl;
	cout << "5. Android " << endl;
	cin >> choice;
	cout << endl;
	
	switch (choice)
	{
	case 1: Platform playstation("PlayStation", "Sony");

	case 2: Platform xbox("Xbox", "Microsoft");

	case 3: Platform nSwitch("Switch", "Nintendo");

	case 4: Platform pc("PC", "Microsoft");

	case 5: Platform android("Android", "Google");

	default: cout << "You have made an incorrect selection" << endl;
	}

	/* << "Please select the number of the game you would like to access (1-3)" << endl;
	cout << "*******************************************************************" << endl << endl;
	cout << "1.  " << endl;
	cout << "2. " << endl;
	cout << "3. " << endl;
	cin >> choice2;
	cout << endl;*/

	return 0;
}