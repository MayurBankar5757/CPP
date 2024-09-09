#include<iostream>
using namespace std;
int Multiply(int = 3, int = 4, int = 5);
void main() {

    int a = 2;
    int b = 3;
    int c = 3;
    int Mul = Multiply(a, b);
    cout << " \n\tMultiplication : " << Mul;
}

int Multiply(int a, int b, int c) {

    return a * b * c;

}