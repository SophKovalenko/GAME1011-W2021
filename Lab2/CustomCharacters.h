#pragma once
#include <iostream>
# include "Character.h"
using namespace std;

class Ghost : public Character
{
	//string m_name;
	//string m_weakness;
	//string m_specialAbility;
	//invisible/ hard to detect, deals low damage

public: 
	Ghost(string pName, int pHealth, string pStrength, string pWeakness, string pSpecialAbility)
	{
		m_name = pName;
		m_health = pHealth;
		m_strength = pStrength;
		m_weakness = pWeakness;
		m_specialAbility = pSpecialAbility;
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

	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string pSpecialAbility)
	{
		m_specialAbility = pSpecialAbility;
	}
};

class Rock : public Character
{
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

	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string pSpecialAbility)
	{
		m_specialAbility = pSpecialAbility;
	}
};

class Lightning : public Character
{
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

	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string pSpecialAbility)
	{
		m_specialAbility = pSpecialAbility;
	}
};