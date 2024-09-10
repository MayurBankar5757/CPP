#pragma once
#include <iostream>

using namespace std;
template<class T>
class Array {

   int size;
   T  *arr;

public :
	Array();
	Array(int);
	void Accept();
	void Display();
	void Reverse();
	bool Palindrome();
	void Search( T );

};