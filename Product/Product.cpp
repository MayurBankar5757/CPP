#define _CRT_SECURE_NO_WARNINGS

#include"Product.h";


using namespace std;

Product::Product() {
	product_code = 0;
	unit_price = 0;

	product_name = new char[4];
	strcpy(product_name, "NA");

}

Product::Product(const char* c, int code, float p) {

	product_name = new char[strlen(c)+1];
	strcpy(product_name, c);
	product_code = code;
	unit_price = p;
}

void Product::showProduct() {

	cout << "\n\t Product Details : ";
	cout << "\n\t Product Name : " << product_name;

	cout << "\n\t Product Price : " << unit_price;
	cout << "\n\t Product Code : " << product_code;
}

Product :: ~Product() {


	delete[] product_name;
}