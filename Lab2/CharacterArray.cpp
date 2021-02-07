#include "CharacterArray.h"
#include <cstdlib>
#include <string>

CharacterArray::CharacterArray(int arraySize)
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
	CharacterArray::CharacterArray(const CharacterArray & obj)
	{
		arraySize = obj.arraySize;
		aPtr = new int[arraySize];
		
		for (int i = 0; i < arraySize; i++)
		{
			*(aPtr + i) = *(obj.aPtr + i);
		}

	}

	CharacterArray::~CharacterArray()
	{
		if (arraySize > 0)
		{
			delete[] aPtr;
		}
	}

	int& CharacterArray::operator[] (int sub) const
	{
		// Check invalid subscript entry
		if (sub < 0 || sub >= arraySize)
		{
			cout << "ERROR: Subscript out of range." << endl;
			//exit(0);
		}

		return aPtr[sub]; // correct subscript
	}