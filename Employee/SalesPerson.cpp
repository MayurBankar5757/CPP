#include"SalesPerson.h"

using namespace std;

SalesPerson::SalesPerson() {
    sales = 10;
    commision = 10;

}

SalesPerson::SalesPerson(int id, const char* nm, int d, int m, int y, int r, int h, int s, int c) :WageEmployee(id, nm, d, m, y, r, h) {

    sales = s;
    commision = c;

}
void SalesPerson::Display() {
    WageEmployee::Display();
    cout << "\n \t Sales : " << sales;
    cout << "\n \t Commission : " << commision;


}
int SalesPerson::TotalSal() {
    return WageEmployee::TotalSal() + sales * commision;
}