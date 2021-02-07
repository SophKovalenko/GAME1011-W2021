#pragma once

class Weapon
{
private:
	string m_weaponName,
		m_description,
		m_damageValue;
	    m_specialAbility;

public:
	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string specialAbility)
	{
		m_specialAbility = specialAbility;
	}

};
