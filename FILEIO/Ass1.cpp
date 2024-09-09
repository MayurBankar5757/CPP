#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	ifstream fin("d:\\test.txt");
	if (fin)
		cout << "\n\n\t Available ";
	else
		cout << "\n\t Not Available ";

	fin.close();
	cout << "\n\n\n";
}
