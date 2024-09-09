#include<iostream>
#include<fstream>
using namespace std;

void main()
{
	ifstream fin("d:\\test.txt",ios::in);
	ofstream fout("test.txt",ios::app);
	char ch;
	while (fin)
	{
		ch = fin.get();
		fout.put(ch);
	}
	fout.close();
	fin.close();
	cout << "\n\n\n";
}
