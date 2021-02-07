#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"
using namespace std;

class Character
{
protected: 
	string m_name;
	int m_health;
	//Weapon* m_weapon;

public:
	Character(string pName, int pHealth)
	{
		setName("");
		setHealth(100);
		//setWeapon();
	}

	virtual string getName() const
	{
		return m_name;
	}

	void setName(string pName)
	{
		this->m_name = pName;
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


