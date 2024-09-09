#include"Calculator.h";

using namespace std;
void main() {

	Calculator c1;
	c1.acceptValue();
	c1.displayValue();
	cout <<"\n\t Addition : "<< c1.Addition();
	cout << "\n\t Substraction : " << c1.Substraction();
	cout << "\n\t Multiplication : " << c1.Multiplication();
	cout << "\n\t Division :  " << c1.Division();
	
}