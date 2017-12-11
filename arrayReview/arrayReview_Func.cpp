#include "stdafx.h"
#include <iostream>


const int ROW_SIZE = 5;
const int COL_SIZE = 3;


int testSum(int a, int b) {
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