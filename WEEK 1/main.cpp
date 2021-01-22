#include <iostream>
#include "Classes.h"
using namespace std;

int main()
{
	int choice;
	const int numPlatforms = 5;
	const int numGames = 5;
	const int numAchieve = 6;
	int gameNum;

	cout << "Welcome to the Hall of Acievements!" << endl;
	cout << "Please select the number of the platform you would like to access (1-5)" << endl;
	cout << "***********************************************************************" << endl << endl;
	cout << "1. PlayStation " << endl;
	cout << "2. Xbox " << endl;
	cout << "3. Switch " << endl;
	cout << "4. PC " << endl;
	cout << "5. Android " << endl << endl;
	cin >> choice;
	cout << endl;

	Platform platform[numPlatforms] = 
	{ Platform("PlayStation", "Sony"),
	  Platform("Xbox", "Microsoft"),
	  Platform("Switch", "Nintendo"),
	  Platform("PC", "Microsoft"),
	  Platform("Android", "Google") 
	};

	if (choice == 1)
	{
		cout << "You have chosen the " << platform[0].getPlatformName() << " from " << platform[0].getManufacturer() << endl; // display platform info

		Game game[numGames] = //array of Game objects
		{
		  Game("Persona 5", "Atlus", "P-Studio"),
		  Game("Until Dawn", "Sony Computer Entertainment", "Supermassive Games"),
		  Game("Fall Guys", "Devolver Digital", "Mediatonic"),
		  Game("Little Hope", "Bandai Namco Entertainment", "Supermassive Games"),
		  Game("Resident Evil 3", "Capcom", "Capcom")
		};

		cout << "Here are the games for this platform" << endl; // display games

		for (int index = 0; index < numGames; index++)
		{
			cout << game[index].getGameName() << endl;
		}

	}

	if (choice == 2)
	{
		cout << "You have chosen the " << platform[1].getPlatformName() << " from " << platform[1].getManufacturer() << endl; // display platform info

		Game game[numGames] = //array of Game objects
		{
		  Game("Fortnight", "Epic Games", "Warner Bros. Interactive Entertainment"),
		  Game("Grand Theft Auto V", "Rockstar Games", "Rockstar North"),
		  Game("Apex Legends", "Electronic Arts", "Respawn Entertainment"),
		  Game("Rocket League", "Psyonix", "Psyonix"),
		  Game("Battlefield 5", "Electronic Arts", "EA DICE")
		};

		cout << "Here are the games for this platform" << endl; // display games

		for (int index = 0; index < numGames; index++)
		{
			cout << game[index].getGameName() << endl;
		}

	}

	if (choice == 3)
	{
		cout << "You have chosen the " << platform[2].getPlatformName() << " from " << platform[2].getManufacturer() << endl; // display platform info

		Game game[numGames] = //array of Game objects
		{
		  Game("SuperMario 3D AllStars", "Nintendo", "Nintendo EPD"),
		  Game("Animal Crossing","Nintendo", "Nintendo EPD"),
		  Game("Hades", "Supergiant Games", "Supergiant Games"),
		  Game("The Witcher 3", "CD Projekt Red", "CD Projekt Red"),
		  Game("Celeste", "Matt Makes Games", "Matt Makes Games")
		};

		cout << "Here are the games for this platform" << endl; // display games

		for (int index = 0; index < numGames; index++)
		{
			cout << game[index].getGameName() << endl;
		}


	}

	if (choice == 4)
	{
		cout << "You have chosen the " << platform[3].getPlatformName() << " from " << platform[3].getManufacturer() << endl; // display platform info

		Game game[numGames] = //array of Game objects
		{
		  Game("Control", "505 Games", "Remedy Entertainment"),
		  Game("Desperados 3", "THQ Nordic", "Mimimi Games"),
		  Game("Disco Elysium", "ZA/UM", "ZA/UM"),
		  Game("Doom Eternal", "Bethesda Softworks", "id Software"),
		  Game("Dwarf Fortress", "Bay 12 Games", "Bay 12 Games")
		};

		cout << "Here are the games for this platform" << endl; // display games

		for (int index = 0; index < numGames; index++)
		{
			cout << game[index].getGameName() << endl;
		}

	}

	if (choice == 5)
	{
		cout << "You have chosen the " << platform[4].getPlatformName() << " from " << platform[4].getManufacturer() << endl; // display platform info

		Game game[numGames] = //array of Game objects
		{
		  Game("Among Us", "Innersloth LLC", "Innersloth LLC"),
		  Game("Robolox", "David Baszucki", "Robolox Corp."),
		  Game("Clash of Clans", "Supercell", "Supercell"),
		  Game("Harry Potter: Hogwarts Mystery", "Jam City", "Jam City"),
		  Game("Hay Day", "Supercell", "Supercell")
		};

		cout << "Here are the games for this platform" << endl; // display games

		for (int index = 0; index < numGames; index++)
		{
			cout << game[index].getGameName() << endl;
		}


	/*	cout << "Which game would you like to create an achievement for?" << endl;
		cin >> gameNum;*/
	}


	if (choice > 5)
	{
		cout << "You have made an incorrect selection" << endl;
	}


	return 0;
}