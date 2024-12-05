#pragma once
#include "Flower.h"


class Rose : public Flower {
public:
    Rose(double price, std::string country, std::string color);
    void printInfo();

};
