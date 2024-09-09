#include<iostream>
using namespace std;
void sumAndProduct(int, int, int&, int&);
void main() {
	int a, b;
	cout << "\n\tEnter two numbers";
	cin >> a >> b;

	int sum, product;
	sumAndProduct( a,  b,sum,product);
	cout << "\n\tSum : " << sum;
	cout << "\n\t Product : " << product;


}

void sumAndProduct(int a, int b,int &sum, int &product) {
	sum = a + b;
	product = a * b;
}