#include "stdafx.h"
#include "CppUnitTest.h"

#include "../arrayReview/header_arrayReview.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const int NUM_ROW = 5;
const int NUM_COL = 3;

int multiDimList_test[][NUM_COL] = {
{ 1,2,3 },
{ 4,5,6 },
{ 7,8,9 },
{ 10,11,12 },
{ 13,14,15 } };

int secondList_test[][NUM_COL] = { 
{ 21,32,61 },
{ 42,11,23 },
{ 17,28,59 },
{ 10,53,12 },
{ 31,14,15 } };

int thirdList_test[NUM_ROW] = 
{52,23,34,65,86};


namespace UnitTest1_arrayReview
{		
	
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(test_sum) {
			Assert::AreEqual(testSum(3, 3), 6.0);
		}

		TEST_METHOD(check_sum_by_row) {
			Assert::AreEqual(sumByRow(multiDimList_test, 2), 24.0);
		}

		TEST_METHOD(check_sum_by_column) {
			Assert::AreEqual(getSumByColumn(multiDimList_test, 1, NUM_ROW), 40.0);
		}

		TEST_METHOD(check_sum_of_individual_column_0) {
			Assert::AreEqual(checkColZero(multiDimList_test, NUM_ROW), 35.0);
		}

		TEST_METHOD(check_sum_of_individual_column_1) {
			Assert::AreEqual(checkColOne(multiDimList_test, NUM_ROW), 40.0);
		}
		TEST_METHOD(check_sum_of_individual_column_2) {
			Assert::AreEqual(checkColTwo(multiDimList_test, NUM_ROW), 45.0);
		}

		TEST_METHOD(check_largest_row_zero_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 0), 42.0);
		}

		TEST_METHOD(check_largest_row_one_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 1), 53.0);
		}

		TEST_METHOD(check_largest_row_two_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 2), 61.0);
		}
		TEST_METHOD(check_largest_row_element_0) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 0), 61.0);
		}
		TEST_METHOD(check_largest_row_element_1) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 1), 42.0);
		}
		TEST_METHOD(check_largest_row_element_2) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 2), 59.0);
		}
		TEST_METHOD(check_largest_row_element_3) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 3), 53.0);
		}
		TEST_METHOD(check_largest_row_element_4) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 4), 31.0);
		}
	
	};
}