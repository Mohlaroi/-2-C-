#include "Product.h"
#include <iostream> 

Product::Product(std::string name, double price) : name_(name), price_(price) {}

double Product::getPrice() { return price_; }

std::string Product::getName() { return name_; }
