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

// get sum by row
double sumByRow(int myList[][COL_SIZE], int rowToGetSum) {
	double sum;

	sum = 0;
	for (int col = 0; col < COL_SIZE; col++) {
		sum = sum + myList[rowToGetSum][col];
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

//=====================================================================================

// largest element in the individual column
double getLargestColumnElement(int myList[][COL_SIZE], int numOfRows, int colToFind) {
	double temp;

	temp = 0;
	for (int row = 0; row < numOfRows; row++) {
		// is myList[row][col] > myList[row + 1][0] && myList[row][col] >= temp
		if (myList[row][colToFind] > myList[row + 1][colToFind] && myList[row][colToFind] >= temp) {
			// if true
			// temp = myList[row][col]
			temp = myList[row][colToFind];
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

//=====================================================================================

// sorting