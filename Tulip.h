#pragma once
#include "Flower.h"

class Tulip : public Flower {
public:
    Tulip(double price, std::string country, std::string color);
    void printInfo();

};
