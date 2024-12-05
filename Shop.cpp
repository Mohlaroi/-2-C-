#include "Shop.h"
#include <iostream>

Shop::Shop() : product1(), product2(), product3(), employee1(), employee2() {}


Shop::~Shop() {
    delete product1;
    delete product2;
    delete product3;
    delete employee1;
    delete employee2;
}

void Shop::addProduct(Product* product) {
    if (product1 == 0) product1 = product;
    else if (product2 == 0) product2 = product;
    else if (product3 == 0) product3 = product;
    else std::cerr << "Магазин полон\n";
}

void Shop::addEmployee(Employee* employee) {
    if (employee1 == 0) employee1 = employee;
    else if (employee2 == 0) employee2 = employee;
    else std::cerr << "Магазин полон\n";
}

void Shop::printShopInfo() {
    std::cout << "Товары:\n";
    if (product1) product1->printInfo();
    if (product2) product2->printInfo();
    if (product3) product3->printInfo();
    std::cout << "\nСотрудники:\n";
    if (employee1) employee1->printInfo();
    if (employee2) employee2->printInfo();
}