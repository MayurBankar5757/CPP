#include<iostream>

using namespace std;

template<class T>
void swap(T a, T b) {

	T temp;
	cout << "\n\t After Swap : " << a <<" "<< b;
	temp = a;
	a = b;
	b = temp;
	cout << "\n\t After Swap : " << a <<" "<<b;

}

void main() {

	int a = 10;
	int b = 20;
	swap('A', 'B');

}