#define _CRT_SECURE_NO_WARNINGS

#include"Person.h"

using namespace std;

Person::Person():dob() {
	strcpy(name, "ABC");

}

Person::Person(const char* nm, int d, int m, int y):dob(d,m,y) {

	strcpy(name, nm);


}

void Person::Display() {
	cout << "\n\t Person Details : ";
	cout << "\n\tName : " << name;
	cout << "\n\tDate : ";
	dob.Display();
}