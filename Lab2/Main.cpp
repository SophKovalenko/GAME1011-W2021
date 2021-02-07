#include <iostream>
#include <string>
#include"Character.h"
#include"CustomCharacters.h"
#include "CharacterArray.h"
using namespace std;

const string eType[] { "Dummy", "Air", "Rock", "Lightning", "Flame" };
const string aType[] { "Dummy", "Invisible - impossible to detect", "Tough - strong melee resistance", "Quick - high chance of escaping enemies", "Fireproof - resists fire attacks" };
const string tType[]{ "Dummy", "Super Spooky", "Goofy", "New and Improved", "Dashing" };

int main()
{
	char choice, repeat;
	string name;
	string element, strength, title;
	bool active = false;

	//Main menu
	cout << "Welcome to the Character Customizer 4000!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "Please select a number based on the following options:" << endl;
	cout << "1. Create new character." << endl;
	cout << "2. View all existing characters." << endl;
	cout << "3. Delete a character." << endl;
	cout << "4. Exit program." << endl;
	cin >> choice;
	cout << endl << endl;

	switch (choice)
	{
	case 1: do
	{
		bool active = true;

		Character* pCharacter = new Title("", 100, "", "", "");

		cout << "You have chosen to create a new character." << endl;
		cout << "Please enter the name for your character." << endl;
		cin >> name;
		static_cast<Title*>(pCharacter)->setName(name);

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

		cout << "Would you like to create another character? Press 1 for yes and 2 to return to main menu." << endl;
		cin >> repeat;

		if (repeat == 2)
		{
			active = false;
		}
	} while (active = true);
		break;

	case 2:
		break;

	case 3:
		break;

	case 4: exit(0);

	}
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