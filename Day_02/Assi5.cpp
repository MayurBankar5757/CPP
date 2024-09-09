#include<iostream>
using namespace std;
int add(int, float);
void add(float, int);
void main() {
    int a = 20;
    float b = 20.0f;

    int addition = add(a, b);
    add(2.0f, a);
    cout << "\n\t Addition : " << addition;
}

void add(float a, int b) {
    cout << "\n\t Addition : " << a + b;
}

int add(int a, float b) {
    return a + b;
}