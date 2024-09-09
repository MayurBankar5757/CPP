#pragma once _CRT_SECURE_NO_WARNINGS;
#include<iostream>

using namespace std;

class Product {

	char* product_name;
	int product_code;
	float unit_price;

public:

	Product();
	Product(const char*, int, float);
	void showProduct();
	~Product();


};
