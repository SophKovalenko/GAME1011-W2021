#pragma once
#include <iostream>
using namespace std;

class WeaponArray
{
private:
	int* aPtr;
	int arraySize;
public:
	WeaponArray(int); //convert constructor
	WeaponArray(const WeaponArray&); //Copy constructor
	~WeaponArray();
	int size() const
	{
		return arraySize;
	}

	int& operator[] (int) const;

};