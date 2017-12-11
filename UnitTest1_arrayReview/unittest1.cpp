#include "stdafx.h"
#include "CppUnitTest.h"

#include "../arrayReview/arrayReview_Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_arrayReview
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(test_sum)
		{
			Assert::AreEqual(testSum(3, 3), 6);
		}

	};
}