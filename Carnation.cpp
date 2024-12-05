#include "Carnation.h"
#include "Flower.h"
#include <iostream>

Carnation::Carnation(double price, std::string country, std::string color) :
    Flower("Гвоздика", price, country, color) {}

void Carnation::printInfo() {
    std::cout << "Гвоздика: ";
    Flower::printInfo();
}