// arrayReview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "arrayReview_Header.h"

using namespace std;

const int NUM_ROW = 5;
const int NUM_COL = 3;


int main()
{
	char p;
	int sum, rowToSum;
	int theList[NUM_ROW];
	int multiDimList[][NUM_COL] = { {1,2,3},
							        {4,5,6},
							        {7,8,9},
							        {10,11,12},
							        {13,14,15} };


	double arrayAverage, sumRow;

	rowToSum = 2;
	dispArray(multiDimList, NUM_ROW);
	sumRow = sumByRow(multiDimList, rowToSum);
	cout << endl;
	cout << "the sum of row " << rowToSum << " is = " << sumRow;

	cout << endl << endl;
	getSumEachRow(multiDimList, NUM_ROW);

	cout << endl;
	cout << "press any key! " << endl;
	cin >> p;
    return 0;
}

