#pragma once
#include<iostream>
#include "Date.h"

using namespace std;

class Person {

	char name[20];
	Date dob;

public:
	Person();
	Person(const char*, int, int, int);
	void Display();
};
