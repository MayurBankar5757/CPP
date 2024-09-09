#pragma once
#include<iostream>

using namespace std;

class Box {
	float height;
	float width;
	float depth;

public :
	Box();
	Box(const float, const float, const float);
	void setHeight(const float h);
	void setWidth(const float h);
	void setDepth(const float h);
	void Display();

};
