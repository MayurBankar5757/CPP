#pragma once
#include<iostream>

using namespace std;

class Complex {

	int real;
	int img;
	

public :
	Complex();
	Complex(int, int);
	void Display();
	Complex operator+ (Complex&);
	Complex operator- (Complex&);
	Complex operator* (Complex&);
	friend Complex& operator+(int no, Complex&);
	int& operator[](int);
   
	

};