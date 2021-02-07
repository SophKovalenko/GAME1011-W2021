#pragma once
#include <iostream>
#include <string>
using namespace std;

class CharacterArray
{
private:
	int* aPtr;
	int arraySize;
	
public:
	CharacterArray(int); //convert constructor
	CharacterArray(const CharacterArray&); //Copy constructor
	~CharacterArray();

	int size() const
	{
		return arraySize;
	}

	int& operator[] (int) const;

};