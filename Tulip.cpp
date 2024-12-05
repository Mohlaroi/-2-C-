#include "Tulip.h"
#include "Flower.h"
#include <iostream>

Tulip::Tulip(double price, std::string country, std::string color) :
    Flower("Тюльпан", price, country, color) {}

void Tulip::printInfo() {
    std::cout << "Тюльпан: ";
    Flower::printInfo();
}