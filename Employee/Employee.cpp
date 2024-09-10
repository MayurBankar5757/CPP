#define _CRT_SECURE_NO_WARNINGS
#include "Employee.h"
#include <cstring>

using namespace std;

Employee::Employee() {
    eid = 1;
    strcpy(name, "ABC");
}

Employee::Employee(int id, const char* nm, int d, int m, int y) : dob(d, m, y) {
    eid = id;
    strcpy(name, nm);
}

void Employee::Display() {
    cout << "\n\t Emp Id : " << eid;
    cout << "\n\t Name : " << name;
    dob.Display();
}
