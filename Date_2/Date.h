#pragma once
#include<iostream>
using namespace std;

class Date {
	int day;
	int month;
	int year;

public :
	Date();
	Date(int , int );
	void Display();
};