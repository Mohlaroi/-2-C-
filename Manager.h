#include "Employee.h"
#pragma once
class Manager : public Employee {
public:
    Manager(std::string name, double baseSalary, double bonus);
    double calculateSalary();

private:
    double bonus_;
};
