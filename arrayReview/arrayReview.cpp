// arrayReview.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "arrayReview_Header.h"


using namespace std;

int main()
{
	char p;
	int sum;

	sum = testSum(3, 3);
	cout << "sum is = " << sum;


	cout << endl;
	cout << "press any key! " << endl;
	cin >> p;
    return 0;
}

