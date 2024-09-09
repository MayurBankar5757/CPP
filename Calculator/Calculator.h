#pragma once
#include<iostream>
using namespace std;

class Calculator {
private:
	int no1;
	int no2;
public:
	void acceptValue();
	void displayValue();
	int Addition();
	int Substraction();
	int Multiplication();
	int Division();
};