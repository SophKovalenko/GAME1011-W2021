#include <iostream>
#include"Character.h"
#include"CustomCharacters.h"
using namespace std;

int main()
{
	char choice;

	//Main menu
	cout << "Welcome to the Character Customizer 4000!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "Please select a number based on the following options:" << endl;
	cout << "1. Create new character." << endl;
	cout << "2. View all existing characters." << endl;
	cout << "3. Delete a character." << endl;
	cout << "4. Exit program." << endl;
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		break;

	case 2:
		break;

	case 3:
		break;

	case 4: exit(0);

	}
	//Character* pCharacter = new Ghost("Gary", 100, "Invisibility: Undetectable by enemies.", "Flimsy: Low attack power.", "See-Through");
	//static_cast<Ghost*>(pCharacter)->setTitle("Prince");

	//cout << pCharacter << endl;

	return 0;
}