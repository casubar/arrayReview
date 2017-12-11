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
	int sum;
	int theList[NUM_ROW];

	cout << "enter " << NUM_ROW << " integers:" << endl;
	fillArray(theList, NUM_ROW);
	dispArray(theList, NUM_ROW);

	cout << endl;
	cout << "press any key! " << endl;
	cin >> p;
    return 0;
}

