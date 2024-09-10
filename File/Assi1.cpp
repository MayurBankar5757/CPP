#include<fstream>
#include<iostream>

using namespace std;

void main() {
	char ch;

	ifstream fin("D:\\Know-it\\TEXT.txt");
	ofstream out;
	if (fin) {
		cout << "\n\tAvailable";
	}
	else {
		cout << "\n\t Not Available";

	}

	out << "ABC";
	fin.close();
}