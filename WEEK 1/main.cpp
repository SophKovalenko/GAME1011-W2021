#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
	char choice;
	const int numGames = 6;
	const int numAchieve = 6;

	cout << "Welcome to the Hall of Acievements!" << endl;
	cout << "Please select the number of the platform you would like to access (1-5)" << endl;
	cout << "***********************************************************************" << endl << endl;
	cout << "1. PlayStation " << endl;
	cout << "2. Xbox " << endl;
	cout << "3. Switch " << endl;
	cout << "4. PC " << endl;
	cout << "5. Android " << endl;
	cin >> choice;
	cout << endl;
	
	if (choice == 1)
	{
		Platform playstation("PlayStation", "Sony");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Persona 5", "", ""),
		  Game("Dead by Daylight", "", ""),
		  Game("Fall Guys", "", ""),
		  Game("Little Hope", "", ""),
		  Game("Resident Evil 3", "", "")
		};

	}

	if (choice == 2)
	{
		Platform xbox("Xbox", "Microsoft");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Fortnight", "", ""),
		  Game("Grand Theft Auto V", "", ""),
		  Game("Apex Legends", "", ""),
		  Game("Rocket League", "", ""),
		  Game("Battlefield 5", "", "")
		};
	}

	if (choice == 3)
	{
		Platform nSwitch("Switch", "Nintendo");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("SuperMario 3D AllStars", "", ""),
		  Game("Animal Crossing", "", ""),
		  Game("Hades", "", ""),
		  Game("The Witcher 3", "", ""),
		  Game("Celeste", "", "")
		};
	}

	if (choice == 4)
	{
		Platform pc("PC", "Microsoft");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Control", "", ""),
		  Game("Desperados 3", "", ""),
		  Game("Disco Elysium", "", ""),
		  Game("Doom Eternal", "", ""),
		  Game("Dwarf Fortress", "", "")
		};
	}

	if (choice == 5)
	{
		Platform android("Android", "Google");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Among Us", "", ""),
		  Game("Robolox", "", ""),
		  Game("Clash of Clans", "", ""),
		  Game("Harry Potter", "", ""),
		  Game("Hay Day", "", "")
		};

	}

	if (choice > 5)
	{
		cout << "You have made an incorrect selection" << endl;
	}


	return 0;
}