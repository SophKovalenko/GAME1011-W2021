#include "Weapon.h"
#include <cstdlib>

WeaponArray::WeaponArray(int arraySize)
{
	this->arraySize = 0;
	if (arraySize < 0) // error detection
	{
		cout << "ERROR: Array size invalid" << endl;
		//exit(0);
	}
	else
	{
		this->arraySize = arraySize;
	}

	aPtr = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		*(aPtr + i) = 0;
	}

}
	WeaponArray::WeaponArray(const WeaponArray & obj)
	{
		arraySize = obj.arraySize;
		aPtr = new int[arraySize];
		
		for (int i = 0; i < arraySize; i++)
		{
			*(aPtr + i) = *(obj.aPtr + i);
		}

	}

	WeaponArray::~WeaponArray()
	{
		if (arraySize > 0)
		{
			delete[] aPtr;
		}
	}

	int& WeaponArray::operator[] (int sub) const
	{
		// Check invalid subscript entry
		if (sub < 0 || sub >= arraySize)
		{
			cout << "ERROR: Subscript out of range." << endl;
			//exit(0);
		}

		return aPtr[sub]; // correct subscript
	}