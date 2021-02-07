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
	Weapon m_weapon;

public:
	Character()
	{}

	Character(string pName, int pHealth, Weapon pWeapon) 
	{
		setName("");
		setHealth(100);
		setWeapon(pWeapon);
	}

	~Character()
	{

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

	Weapon getWeapon() const
	{
		return m_weapon;
	}

	void setWeapon(Weapon pWeapon)
	{
		m_weapon = pWeapon;
	}


	virtual void displayInfo() const = 0; // pure virtual function

};


