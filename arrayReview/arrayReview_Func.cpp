#include "stdafx.h"
#include <iostream>


int testSum(int a, int b) {
	return a + b;
}


// fill array
void fillArray(int myList[], int size) {
	for (int list = 0; list < size; list++) {
		std::cin >> myList[list];
	}
}

// display array
void dispArray(int myList[], int size) {
	for (int list = 0; list < size; list++) {
		std::cout << myList[list] << " ";
	}
}