#pragma once
#include<iostream>

using namespace std;

class Date {

	int date;
	int month;
	int year;

public :
	Date();
	Date(int, int, int);
	void Display();
};