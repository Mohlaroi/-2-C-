#pragma once
#include "Product.h"
#include "Employee.h"
class Shop {
public:
    Shop();
    ~Shop();
    void addProduct(Product* product);
    void addEmployee(Employee* employee);
    void printShopInfo();

private:
    Product* product1;
    Product* product2;
    Product* product3;
    Employee* employee1;
    Employee* employee2;
};
