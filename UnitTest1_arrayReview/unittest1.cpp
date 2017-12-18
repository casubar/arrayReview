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

		TEST_METHOD(sum_by_row) {
			Assert::AreEqual(sumByRow(multiDimList_test, 2), 15.0);
		}

		TEST_METHOD(sum_by_column) {
			Assert::AreEqual(getSumByColumn(multiDimList_test, 1, NUM_ROW), 40.0);
		}

		TEST_METHOD(sum_individual_column_0) {
			Assert::AreEqual(checkColZero(multiDimList_test, NUM_ROW), 35.0);
		}

		TEST_METHOD(sum_individual_column_1) {
			Assert::AreEqual(checkColOne(multiDimList_test, NUM_ROW), 40.0);
		}
		TEST_METHOD(sum_individual_column_2) {
			Assert::AreEqual(checkColTwo(multiDimList_test, NUM_ROW), 45.0);
		}

		TEST_METHOD(largest_row_0_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 1), 42.0);
		}

		TEST_METHOD(largest_row_1_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 2), 53.0);
		}

		TEST_METHOD(largest_row_2_element) {
			Assert::AreEqual(getLargestColumnElement(secondList_test, NUM_ROW, 3), 61.0);
		}
		TEST_METHOD(largest_row_element_0) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 0), 61.0);
		}
		TEST_METHOD(largest_row_element_1) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 1), 42.0);
		}
		TEST_METHOD(largest_row_element_2) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 2), 59.0);
		}
		TEST_METHOD(largest_row_element_3) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 3), 53.0);
		}
		TEST_METHOD(largest_row_element_4) {
			Assert::AreEqual(getLargestRowElement(secondList_test, NUM_ROW, 4), 31.0);
		}
		TEST_METHOD(seq_search_53) {
			Assert::AreEqual(seqSearch(secondList_test, NUM_ROW, 53, 1), 3);
		}
		TEST_METHOD(seq_search_23) {
			Assert::AreEqual(seqSearch(secondList_test, NUM_ROW, 23, 2), 1);
		}
		TEST_METHOD(margin_result_greater_0_less_limit_pass) {
			Assert::AreEqual(get_margin_result(0.08, 1.5), 1);
		}
		TEST_METHOD(margin_result_over_limit_fail) {
			Assert::AreEqual(get_margin_result(-1.0, 1.5), 0);
		}
		TEST_METHOD(margin_less_0_fail) {
			Assert::AreEqual(get_margin_result(2.0, 1.5), 0);
		}
	
	
	};
}