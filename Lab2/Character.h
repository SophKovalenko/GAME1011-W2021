#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;

class Character
{
protected: 
	string m_name;
	int m_health;
	//int m_accessNum;
	//Weapon* m_weapon;

public:
	Character(string pName, int pHealth)
	{
		setName("");
		setHealth(100);
		//setWeapon();
	}

	string getName() const
	{
		return m_name;
	}

	void setName(string pName)
	{
		m_name = pName;
	}

	int getHealth() const
	{
		return m_health;
	}

	void setHealth(int pHealth)
	{
		m_health = pHealth;
	}

};

//so our predefined characters can be assigned weapons beforehand, and then as the user chooses a character they name it, 
	//and we save it into the user's character array. 
	//The user can then select which character to  delete from the array after creating characters

