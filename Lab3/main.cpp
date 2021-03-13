#include <iostream>
#include "SimpleVector.h"
#include "SearchVector.h"
#include "SortVector.h"
#include <ctime>
using namespace std;

int main()
{
	int size = 12; // Size for all vectors

	cout << "SIMPLE VECTOR DEMO: " << endl; // Simple vector demo
	cout << "*******************" << endl << endl;

	SimpleVector<int> simpleIntTable(size);
	SimpleVector<double> simpleDoubleTable(size);

	for (int i = 0; i < size-1; i++)
	{
		simpleIntTable[i] = (i * 3);
		simpleDoubleTable[i] = (i * 5.72);
	}

	cout << "These values are in intTable:\n";
	simpleIntTable.print();
	simpleIntTable.pop_back();
	simpleIntTable.push_back();
	cout << endl << endl;

	cout << "These values are in doubleTable:\n";
	simpleDoubleTable.print();
	simpleDoubleTable.pop_back();
	simpleDoubleTable.push_back();
	cout << endl << endl;

	cout << "SEARCHABLE VECTOR: " << endl; // Searchable vector demo
	cout << "*****************" << endl << endl;

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

	cout << endl;

	//Search the vectors
	int result1, result2, choice1;
	double choice2;

	cout << "What number in intTable would you like to search for?  ";
	cin >> choice1;
	cout << endl;
	cout << "Searching for the number " << choice1 << " in intTable.\n";

	result1 = searchIntTable.binarySearch(choice1);
	if (result1 == -1)
	{
		cout << "The number was not found." << endl;
	}
	else
	{
		cout << "The number was found at subscript " << result1 << endl;
	}

	cout << "What number would you like to search for?  ";
	cin >> choice2;
	cout << endl;
	cout << "Searching for the number " << choice2 << " in doubleTable.\n";

	result2 = searchDoubleTable.binarySearch(choice2);
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
	cout << "*****************" << endl << endl;

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

	cout << endl;

	cout << "These values are the unsorted values in doubleTable:\n";
	sortDoubleTable.print();

	cout << endl << endl;

	cout << "These values are the sorted values in intTable:\n";
	sortIntTable.SortArray();
	sortIntTable.print();

	cout << endl;

	cout << "These values are the sorted values in doubleTable:\n";
	sortDoubleTable.SortArray();
	sortDoubleTable.print();

	return 0;
}

