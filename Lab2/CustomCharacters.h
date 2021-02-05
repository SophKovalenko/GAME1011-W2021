#pragma once
#include <iostream>
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
	Ghost(string pName, int pHealth, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth)
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

	string getName() const
	{
		return m_title + " " + Character::getName();
	}
};

class Rock : public Character
{
private:
	string m_title;
	string m_strength;
	string m_weakness;

public:
	Rock(string pName, int pHealth, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth)
	{
		setStrength(m_strength);
		setWeakness(m_weakness);
		setTitle(m_title);
	}

	// tough, deal & takes a lot of damage
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

	string getName() const
	{
		return m_title + " " + m_name;
	}
};

class Lightning : public Character
{
private:
	string m_title;
	string m_strength;
	string m_weakness;

public:
	Lightning(string pName, int pHealth, string pStrength, string pWeakness, string pTitle) : Character(pName, pHealth)
	{
		setStrength(m_strength);
		setWeakness(m_weakness);
		setTitle(m_title);
	}

	// quick, hard to hit (evasive), hard to block
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

	string getName() const
	{
		return m_title + " " + m_name;
	}
};