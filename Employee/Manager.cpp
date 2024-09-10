#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager() {
    sal = 10000;
    sub = 2;
}

Manager::Manager(int id, const char* nm, int d, int m, int y, int s, int c)
    : Employee(id, nm, d, m, y) {
    sal = s;
    sub = c;
}

void Manager::Display() {
    // Call base class Display to show common Employee data
    Employee::Display();

    // Display Manager-specific details
    cout << "\n\t Salary : " << sal;
    cout << "\n\t Subordinates : " << sub;
}
