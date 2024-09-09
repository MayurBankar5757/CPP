#include"Product.h";

using namespace std;

void main() {

	Product p1;
	p1.showProduct();

	Product p2 ("Rohan",10,2000.0);
	p2.showProduct();

	Product p3(p2);

	p3.showProduct();
}