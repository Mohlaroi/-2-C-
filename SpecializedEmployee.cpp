#include "SpecializedEmployee.h"
#include <iostream>


SpecializedEmployee::SpecializedEmployee(std::string name, std::string role, double baseSalary, std::string specialization) : 
    Employee(name, role, baseSalary), specialization_(specialization) {}

void SpecializedEmployee::printInfo() {
    Employee::printInfo();
    std::cout << ", Специализация: " << specialization_ << std::endl;
}