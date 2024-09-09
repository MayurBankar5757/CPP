#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	ifstream fin;
	fin.open("d:\\test.txt");
	char ch;
	int chararacter = 0, line = 0, spaces = 0;
	while (fin) {
		ch = fin.get();
		cout << ch;
		chararacter++;
		if (ch == '\n')
			line++;
		if (ch == ' ')
			spaces++;
	}
	cout << "\n\n\t Characters : " << chararacter;
	cout << "\n\t Spaces " << spaces;
	cout << "\n\t Lines : " << line;
	fin.close();
	cout << "\n\n\n";
}