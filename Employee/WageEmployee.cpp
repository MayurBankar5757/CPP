#include"WageEmployee.h"

using namespace std;

WageEmployee::WageEmployee() {
	rate = 10;
	hour = 10;
}

WageEmployee::WageEmployee(int id, const char* nm, int d, int m, int y, int h, int r) : Employee(id, nm, d, m, y) {

	rate = r;
	hour = h;

}
void WageEmployee::Display() {
	Employee::Display();
	cout << "\n\t Rate : " << rate;
	cout << "\n \t Hour : " << hour;
	
}

int WageEmployee::TotalSal() {
	return rate * hour;
}