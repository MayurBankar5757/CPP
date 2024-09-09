#include"Point.h";

using namespace std;

Point::Point() {
	xCor = yCor = 10;

}

Point::Point(int x, int y) {
	xCor = x;
	yCor = y;

}
void Point::Display() {
	cout << "\n\t X Cordinate : " << xCor;
	cout << "\n\t Y Cordinate : " << yCor;
}