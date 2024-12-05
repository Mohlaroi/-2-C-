#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, std::string role, double baseSalary) :
    name_(name), role_(role), baseSalary_(baseSalary) {}

double Employee::calculateSalary() { return baseSalary_; }

void Employee::printInfo() {
    std::cout << "Имя: " << name_ << ", Должность: " << role_ << ", Зарплата: " << calculateSalary() << std::endl;
}