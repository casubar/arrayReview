#include "stdafx.h"
#include "CppUnitTest.h"

#include "../arrayReview/arrayReview_Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const int NUM_ROW = 5;
const int NUM_COL = 3;

int multiDimList_test[][NUM_COL] = { { 1,2,3 },
{ 4,5,6 },
{ 7,8,9 },
{ 10,11,12 },
{ 13,14,15 } };



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

	};
}