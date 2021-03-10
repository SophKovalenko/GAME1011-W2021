#pragma once
#include <cstdlib>
using namespace std;


template <class T>
class SimpleVector
{
private:
	T* aptr;
	int arraySize;
	void subError() const; // bound error message
public:
	SimpleVector(int);  // takes in a size
	SimpleVector(const SimpleVector&);  // copy constructor
	~SimpleVector();

	int size() const
	{
		return arraySize;
	}

	T& operator[](int);
	void print() const;
};

template<class T>
SimpleVector<T>::SimpleVector(int size)
{
	arraySize = size;
	aptr = new T[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = T();
	}
}

template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = obj.aptr[i];
	}
}

template<class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
	{
		delete[] aptr;
	}
}

template<class T>
void SimpleVector<T>::subError() const
{
	cout << "ERROR: Subscript out of range." << endl;
	exit(0); // Quit program
}

template<class T>
T& SimpleVector<T>::operator[](int sub)
{
	if (sub < 0 || sub >= arraySize)
	{
		subError(); // out of bounds
	}

	return aptr[sub];
}

template<class T>
void SimpleVector<T>::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aptr[i] << " ";
	}

	cout << endl;
}