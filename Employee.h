#pragma once
#include <string>
#include <iostream>

class Employee {
public:
    Employee(std::string name, std::string role, double baseSalary);
    virtual ~Employee() = default;
    virtual double calculateSalary(); 
    virtual void printInfo();

private:
    std::string name_;
    std::string role_;
    double baseSalary_;
};

