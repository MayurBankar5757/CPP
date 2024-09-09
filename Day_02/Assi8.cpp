#include<iostream>
using namespace std;
bool isprime(int);
void main() {
	int a;
	cout << "\n\t Enter the number";
	cin >> a;
    
	bool prime = isPrime(a);
	if (prime) {
		cout << "\n\t Prime Number";
	}
	else
	{
		cout << "\n\t Not Prime Number";

	}
}

bool isPrime(int a) {

	if (a <= 1) {
		return false;
	}

	for (int i = 2; i <= a / 2; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}