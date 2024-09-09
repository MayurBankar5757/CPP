#include"Date.h"
using namespace std;
void main() {
	Date d1;
	d1.setDate(22,5, 2024);
	d1.showDate();
	cout <<d1.getYear();
	cout << "\n \t" << d1.getMonth();
}