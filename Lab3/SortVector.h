#pragma once
#include "SimpleVector.h"
#include <algorithm>
#include <functional>
#include <array>

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
	SortableVector(int size) : SimpleVector<T>(size) {}
	SortableVector(const SortableVector& obj) : SimpleVector<T>(obj) {}
	SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) {}

	void SortArray();
};

template<class T>
void SortableVector<T>::SortArray() 
{
	int sort;
	bool swap;

	do
	{
		swap = false;
		for (auto count = 0; count < (this->size() - 1); count++)
		{
			if (this->operator[](count) > this->operator[](count + 1))
			{
				sort = this->operator[](count);
				this->operator[](count) = this->operator[](count + 1);
				this->operator[](count + 1) = sort;
				swap = true;
			}
		}
	} while (swap);
}
