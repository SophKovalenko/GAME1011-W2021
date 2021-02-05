#pragma once
#include <iostream>
using namespace std;

class WeaponArray
{
private:
	int* aPtr;
	int arraySize;
	string m_specialAbility;
public:
	WeaponArray(int); //convert constructor
	WeaponArray(const WeaponArray&); //Copy constructor
	~WeaponArray();

	int size() const
	{
		return arraySize;
	}

	string getSpecialAbility() const
	{
		return m_specialAbility;
	}

	void setSpecialAbility(string specialAbility) 
	{
		m_specialAbility = specialAbility;
	}

	int& operator[] (int) const;

};