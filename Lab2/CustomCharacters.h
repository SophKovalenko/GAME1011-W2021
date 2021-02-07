#pragma once
#include <iostream>
#include <string>
# include "Character.h"
using namespace std;

class Ghost : public Character
{
private:
	string m_title;
	string m_strength;
	string m_weakness;
	//invisible/ hard to detect, deals low damage

public:
	Ghost(string pName, int pHealth, Weapon pWeapon, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth, pWeapon)
	{
		setStrength("Invisible to enemies - *Increased Evasion*");
		setWeakness("Flimsy - *Low Melee Damage*");
		setTitle("See-Through");
	}

	string getStrength() const
	{
		return m_strength;
	}

	void setStrength(string pStrength)
	{
		m_strength = pStrength;
	}

	string getWeakness() const
	{
		return m_weakness;
	}

	void setWeakness(string pWeakness)
	{
		m_weakness = pWeakness;
	}

	void setTitle(string title)
	{
		this->m_title = title;
	}

	virtual string getName() const
	{
		return m_title + " " + Character::getName();
	}

	virtual void displayInfo() const
	{
		cout << "Creating character " << m_name << " with a health of " << m_health << " hp." << endl;
		cout << "This character weilds the " << m_weapon.getWeaponName() << " which " 
			<< m_weapon.getDescription() << " and deals " << m_weapon.getDamageValue() << " damage "<<  m_weapon.getSpecialAbility();
	}
};

class Lightning : public Character
{
private:
	string m_title;
	string m_strength;
	string m_weakness;
	//invisible/ hard to detect, deals low damage

public:
	Lightning(string pName, int pHealth, Weapon pWeapon, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth, pWeapon)
	{
		setStrength("Invisible to enemies - *Increased Evasion*");
		setWeakness("Flimsy - *Low Melee Damage*");
		setTitle("See-Through");
	}

	string getStrength() const
	{
		return m_strength;
	}

	void setStrength(string pStrength)
	{
		m_strength = pStrength;
	}

	string getWeakness() const
	{
		return m_weakness;
	}

	void setWeakness(string pWeakness)
	{
		m_weakness = pWeakness;
	}

	void setTitle(string title)
	{
		this->m_title = title;
	}

	virtual string getName() const
	{
		return m_title + " " + Character::getName();
	}

	virtual void displayInfo() const
	{
		cout << "Creating character " << m_name << " with a health of " << m_health << " hp." << endl;
		cout << "This character weilds the " << m_weapon.getWeaponName() << " which "
			<< m_weapon.getDescription() << " and deals " << m_weapon.getDamageValue() << " damage " << m_weapon.getSpecialAbility();
	}
};

class Rock : public Character
{
private:
	string m_title;
	string m_strength;
	string m_weakness;
	//invisible/ hard to detect, deals low damage

public:
	Rock(string pName, int pHealth, Weapon pWeapon, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth, pWeapon)
	{
		setStrength("Invisible to enemies - *Increased Evasion*");
		setWeakness("Flimsy - *Low Melee Damage*");
		setTitle("See-Through");
	}

	string getStrength() const
	{
		return m_strength;
	}

	void setStrength(string pStrength)
	{
		m_strength = pStrength;
	}

	string getWeakness() const
	{
		return m_weakness;
	}

	void setWeakness(string pWeakness)
	{
		m_weakness = pWeakness;
	}

	void setTitle(string title)
	{
		this->m_title = title;
	}

	virtual string getName() const
	{
		return m_title + " " + Character::getName();
	}

	virtual void displayInfo() const
	{
		cout << "Creating character " << m_name << " with a health of " << m_health << " hp." << endl;
		cout << "This character weilds the " << m_weapon.getWeaponName() << " which "
			<< m_weapon.getDescription() << " and deals " << m_weapon.getDamageValue() << " damage " << m_weapon.getSpecialAbility();
	}
};


/*
enum ElementType { Dummy, Air, Rock, Lightning, Flame };
enum SpecialAbilityType {Dummy, Invisible, Tough, Quick, Fireproof };
enum TitleType { Dummy, Spooky, Goofy, Invincible, Dashing };

class Element : public Character
{
private:
	string m_elementType;

public:
	Element(string pName, int pHealth, string pElement, string pStrength) : Character(pName, pHealth)
	{
		setElement(pElement);
	}

	string getElement() const
	{
		return m_elementType;
	}

	void setElement(string pElement)
	{
		m_elementType = pElement;
	}
};

class Ability : public Element
{
private:
	string m_strength;

public:
	Ability(string pName, int pHealth, string pElement, string pStrength) : Element(pName, pHealth, pElement)
	{
		setStrength(pStrength);
	}

	string getStrength() const
	{
		return m_strength;
	}

	void setStrength(string pStrength)
	{
		m_strength = pStrength;
	}
};

class Title : public Ability
{
private:
	string m_title;

public:
	Title(string pName, int pHealth, string pElement, string pStrength, string pTitle) : Ability(pName, pHealth, pElement, pStrength)
	{
		setTitle(pTitle);
	}

	void setTitle(string pTitle)
	{
		this->m_title = pTitle;
	}

	virtual string getName() const
	{
		return m_title + " " + Character::getName();
	}
};
*/

