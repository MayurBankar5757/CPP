#pragma once
#include "Employee.h"

class Manager : public Employee {
    int sub; // Number of subordinates
    int sal; // Salary

public:
    Manager();
    Manager(int, const char*, int, int, int, int, int);

    // Override the Display method
    void Display() override;
};
