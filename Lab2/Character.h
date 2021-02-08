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
	string m_strength;
	string m_weakness;

public:
	Character()
	{}

	Character(string pName, int pHealth, Weapon pWeapon, string pStrength, string pWeakness) 
	{
		setName(pName);
		setHealth(pHealth);
		setWeapon(pWeapon);
		setStrength(pStrength);
		setWeakness(pWeakness);
	
	}

	~Character()
	{
		//delete character
	}

	virtual string getName() const
	{
		return m_name;
	}

	void setName(string pName)
	{
		this->m_name = pName;
	}

	virtual int getHealth() const
	{
		return m_health;
	}

	void setHealth(int pHealth)
	{
		m_health = pHealth;
	}

	virtual Weapon getWeapon() const
	{
		return m_weapon;
	}

	void setWeapon(Weapon pWeapon)
	{
		m_weapon = pWeapon;
	}

	virtual string getStrength() const
	{
		return m_strength;
	}

	void setStrength(string pStrength)
	{
		m_strength = pStrength;
	}

	virtual string getWeakness() const
	{
		return m_weakness;
	}

	void setWeakness(string pWeakness)
	{
		m_weakness = pWeakness;
	}

	virtual void displayInfo() const = 0; // pure virtual function

};


