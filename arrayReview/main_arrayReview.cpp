// arrayReview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


#include "header_arrayReview.h"

using namespace std;

const int NUM_ROW = 5;
const int NUM_COL = 3;


int main()
{
	
	int multiDimList[][NUM_COL] = { 
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12},
		{13,14,15} };

	int list_two[][NUM_COL] = {
		{ 21,32,61 },
		{ 42,11,23 },
		{ 17,28,59 },
		{ 10,53,12 },
		{ 31,14,15 } };


	char p;
	int sum, rowToSum, rowToGetLargest, columnToGetLargest;
	int theList[NUM_ROW];
	double arrayAverage, sumRow, largestElementRow, largestElementColumn;

	rowToSum = 2;
	dispArray(multiDimList, NUM_ROW);
	sumRow = sumByRow(multiDimList, rowToSum);
	cout << endl;
	cout << "the sum of row " << rowToSum << " is = " << sumRow;

	cout << endl << endl;
	cout << "the sum of individual rows:";
	cout << endl;
	getSumEachRow(multiDimList, NUM_ROW);
	
	cout << endl;
	cout << "the sum of individual columns";
	getSumOfIndividualColumn(multiDimList, NUM_ROW);

	cout << endl;
	cout << "================================" << endl;
	//display matrix
	dispArray(list_two, NUM_ROW);
	cout << "================================" << endl;
	// get user input on what row to find the largest row element
	cout << "Find the largest element in any row" << endl;
	cout << "Enter row number [1-5]: ";
	cin >> rowToGetLargest;
	// get lartest row element
	largestElementRow = getLargestRowElement(list_two, NUM_ROW, rowToGetLargest - 1);
	// print message of the largest element on the chosen row
	cout << "Largest element in row " << rowToGetLargest << " is = " << largestElementRow << endl;

	// largest column element
	cout << endl;
	cout << "Find the largest element in any column" << endl;
	cout << "Enter column number [1-3]: ";
	cin >> columnToGetLargest;
	// get largest column
	largestElementColumn = getLargestColumnElement(list_two, NUM_ROW, columnToGetLargest -1);
	// print message of the largest element on the chosen column
	cout << "Largest element in column " << columnToGetLargest << " is = " << largestElementColumn << endl;

	cout << endl;
	// display all largest element in each row and column
	cout << "Largest element in all row:" << endl;
	getLargestElementEachRow(list_two, NUM_ROW);
	cout << endl;
	cout << "Largest element in all column:" << endl;
	getLargestElementEachColumn(list_two, NUM_ROW);

	
	
	


	cout << endl;
	cout << "press any key! " << endl;
	cin >> p;
    return 0;
}

