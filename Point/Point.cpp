#include"Point.h";

using namespace std;

void Point::setPoint(int x, int y) {
	xCor = x;
	yCor = y;

}

void Point::showPoint() {
	cout << "\n\t [" << xCor << "," << yCor << "]";
}