#include <iostream>
#include "SimpleVector.h"
#include "SearchVector.h"
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


	SearchableVector<int> iTable(size);
	SearchableVector<double> dTable(size);

	for (int i = 0; i < size; i++)
	{
		iTable[i] = (i * 5);
		dTable[i] = (i * 3.25);
	}

	cout << "These values are in intTable:\n";
	iTable.print();

	cout << "These values are in doubleTable:\n";
	dTable.print();

	//Search the vectors
	int result;
	cout << "Searching for the number in iTable.\n";

	result = iTable.findItem(5);
	if (result == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result << endl;
	}

	return 0;
}