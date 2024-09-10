#pragma once
#include<iostream>

using namespace std;

class Circle {
	int radius;
	double pi = 3.14;


public :
	Circle();
	Circle(int);
	void CalculateArea();
	void CalculateCircum();
	void Display();
	Circle operator+(Circle  &);
	Circle operator-(Circle&);
	Circle operator++(int no);
	Circle operator--(int no);
	bool operator<(Circle&);
	bool operator>(Circle&);
	bool operator==(Circle&);
	friend ostream& operator <<(ostream&, Circle & );
	friend istream& operator>> (istream&, Circle&);
	



};

