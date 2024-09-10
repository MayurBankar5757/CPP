#include"Circle.h"

using namespace std;

Circle::Circle() {
	radius = 4;
}
Circle::Circle(int r) {
	radius = r;

}

void Circle::CalculateArea() {
	double area = pi * radius * radius;
	cout << "\n\t Area of Circle : " << area;
}
void Circle::CalculateCircum() {
	double cirCum = 2* pi * radius;
	cout << "\n\t Area of Circle : " << cirCum;
}
void Circle::Display() {
	cout << "\n\t Radius : " << radius;
}

Circle Circle :: operator+(Circle  &obj) {

	Circle temp;

	temp.radius = this->radius + obj.radius;
	return temp;

 }
Circle Circle :: operator-(Circle& obj) {

	Circle temp;

	temp.radius = this->radius - obj.radius;
	return temp;

}
Circle Circle :: operator++(int no) {
	// no variable is just a dummy variable it cannot be used in function defination
	radius++;
	return *this;

}
Circle Circle :: operator--(int no) {

	radius--;
	return *this;

}
bool Circle :: operator>(Circle &obj) {

	if (radius > obj.radius) {
		return true;
	 }
	else {
		return false;
	}

}
bool Circle :: operator<(Circle& obj) {

	if (radius < obj.radius) {
		return true;
	}
	else {
		return false;
	}

}
bool Circle :: operator==(Circle& obj) {

	if (radius == obj.radius) {
		return true;
	}
	else {
		return false;
	}

}

ostream& operator <<(ostream  &out, Circle &c1) {

	out << "Radius  : "<<c1.radius;
	return out;
}
istream& operator>>(istream& in, Circle& c1) {

	in >> c1.radius;
	return in;
}



