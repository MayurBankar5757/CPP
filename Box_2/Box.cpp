#include "Box.h";

using namespace std;

Box::Box() {
	height = width = depth = 1;

}
Box::Box(const float height, const float width, const float depth) {
	this->height = height;
	this->width = width;
	this->depth = depth;

}
void Box::Display() {
	cout << "\n\t height : " << height;
	cout << "\n\t Width : " << width;
	cout << "\n\t Depth : " << depth;

}

void Box :: setHeight(const float h) {
	this->height = h;


}
void Box::setDepth(const float d) {
	this->depth = d;

}
void Box::setWidth(const float h) {
	this->width = h;
}