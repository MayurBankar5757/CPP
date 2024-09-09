#include"Date.h";

using namespace std;

Date::Date() {

	day = month = 1;
	year = 2024;

}
Date::Date(int d, int year) {
	this->day = d;
	this->month = d;
	this->year = year;
}

void Date::Display() {

	cout << "\n\t Date : " << day << "/" << month << "/" << year;
}