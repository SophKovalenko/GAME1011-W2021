#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
	char choice;
	const int numGames = 6;
	const int numAchieve = 6;
	int gameNum;

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
		  Game("Persona 5", "Atlus", "P-Studio"),
		  Game("Until Dawn", "Sony Computer Entertainment", "Supermassive Games"),
		  Game("Fall Guys", "Devolver Digital", "Mediatonic"),
		  Game("Little Hope", "Bandai Namco Entertainment", "Supermassive Games"),
		  Game("Resident Evil 3", "Capcom", "Capcom")
		};

	}

	if (choice == 2)
	{
		Platform xbox("Xbox", "Microsoft");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Fortnight", "Epic Games", "Warner Bros. Interactive Entertainment"),
		  Game("Grand Theft Auto V", "Rockstar Games", "Rockstar North"),
		  Game("Apex Legends", "Electronic Arts", "Respawn Entertainment"),
		  Game("Rocket League", "Psyonix", "Psyonix"),
		  Game("Battlefield 5", "Electronic Arts", "EA DICE")
		};
	}

	if (choice == 3)
	{
		Platform nSwitch("Switch", "Nintendo");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("SuperMario 3D AllStars", "Nintendo", "Nintendo EPD"),
		  Game("Animal Crossing","Nintendo", "Nintendo EPD"),
		  Game("Hades", "Supergiant Games", "Supergiant Games"),
		  Game("The Witcher 3", "CD Projekt Red", "CD Projekt Red"),
		  Game("Celeste", "Matt Makes Games", "Matt Makes Games")
		};
	}

	if (choice == 4)
	{
		Platform pc("PC", "Microsoft");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Control", "505 Games", "Remedy Entertainment"),
		  Game("Desperados 3", "THQ Nordic", "Mimimi Games"),
		  Game("Disco Elysium", "ZA/UM", "ZA/UM"),
		  Game("Doom Eternal", "Bethesda Softworks", "id Software"),
		  Game("Dwarf Fortress", "Bay 12 Games", "Bay 12 Games")
		};
	}

	if (choice == 5)
	{
		Platform android("Android", "Google");

		Game game[numGames] = //array of Game objects
		{ Game("DUMMY", "DUMMY", "DUMMY"),
		  Game("Among Us", "Innersloth LLC", "Innersloth LLC"),
		  Game("Robolox", "David Baszucki", "Robolox Corp."),
		  Game("Clash of Clans", "Supercell", "Supercell"),
		  Game("Harry Potter: Hogwarts Mystery", "Jam City", "Jam City"),
		  Game("Hay Day", "Supercell", "Supercell")
		};

		cout << "Which game would you like to create an achievement for?" << endl;
		cin >> gameNum;


	}

	if (choice > 5)
	{
		cout << "You have made an incorrect selection" << endl;
	}


	return 0;
}