#include<iostream>
using namespace std;
void Accept(int ,int[]);
void Display(int, int[]);
void evenOddCount(int, int[], int &, int &);
void search(int, int[]);
void main() {
	int size;
	int evenCount = 0;
	int oddCount = 0;
	cout << "\n\t Enter the size of Array   ";
	cin >> size;
	int* arr;
	arr = new int[size];
	Accept(size,arr);
	Display(size, arr);
	evenOddCount(size, arr, evenCount, oddCount);
	cout << "\n\t Even Count : " << evenCount;
	cout << "\n\t Odd Count : " << oddCount;
	search(size, arr);

	

}
void Accept(int size,int arr[]) {
	cout << "\n\tEnter " << size << "  Element  ";

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void Display(int size, int arr[]) {
	cout << "\n\tArray Element   ";

	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" ";
	}
}

void MaxMin(int size, int arr[]) {
	int mx =arr[0];
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		mx = arr[i] > mx ? arr[i] : mx;
		min = arr[i] < min ? arr[i] : min;
	}
	cout << "\n\tMaximum Value : " << mx;
	cout << "\n\tMinimum Value : " << min;
}

void search(int size, int arr[]) {

	int num;
	cout << "\n\tEnter number to search";
	cin >> num;
	for (int i = 0; i < size; i++) {
		if (num == arr[i]) {
			cout << "Element found";
			break;
		}
	}
}
void evenOddCount(int size, int arr[], int &evenCount,int &oddCount) {

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			oddCount++;
		}
		else {
			evenCount++;
		}
	}
}