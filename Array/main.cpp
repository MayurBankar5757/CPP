#include"Array.cpp"

using namespace std;

void main() {

	int size;
	int  ch;
	char no;

	
	cout << "\n\t Enter the size of Array";
	cin >> size;

     Array<char> arr(size);

	 do {

		 cout << "\n\t 1. Accept \
                \n\t 2. Display \
                \n\t 3. Reverse \
                \n\t 4. palindrome \
                \n\t 5. Search\
                \n\t 0. Exit ";
			     

		 cout << "\n\t Enter the Choise ";
		 cin >> ch;

		 switch (ch) {

		 case 1 :
			 arr.Accept();
			 break;
			 
		 case 3:
			 arr.Reverse();
			 
		 case 2:
			 arr.Display();
			 break;

		 case 4 :
			 arr.Palindrome();
			 break;
			 
		 case 5 :
			 cout << "Enter Element to search ";
			 cin >> no;
			 arr.Search(no);
			 break;




			 
		 }
	 } while (ch != 0);
}