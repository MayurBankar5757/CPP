#pragma once
#include<iostream>

using namespace std;

class Stack {

	int *arr;
	int top;
	int size;

public:

	Stack();
	Stack(int);
	void push(int);
	int pop();
	void Display();


};