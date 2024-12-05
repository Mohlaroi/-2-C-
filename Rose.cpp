#include "Rose.h"
#include "Flower.h"
#include <iostream>
Rose::Rose(double price, std::string country, std::string color) :
    Flower("Роза", price, country, color) {}

void Rose::printInfo() {
    std::cout << "Роза: ";
    Flower::printInfo();
}