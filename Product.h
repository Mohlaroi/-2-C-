#pragma once
#include <string>

class Product {
public:
    Product(std::string name, double price);
    virtual ~Product() = default;
    virtual double getPrice();
    std::string getName();
    virtual void printInfo() = 0;

protected:
    std::string name_;
    double price_;
};
