#include<iostream>

using namespace std;

template<class T> bool Search(T arr[],int size,T key) {

	for (int i = 0; i < size; i++) {

		if (arr[i] == key) {
			
			return true;
		}

	
	}
	return false;
}

void main() {

	int arr[6] = { 10,20,4,5,3,7 };

	bool b = Search(arr, 6, 5);

	if (b) {
		cout << "\n\tPresent";

	}
	else {
		cout << "\n\t Not Present";
	}
	

}