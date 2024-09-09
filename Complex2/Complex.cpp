#include"Complex.h";

using namespace std;

Complex::Complex() {
	real = img = 2;
}

Complex::Complex(int real, int img ) {

	this->real = real;
	this->img = img;


}
void Complex:: Display() {
	
	if (img > 0) {
		cout << "\n\t" << real << "+" << img <<"i";

	}
	else {
		cout << "\n\t" << real << img<<"i";
	}
}

void Complex::setReal(int real) {
	this->real = real;

}
void Complex::setImg(int img) {
	this->img = img;
}

int Complex::getReal() {
	return real;
}
int Complex::getImg() {
	return img;
}