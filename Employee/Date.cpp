#include"Date.h"

using namespace std;

Date::Date() {
	date = 1;
	month = 1;
	year = 2000;
}

Date::Date(int d, int m, int y) {
	date = d;
	month = m;
	year = y;


}

void Date::Display() {

	cout << "\n\t" << date << "/" << month << "/" << year;

}