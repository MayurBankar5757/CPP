#include"Stack.h"

using namespace std;

void main() {

	Stack s(5);
	int ch;
	int no;
	

	do {
		
		cout << "\n\t1. Display";
		cout << "\n\t2. push";
		cout << "\n\t3. pop";
		cout << "\n\t0. exit";
		cout << "\n\tEnter the Choise";
		cin >> ch;

		switch (ch) {

			case 1:
				s.Display();
				break;

			case 2:
				cout << "\n Enter the Number : ";
				cin >> no;
				s.push(no);
				break;

			case 3:
				s.pop();
				break;


			default:
				cout << "Wrong Choise";





		}

	} while (ch != 0);

	

}