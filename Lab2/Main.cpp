#include <iostream>
#include <string>
#include"Character.h"
#include"CustomCharacters.h"
#include "CharacterArray.h"
#include "Weapon.h"
using namespace std;

const string eType[] { "Dummy", "Air", "Rock", "Lightning", "Flame" };
const string aType[] { "Dummy", "Invisible - impossible to detect", "Tough - strong melee resistance", "Quick - high chance of escaping enemies", "Fireproof - resists fire attacks" };
const string tType[]{ "Dummy", "Super Spooky", "Goofy", "New and Improved", "Dashing" };

//int main()
//{
//	const int num_weapons = 4;
//	Weapon* arr[num_weapons] =
//	{
//	//new Weapon("Dummy", "Dummy", 0, "Dummy"),
//	new Weapon("Mace:", "Spiky stick of terror", 150, "Spikes get stuck in enemy - may cause Bleeding"),
//	new Weapon("Bow:", "No enemy is out of reach with this", 100, "Arrows can pierce through any shield - Unblockable"),
//	new Weapon("Hammer:", "Not just for crafting", 200, "Heavy weapon deals extra damage - may cause Stun"),
//	new Weapon("Chemistry Set:", "Blow things up- on purpose", 300, "Longer cooldown period but higher damage - may cause InstaKill")
//	};
//
//	const int num_characters = 3;
//	Character* characterArray[num_characters] = {
//		new Lightning(),
//		new Ghost(),
//		new Rock()
//	};
//
//	int choice, choice2;
//	string name;
//	string element, strength, title;
//
//	//Main menu
//	cout << "Welcome to the Character Customizer 4000!" << endl;
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
//
//	MAINMENU:
//
//	cout << "Please select a number based on the following options:" << endl;
//	cout << "1. Create new character." << endl;
//	cout << "2. View all existing characters." << endl;
//	cout << "3. Delete a character." << endl;
//	cout << "4. Exit program." << endl;
//	cin >> choice;
//	cout << endl << endl;
//
//	switch (choice)
//	{
//	case 1:  
//
//		//Character* pCharacter = new Lightning("", 100, "", "", "");
//
//		cout << "You have chosen to create a new character." << endl;
//		cout << "Please enter the name for your character." << endl;
//		cin >> name;
//		cout << endl;
//
//		cout << "The following weapons are available." << endl;
//
//		for (int i = 0; i < num_weapons; i++)
//		{
//			cout << *arr[i] << endl;
//		}
//
//		cout << endl;
//
//		cout << "Your character can be of type" << endl;
//		cout << "1. Ghost, 2.Lightning or 3.Rock" << endl;
//		cout << "Please enter the number that corresponds with your choice." << endl;
//		cin >> choice2;
//
//		if (choice2 = 1)
//		{
//			Ghost ghost;
//			//cout << "You have created: " << ghost.displayInfo() << endl;
//		}
//
//		if (choice2 = 2)
//		{
//			cout << "You have created: " << new Lightning << endl;
//		}
//
//		if (choice2 = 3)
//		{
//			cout << "You have created: " << new Rock << endl;
//		}
//
//		goto MAINMENU;
//	break;
//
//	case 2: 	
//		
//		/*for (int i = 0; i < num_characters; i++)
//	{
//		cout << characterArray[i] << endl;
//	}
//
//		goto MAINMENU;*/
//		break;
//
//	case 3: cout << "Which character would you like to delete?" << endl;
//		cin >> --choice;
//
//		if (choice == 1)
//		{
//			//delete
//		}
//
//		if (choice == 2)
//		{
//			//delete
//		}
//
//		if (choice == 3)
//		{
//			//delete
//		}
//		goto MAINMENU;
//		break;
//
//	case 4: exit(0);
//
//	}

	//Character* pCharacter = new Title("Gary", 100, "Invisibility: Undetectable by enemies.", "Flimsy: Low attack power.", "See-Through");

	//static_cast<Title*>(pCharacter)->setTitle("Prince");

	//cout << pCharacter << endl;

	/*const int num_characters = 10; Array of pointers to characters
	Character* characterArray[] = { new Ghost(),
									new Rock(),
		                            new Lightning()
	};*/

	return 0;
}

/*
cout << "Your character can be made up of the following elements." << endl;
cout << "1. Air  2. Rock  3. Lightning  4. Flame" << endl;
cout << "Which element would you like to give your character?" << endl;
cin >> element;
static_cast<Title*>(pCharacter)->setElement(element);

cout << "Your character can have the following strengths." << endl;
cout << "1. Invisible  2. Tough  3. Quick  4. Fireproof" << endl;
cout << "Which ability would you like to give your character?" << endl;
cin >> strength;
static_cast<Title*>(pCharacter)->setStrength(strength);

cout << "Your character can have the following titles." << endl;
cout << "1. Spooky  2. Goofy  3. Invincible  4. Dashing" << endl;
cout << "Which element would you like to give your character?" << endl;
cin >> title;
static_cast<Title*>(pCharacter)->setTitle(title);
*/