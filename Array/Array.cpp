#include"Array.h"

using namespace std;

template <class T>Array<T>::Array() {

	size = 5;
	arr = new T[size];
	

}
template <class T> Array <T>::Array(int size) {

	this->size = size;
	arr = new T[size];


}

template < class T> void Array<T>::Accept() {

	cout << "\n\t Enter the " << size << " Elements ";

	for (int i = 0; i < size; i++) {

		cin >> arr[i];
	 }

}

template<class T > void Array <T>::  Display() {

	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}

}

template<class T> void Array <T> ::Reverse() {

	for (int i = 0, j = size - 1; i < j; i++, j--) {

		 T temp = arr[i];
		 arr[i] = arr[j];
		 arr[j] = temp;

	}
}
template<class T>  bool Array <T> ::Palindrome() {

	for (int i = 0, j = size-1; i < j; i++, j--) {

		if (arr[i] != arr[j]) {

			return false;
			
		}
		

	}
	return true;
	
}
template<class T> void Array <T> ::Search ( T key) {
	
	
	

	for (int i = 0; i < size-1; i++) {

		if (arr[i] == key) {
			cout << "Element Found";
			break;
		}
		
		
	}
}