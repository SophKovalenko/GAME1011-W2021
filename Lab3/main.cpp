#include <iostream>
#include "SimpleVector.h"
#include "SearchVector.h"
#include "SortVector.h"
#include <ctime>
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

	/*simpleIntTable.pop_back();
	simpleIntTable.print();*/

	cout << "These values are in doubleTable:\n";
	//simpleDoubleTable.push_back();
	simpleDoubleTable.print();

	cout << endl << endl;

	cout << "SEARCHABLE VECTOR: " << endl; // Searchable vector demo
	cout << "*****************" << endl;

	SearchableVector<int> searchIntTable(size);
	SearchableVector<double> searchDoubleTable(size);

	for (int i = 0; i < size; i++)
	{
		searchIntTable[i] = (i * 5); // rand num/ not 1 * rand
		searchDoubleTable[i] = (i * 3.25);
	}

	cout << "These values are in intTable:\n";
	searchIntTable.print();

	cout << "These values are in doubleTable:\n";
	searchDoubleTable.print();

	cout << endl;

	//Search the vectors
	int result1, result2;
	cout << "Searching for the number in intTable.\n";

	result1 = searchIntTable.binarySearch(5);
	if (result1 == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result1 << endl;
	}

	cout << "Searching for the number in doubleTable.\n";

	result2 = searchDoubleTable.binarySearch(6.7);
	if (result2 == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result2 << endl;
	}

	cout << endl << endl;

	cout << "SORTABLE VECTOR: " << endl; // Sortable vector demo
	cout << "*****************" << endl;

	SortableVector<int> sortIntTable(size);
	SortableVector<double> sortDoubleTable(size);

	for (auto count = 0; count < size; count++) // fill the array
	{
		// generate random number
		sortIntTable[count] = rand();
		sortDoubleTable[count] = rand();
	}

	cout << "These values are the unsorted values in intTable:\n";
	sortIntTable.print();

	cout << "These values are the unsorted values in doubleTable:\n";
	sortDoubleTable.print();

	cout << endl;

	cout << "These values are the sorted values in intTable:\n";
	sortIntTable.SortArray();
	sortIntTable.print();

	cout << "These values are the sorted values in doubleTable:\n";
	sortDoubleTable.SortArray();
	sortDoubleTable.print();

	return 0;
}

