#pragma once
#include <string>
using namespace std;

class Weapon 
{
private:
	string m_weaponName,
		m_description,
	    m_specialAbility;
	int m_damageValue;

public:
	Weapon()
	{}

	Weapon(string pWeaponName, string pDescription, int pDamageValue, string pSpecialAbility)
	{
		setWeaponName(pWeaponName);
		setDescription(pDescription);
		setDamageValue(pDamageValue);
		setSpecialAbility(pSpecialAbility);

	}
	string getWeaponName() const
	{
		return m_weaponName;
	}

	void setWeaponName(string pWeaponName)
	{
		m_weaponName = pWeaponName;
	}

	string getDescription() const
	{
		return m_description;
	}

	void setDescription(string pDescription)
	{
		m_description = pDescription;
	}

	int getDamageValue() const
	{
		return m_damageValue;
	}

	void setDamageValue(int pDamageValue)
	{
		m_damageValue = pDamageValue;
	}


	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string pSpecialAbility)
	{
		m_specialAbility = pSpecialAbility;
	}

	friend ostream& operator<<(ostream& out, Weapon pWeapon)
	{
		out << pWeapon.getWeaponName() << " " << pWeapon.getDescription() << " " << pWeapon.getDamageValue()<< " " << pWeapon.getSpecialAbility();
		return out;
	}
};
