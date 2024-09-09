#pragma once
#include<iostream>

using namespace std;

class Box {
	private:
	int height;
	int width;
	int depth;

public:
	void setHeight(int);
	void setWidth(int);
	void setDepth(int);
};