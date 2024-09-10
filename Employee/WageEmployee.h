#pragma once
#include "Employee.h"

using namespace std;

class WageEmployee : public Employee {

	int rate;
	int hour;

public :
	WageEmployee();
	WageEmployee(int, const char*, int, int, int, int, int);
	void Display();
	int TotalSal();
};
