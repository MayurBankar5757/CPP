#include<iostream>
using namespace std;
struct Student {
    int stno;
    char stname[20];
    int totalMarks;

    void Accept() {
        cout << "Enter the student Info";
        cin >> stno >> stname >> totalMarks;
    }
    void Display() {
        cout << "Roll : " << stno << "\t Name : " << stname << "\t TotalMarks" << totalMarks;
    }



};
void main() {
    struct Student b1;

    // b1.Accept();
    // b1.Display();
    struct Student student[5];
    for (int i = 0; i < 5; i++) {
        student[i].Accept();
    }
    int mx = student[0].totalMarks;
    for (int i = 0; i < 5; i++) {
        student[i].Display();
    }
    for (int i = 0; i < 5; i++) {
        mx = student[i].totalMarks > mx ? student[i].totalMarks : mx;
    }
    cout << "\n Maximum Marks : " << mx;
}
