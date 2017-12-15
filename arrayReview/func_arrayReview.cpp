#include "stdafx.h"
#include <iostream>


const int ROW_SIZE = 5;
const int COL_SIZE = 3;


double testSum(int a, int b) {
	return a + b;
}

// fill array (user input)
void fillArray(int myList[], int size) {
	for (int list = 0; list < size; list++) {
		std::cin >> myList[list];
	}
}

// display array
void dispArray(int myList[][COL_SIZE], int numOfRows) {
	for (int row = 0; row < numOfRows; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			std::cout << myList[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

// get list average (one dimension array)
double listAverage(int myList[], int size) {
	double sum, average;

	sum = 0;
	average = 0;
	for (int list = 0; list < size; list++) {
		sum = sum + myList[list];
	}
	average = sum / size;
	return average;
}
// ********************* SUM OF ROWS / COLUMN *****************************
// get sum by row
double sumByRow(int myList[][COL_SIZE], int rowToGetSum) {
	double sum;

	sum = 0;
	for (int col = 0; col < COL_SIZE; col++) {
		sum = sum + myList[rowToGetSum - 1][col];
	}
	return sum;
}

// get sum of each individual row
void getSumEachRow(int myList[][COL_SIZE], int numOfRows) {
	double sum;

	sum = 0;
	for (int row = 0; row < numOfRows; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			sum = sum + myList[row][col];			
		}
		std::cout << sum << " ";
		std::cout << std::endl;
		sum = 0;
	}
}

// get sum by column
double getSumByColumn(int myList[][COL_SIZE], int colToGetSum, int numOfRows) {
	double sum;

	sum = 0;
	for (int row = 0; row < numOfRows; row++) {
		sum = sum + myList[row][colToGetSum];
	}
	return sum;
}

// get sum of each individual column
void getSumOfIndividualColumn(int myList[][COL_SIZE], int numOfRows) {
	double sum;

	sum = 0;
	for (int col = 0; col < COL_SIZE; col++) {
		for (int row = 0; row < numOfRows; row++) {
			sum = sum + myList[row][col];
		}
		std::cout << std::endl;
		std::cout << sum;
		sum = 0;
	}
}

// check sum column 0; myList[][0]
double checkColZero(int myList[][COL_SIZE], int numOfRows) {
	double sumColZero;
	int col = 0;

	sumColZero = 0;
	for (int row = 0; row < numOfRows; row++) {
		sumColZero = sumColZero + myList[row][col];
	}
	return sumColZero;
}

// check sum column 1; myList[][1]
double checkColOne(int myList[][COL_SIZE], int numOfRows) {
	double sumColOne = 0;
	int col = 1;

	for (int row = 0; row < numOfRows; row++) {
		sumColOne = sumColOne + myList[row][col];
	}
	return sumColOne;
}

// check sum column 2: myList[][2]
double checkColTwo(int myList[][COL_SIZE], int numOfRows) {
	double sumColTwo = 0;
	int col = 2;

	for (int row = 0; row < numOfRows; row++) {
		sumColTwo = sumColTwo + myList[row][col];
	}
	return sumColTwo;
}

// execute sum of rows and column 
void execute_sum_of_rows_column(int myList[][COL_SIZE], int numOfRows) {
	int rowToSum, sumRow;
	
	// display table
	std::cout << "================================" << std::endl;
	dispArray(myList, numOfRows);
	std::cout << "================================" << std::endl;
	std::cout << "Get the total of row number: ";
	std::cin >> rowToSum;
	sumRow = sumByRow(myList, rowToSum);
	std::cout << "Sum of row " << rowToSum << " is = " << sumRow << std::endl << std::endl;
	std::cout << "The sum of individual rows:" << std::endl;
	getSumEachRow(myList, numOfRows); std::cout << std::endl;
	std::cout << "The sum of individual columns"; std::cout << std::endl;
	getSumOfIndividualColumn(myList, numOfRows); std::cout << std::endl;
}

// ******************** LARGEST ELEMENT *************************

// largest element in the individual column
double getLargestColumnElement(int myList[][COL_SIZE], int numOfRows, int colToFind) {
	double temp;

	temp = 0;
	for (int row = 0; row < numOfRows; row++) {
		// is myList[row][col] > myList[row + 1][0] && myList[row][col] >= temp
		if (myList[row][colToFind -1] > myList[row + 1][colToFind - 1] && myList[row][colToFind - 1] >= temp) {
			// if true
			// temp = myList[row][col]
			temp = myList[row][colToFind - 1];
		}
	}
	return temp;	
}

// largest element in the individual row
double getLargestRowElement(int myList[][COL_SIZE], int numOfRows, int rowToFind) {
	double largestElement;

	largestElement = 0;

	for (int col = 0; col < COL_SIZE; col++) {
		//if myList[row][col] > myList[row][col + 1] && myList[row][col] >= largestElement
		if (myList[rowToFind][col] > myList[rowToFind][col + 1] && myList[rowToFind][col + 1] >= largestElement) {
			largestElement = myList[rowToFind][col];
		}
	}
	return largestElement;	
}

// largest element in each row
void getLargestElementEachRow(int myList[][COL_SIZE], int numOfRows) {
	double largest;

	for (int row = 0; row < numOfRows; row++) {
		// assume the first element is the largest
		largest = myList[row][0];
		for (int col = 1; col < COL_SIZE; col++) {
			if (myList[row][col] > largest) {
				largest = myList[row][col];
			}
		}
		std::cout << "Row " << row + 1 << " is = " << largest;
		std::cout << std::endl;
	}
}

// largest element in each column
void getLargestElementEachColumn(int myList[][COL_SIZE], int numOfRows) {
	double largest;

	for (int col = 0; col < COL_SIZE; col++) {
		// assume the first element is the largest
		largest = myList[0][col];
		for (int row = 1; row < numOfRows; row++) {
			if (myList[row][col] > largest) {
				largest = myList[row][col];
			}
		}
		std::cout << "Column " << col + 1 << " is = " << largest;
		std::cout << std::endl;
	}
}

// execute largest element
void execute_largest_element(int myList[][COL_SIZE], int numOfRows) {
	int rowToGetLargest, largestElementRow, columnToGetLargest, largestElementColumn;
	char disp_All;
	
	// display table
	std::cout << "================================" << std::endl;
	dispArray(myList, numOfRows);
	std::cout << "================================" << std::endl;
	
	// get user input on what row to find the largest row element
	std::cout << "What row number [1-5] to get the largest element: ";
	std::cin >> rowToGetLargest;
	
	// validate row number
	while (rowToGetLargest < 0  || rowToGetLargest > 5) {
		std::cout << "E R R O R !!! Number out of range!" << std::endl;
		std::cout << "Row number [1-5]: ";
		std::cin >> rowToGetLargest;
	}

	// get largest element in the row
	largestElementRow = getLargestRowElement(myList, numOfRows, rowToGetLargest - 1);
	// print message of the largest element on the chosen row
	std::cout << "Largest element in row " << rowToGetLargest << " is = " << largestElementRow; std::cout << std::endl;
	
	// get largest element in the column
	std::cout << std::endl;
	std::cout << "What column number [1-3] to get the largest element: ";
	std::cin >> columnToGetLargest;

	// validate column number
	while (columnToGetLargest < 0 || columnToGetLargest > 3) {
		std::cout << "E R R O R !!! Number out of range!" << std::endl;
		std::cout << "Column number [1-3]: ";
		std::cin >> columnToGetLargest;
	}

	largestElementColumn = getLargestColumnElement(myList, numOfRows, columnToGetLargest);
	std::cout << "Largest element in column " << columnToGetLargest << " is = " << largestElementColumn << std::endl;
	std::cout << std::endl;

	// display all largest element in each row and column
	std::cout << "Display all largest element in each row and column? <Y/N> ==>";
	std::cin >> disp_All;
	if (disp_All == 'y' || disp_All == 'Y') {
		std::cout << std::endl;
		std::cout << "Largest element in all row:" << std::endl;
		getLargestElementEachRow(myList, numOfRows); std::cout << std::endl;
		std::cout << "Largest element in all column:" << std::endl;
		getLargestElementEachColumn(myList, numOfRows);
	}
}

// ********************** SEARCHING **********************

// sequential / linear search
int seqSearch(const int myList[][COL_SIZE], int numOfRows, int numToSearch, int colToSearch) {
	bool found;
	int loc;

	found = false;
	loc = 0;
	while (loc < numOfRows && !found) {
		if (myList[loc][colToSearch] == numToSearch) {
			found = true;
		}
		else {
			loc++;
		}
	}
	if (found) {
		return loc;
	}
	else {
		return -1;
	}
}

// execute linear search
void execute_seq_search(int myList[][COL_SIZE], int num_of_rows) {
	int number_to_find, col_to_find, number_loc;

	
	// ask user which column to search
	// then store column to col_to_find
	std::cout << "Column to search from [1-3]: ";
	std::cin >> col_to_find;

	// validate column
	while (col_to_find < 0 || col_to_find > 3) {
		std::cout << "Column to search from [1-3]: ";
		std::cin >> col_to_find;
	}

	// ask user what number to find
	// then store number to number_to_find
	std::cout << "Number to search: ";
	std::cin >> number_to_find;

	// process seq_search	
	number_loc = seqSearch(myList, num_of_rows, number_to_find, col_to_find - 1);

	if (number_loc >= 0) {  // if number is found
		// then print message of the location of the number
		std::cout << "Location of the number is at column " << col_to_find << " and at row " << number_loc;
	}
	else {  // if number is not found
		// then print message "number not found"
		std::cout << "Number not found!!" << std::endl;
	}

}





//=====================================================================================
// sorting