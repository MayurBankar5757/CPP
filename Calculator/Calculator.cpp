#include"Calculator.h";

using namespace std;

void Calculator::acceptValue() {

	cout << "\n\t Enter two numbers";
	cin >> no1 >> no2;
	

}
void Calculator::displayValue() {
	cout << "\n\t Number 1 : " << no1;
	cout << "\n\t Number 2 : " << no2;

}
int Calculator::Addition() {
	return no1 + no2;

}
int Calculator::Substraction() {
	return no1 - no2;
}

int Calculator::Multiplication() {
	return no1 * no2;
}
int Calculator::Division() {
	return no1 / no2;
}
