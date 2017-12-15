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

	char p, cont;
	int sum, rowToSum, rowToGetLargest, columnToGetLargest, choyz;
	int theList[NUM_ROW];
	double arrayAverage, sumRow, largestElementRow, largestElementColumn;

	
	do {
		cout << " ------ M E N U ------ " << endl;
		cout << "(1) Sum Of Rows / Columns" << endl;
		cout << "(2) Largest Element" << endl;
		cout << "(3) Search Any Number In The Table" << endl;
		cout << "(0) E X I T" << endl;
		cout << "Enter Your Choice: ";
		cin >> choyz;
		switch (choyz) {			
		case 1: {  // ****** sum of rows / column *******
			cout << "-------------------------" << endl;
			cout << "TOTAL ROWS / COLUMN" << endl;
			execute_sum_of_rows_column(multiDimList, NUM_ROW);
			break;
		}
		case 2: {  // ******* largest element *********
			cout << "------------------------" << endl;
			cout << "LARGEST ELEMENT" << endl;		
			execute_largest_element(list_two, NUM_ROW);
			break;
		}
		case 3: {  // **** sequential / linear search ****
			cout << "Search any number from the table" << endl;
			execute_seq_search(list_two, NUM_ROW);
			break;
		}				
		case 0: {
			return 0;
		}
		default:
			break;
		}
		cout << endl;
		cout << "C-O-N-T-I-N-U-E <Y/N> -->  ";
		cin >> cont; 
		cout << endl << endl;
	} while (cont != 'n' && cont != 'N');






	





    return 0;
}

