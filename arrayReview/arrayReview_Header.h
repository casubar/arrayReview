#pragma once

const int ROW_SIZE = 5;
const int COL_SIZE = 3;


int testSum(int a, int b);

// fill array
void fillArray(int myList[], int size);

// display array
void dispArray(int myList[][COL_SIZE], int numOfRows);

// get list average
double listAverage(int myList[], int size);

// get sum by row
double sumByRow(int myList[][COL_SIZE], int rowToGetSum);

// get sum of each individual row
void getSumEachRow(int myList[][COL_SIZE], int numOfRows);
