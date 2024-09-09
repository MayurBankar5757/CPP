
#include<iostream>
class Date {
private:
	int date, month, year;

public:
	void setDate(int, int, int);
	void showDate();
	void setDate(int);
	void setMonth(int);
	void setYear(int);
	int getDate();
	int getMonth();
	int getYear();
};
