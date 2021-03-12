#pragma once
#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
	SearchableVector(int size) : SimpleVector<T>(size) {}
	SearchableVector(const SearchableVector& obj) : SimpleVector<T>(obj) {}
	SearchableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {} 
	
	int binarySearch(T item);
};


template<class T>
int SearchableVector<T>::binarySearch(T item) // function for binary search
{
	int first = 0,
		last = this->size() - 1,
		middle,
		position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (this->operator[](middle) == item)
		{
			found = true;
			position = middle;
		}
		else if (this->operator[](middle) > item)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}