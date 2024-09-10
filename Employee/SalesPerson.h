#pragma once
#include "WageEmployee.h"

using namespace std;

class SalesPerson : public WageEmployee {

	int sales;
	int commision;

public:
	SalesPerson();
	SalesPerson(int, const char*, int, int, int, int, int, int, int);
	void Display();
	int TotalSal();

};
