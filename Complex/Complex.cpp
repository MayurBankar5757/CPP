#define _CRT_SECURE_NO_WARNINGS
#include "Complex.h"

Complex::Complex() {
	real = img = 1;
}
Complex::Complex(int r, int i) {
	real = r;
	img = i;

}
void Complex::Display() {
	cout << "\n\t" << real << "+" << img << "i";
}

Complex Complex :: operator+(Complex& obj) {

	Complex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;

	return temp;
}
Complex Complex :: operator-(Complex& obj) {

	Complex temp;
	temp.real = this->real - obj.real;
	temp.img = this->img - obj.img;

	return temp;
}
Complex Complex :: operator+(Complex& obj) {

	Complex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;

	return temp;
}
Complex Complex :: operator*(Complex& obj) {

	Complex temp;
	temp.real = this->real * obj.real;
	temp.img = this->img * obj.img;

	return temp;
}

Complex& operator+(int no, Complex c1) {
	Complex temp;
	
}
