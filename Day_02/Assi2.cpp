#include<iostream>
using namespace std;
void swap(int&a, int&b);
void main() {

    int a = 20;
    int b = 30;

    cout << "\n\t A : " << a;
    cout << "\n\t B : " << b;

    swap(a, b);

    cout << "\n\t A : " << a;
    cout << "\n\t B : " << b;
  


}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}