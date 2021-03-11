#include <iostream>
#include "SimpleVector.h"
#include "SearchVector.h"
#include "SortVector.h"
using namespace std;

int main()
{
	const int size = 12; // Size for all vectors

	cout << "SIMPLE VECTOR: " << endl; // Simple vector demo
	cout << "*****************" << endl;

	SimpleVector<int> simpleIntTable(size);
	SimpleVector<double> simpleDoubleTable(size);

	for (int i = 0; i < size; i++)
	{
		simpleIntTable[i] = (i * 3);
		simpleDoubleTable[i] = (i * 5.72);
	}

	cout << "These values are in intTable:\n";
	simpleIntTable.print();

	cout << "These values are in doubleTable:\n";
	simpleDoubleTable.print();

	cout << endl << endl;

	cout << "SEARCHABLE VECTOR: " << endl; // Searchable vector demo
	cout << "*****************" << endl;

	SearchableVector<int> searchIntTable(size);
	SearchableVector<double> searchDoubleTable(size);

	for (int i = 0; i < size; i++)
	{
		searchIntTable[i] = (i * 5);
		searchDoubleTable[i] = (i * 3.25);
	}

	cout << "These values are in intTable:\n";
	searchIntTable.print();

	cout << "These values are in doubleTable:\n";
	searchDoubleTable.print();

	//Search the vectors
	int result;
	cout << "Searching for the number in intTable.\n";

	result = searchIntTable.binarySearch(5);
	if (result == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result << endl;
	}

	result = searchDoubleTable.binarySearch(6.7);
	if (result == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result << endl;
	}

	cout << endl << endl;

	cout << "SORTABLE VECTOR: " << endl; // Sortable vector demo
	cout << "*****************" << endl;

	SortableVector<int> sortIntTable(size);
	SortableVector<double> sortDoubleTable(size);

	for (int i = 0; i < size; i++)
	{
		sortIntTable[i] = (i * 3);
		sortDoubleTable[i] = (i * 5.72);
	}

	cout << "These values are in intTable:\n";
	sortIntTable.SortArray();
	sortIntTable.print();

	cout << "These values are in doubleTable:\n";
	sortDoubleTable.SortArray();
	sortDoubleTable.print();

	return 0;
}

