#pragma once
#include "Flower.h"

class Carnation : public Flower {
public:
    Carnation(double price, std::string country, std::string color);
    void printInfo();

};
