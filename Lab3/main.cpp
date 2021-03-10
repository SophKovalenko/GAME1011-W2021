#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
	const int size = 12;

	SimpleVector<int> intTable(size);
	SimpleVector<double> doubleTable(size);

	for (int i = 0; i < size; i++)
	{
		intTable[i] = (i * 3);
		doubleTable[i] = (i * 5.72);
	}

	cout << "These values are in intTable:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	return 0;
}