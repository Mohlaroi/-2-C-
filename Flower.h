#pragma once
#include "Product.h"
#include <string>

class Flower : public Product {
public:
    Flower(std::string name, double price, std::string country, std::string color);
    void printInfo();

protected:
    std::string country_;
    std::string color_;
};

