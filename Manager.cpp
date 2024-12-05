#include "Manager.h"

Manager::Manager(std::string name, double baseSalary, double bonus) :
    Employee(name, "Менеджер", baseSalary), bonus_(bonus) {}

double Manager::calculateSalary() { return Employee::calculateSalary() + bonus_; }