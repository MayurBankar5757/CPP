#pragma once
#include<iostream>

using namespace std;

class Array {
	int size;
	int* arr;

public :
	Array();
	Array(int);
	Array(Array &);
	void Display();
	friend istream& operator>>(istream &,Array&);
	~Array();
};