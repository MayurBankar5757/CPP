#include<iostream>

using namespace std;

void main() {

	int num,sum=0;

	cout << "\n\t Enter a Number";
	cin >> num;

	while (num > 0) {
		int n = num % 10;
		sum += n * n * n;
		num = num / 10;
	}

	if (num == sum) {
		cout << "Noumber is Amstrong";

	}
	else {
		cout << "Noumber is not  Amstrong";
	}
}