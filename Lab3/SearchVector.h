#pragma once
#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
	SearchableVector(int size) : SimpleVector<T>(size) {}
	SearchableVector(const SearchableVector& obj) : SimpleVector<T>(obj) {}
	SearchableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {} 
	
	int findItem(T);
};

template<class T>
int SearchableVector<T>::findItem(T item)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->operator[](i) == item)
		{
			return i;
		}
	}

	return -1;
}
