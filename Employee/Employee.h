#pragma once
#include<iostream>
#include"Date.h"

using namespace std;

class Employee {
    int eid;
    char name[20];
    Date dob;

public:
    Employee();
    Employee(int, const char*, int, int, int);

    // Make Display virtual to allow overriding
    virtual void Display();
};
