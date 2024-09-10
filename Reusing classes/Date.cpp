#define _CRT_SECURE_NO_WARNINGS

#include"Date.h";



using namespace std;

Date::Date() {
	day= month = 1;
	year = 2024;

}
Date :: Date (int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::Display() {

	cout << "\n\t " << day << "/" << month << "/" << year;

}
void Date::setDate(int d) {

	day = d;


}
void Date::setMonth(int m) {

	month = m;


}void Date::setYear(int y) {

	year = y;


}
