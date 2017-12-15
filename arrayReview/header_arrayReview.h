#pragma once

const int ROW_SIZE = 5;
const int COL_SIZE = 3;


double testSum(int a, int b);

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

// get sum by column
double getSumByColumn(int myList[][COL_SIZE], int colToGetSum, int numOfRows);

// get sum of each individual column
void getSumOfIndividualColumn(int myList[][COL_SIZE], int numOfRows);
// check sum of each individual column
double checkColZero(int myList[][COL_SIZE], int numOfRows);
// check sum column 1; myList[][1]
double checkColOne(int myList[][COL_SIZE], int numOfRows);
// check sum column 2: myList[][2]
double checkColTwo(int myList[][COL_SIZE], int numOfRows);
// execute sum of rows and column 
void execute_sum_of_rows_column(int myList[][COL_SIZE], int numOfRows);

//===================================================================================
// largest element in the individual column
double getLargestColumnElement(int myList[][COL_SIZE], int numOfRows, int colToFind);
// largest element in the individual row
double getLargestRowElement(int myList[][COL_SIZE], int numOfRows, int rowToFind);
// largest element in each row
void getLargestElementEachRow(int myList[][COL_SIZE], int numOfRows);
// largest element in each column
void getLargestElementEachColumn(int myList[][COL_SIZE], int numOfRows);
// execute largest element
void execute_largest_element(int myList[][COL_SIZE], int numOfRows);

//=====================================================================================
// sequential/linear search
int seqSearch(const int myList[][COL_SIZE], int numOfRows, int numToSearch, int colToSearch);
// execute linear search
void execute_seq_search(int myList[][COL_SIZE], int num_of_rows);

// ************************* FIBER LOSS TESTER ********************
// get fiber loss
double get_fiber_loss();
// get fiber limit
double get_fiber_limit();
// get margin
double get_fiber_margin();
// get length
double get_fiber_length();
// get length limit
double get_length_limit();
// get margin value
double get_margin_value(double fiber_loss, double fiber_limit);
// get margin result pass/fail
int get_margin_result(double fiber_loss, double fiber_limit);
// execute fiber margin
void execute_fiber_margin();
