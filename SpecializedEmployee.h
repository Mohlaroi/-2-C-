#pragma once
#include "Employee.h"
#include <string>

class SpecializedEmployee : public Employee {
public:
    SpecializedEmployee(std::string name, std::string role, double baseSalary, std::string specialization);
    void printInfo();

private:
    std::string specialization_;
};
