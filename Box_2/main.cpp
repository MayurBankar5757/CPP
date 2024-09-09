#include"Box.h";

using namespace std;

void main() {

	Box b1;
	b1.Display();


	Box b2(10, 20, 30);
	b2.Display();

	b1.setDepth(10.0);
	b1.setHeight(20.9);
	b1.Display();


}