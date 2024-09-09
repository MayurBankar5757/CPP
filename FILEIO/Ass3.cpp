#include<iostream>
#include<fstream>
using namespace std;



// D:\ test.txt read ifstream
// C:\test.txt   write ofstream
void main()
{
	ofstream fout("abc.txt");
	if (!fout) {
		cout << "\n\t File Opening ERROR ";
		return;
	}
	fout << "India is My Country ";
	fout.close();
}
