#include"Array.h"

using namespace std;

Array::Array() {
	size = 5;

	arr = new int[size];

	for (int i = 0; i < size; i++) {
		 arr[i]=0;
	}

}
Array::Array(int size) {
	this->size = size;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

 Array::Array(Array& obj) {
	 size = obj.size;
	 arr = new int[size];
	 arr = obj.arr;
}

 void Array::Display() {

	 for (int i = 0; i < size; i++) {
		 cout << arr[i];

	 }

 }
  istream & operator>> (istream &in,Array& obj) {

	  in >> obj.size;
 }

 Array::~Array() {
	 delete[]arr;
 }