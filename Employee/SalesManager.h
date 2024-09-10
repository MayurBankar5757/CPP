#pragma once
#include "Manager.h"
#include "SalesPerson.h"

using namespace std;

class SalesManager : public Manager, SalesPerson {

public:

	SalesManager(int, const char*, int, int, int, int, int, int, int,int,int);
	void Display() override;
};