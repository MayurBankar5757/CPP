
#include"Date.h"
using namespace std;
void Date ::setDate(int d, int m, int y) {
	date = d;
	month = m;
	year = y;
}

void Date::showDate() {
	cout << date<<"/"<<month<<"/"<<year;
}
void Date::setDate(int d) {
	date = d;
}
void Date::setMonth(int m) {
	month = m;
}
void Date::setYear(int y) {
	year = y;
}
int Date::getDate() {
	return date;
}
int Date::getMonth() {
	return month;

}
int Date::getYear() {
	return year;
}
