#include "Complex.h"

using namespace std;

void main() {

	Complex c1(20, 30);
	Complex c2(30, 40);
	Complex c3(20, 30);
	Complex c4;

	c4 = c1.operator+(c3);

	c4.Display();


}