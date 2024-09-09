#pragma once

#include<iostream>

using namespace std;

class Complex {
	int real;
	int img;

public:
	Complex();
	Complex(int, int);
	void setReal(int);
	void setImg(int);
	int getReal();
	int getImg();
	void Display();

};