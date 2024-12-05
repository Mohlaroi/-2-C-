#include "Flower.h"
#include "Product.h"
#include <iostream>
Flower::Flower(std::string name, double price, std::string country, std::string color) :
    Product(name, price), country_(country), color_(color) {}

void Flower::printInfo() {
    std::cout << "Название: " << getName() << ", Цена: " << getPrice() << ", Страна: " << country_ << ", Цвет: " << color_ << std::endl;
}