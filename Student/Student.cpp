#define _CRT_SECURE_NO_WARNINGS

#include"Student.h"

using namespace std;

Student::Student():dob(),doa() {
	rno = 1;
	strcpy(name, "ABC");
}

Student::Student(int r, const char* nm, int d, int m, int y, int d1, int m2, int y2):dob(d, m, y),doa(d1,m2,y2) {
	rno = r;
	strcpy(name, nm);
}

void Student::Display() {
	cout << "\n\t Student Details : ";
	cout << "\n\tRoll No : " << rno;
	cout << " Name : " << name;
	cout << "\n\tDate of Birth : ";
	dob.Display();
	cout << "\n\tDate of Admission : ";
	doa.Display();

}
void Student::Accept()  {
	

	cout << "Enter Student Data ";
	cin >> rno >> name;
	cout << "Enter Date of Birth ";
	dob.Accept();
	cout << "Enter Date of Admission ";

	doa.Accept();
	

}
