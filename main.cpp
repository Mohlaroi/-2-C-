




#include "Shop.h"
#include "Rose.h"
#include "Tulip.h"
#include "Carnation.h"
#include "Manager.h"
#include "SpecializedEmployee.h"
#include <iostream>

int main() {
    Shop shop;

    Rose* rose = new Rose(10.0, "Эквадор", "красная");
    Tulip* tulip = new Tulip(5.0, "Голландия", "желтая");
    Carnation* carnation = new Carnation(7.0, "Кения", "белая");

    Employee* employee = new Employee("Прод Продавов", "Продавец", 2000.0);
    Manager* manager = new Manager("Сила Силов", 3000.0, 500.0);
    SpecializedEmployee* specEmp = new SpecializedEmployee("Спец Спецов", "Специалист", 2500.0, "Садоводство");


    shop.addProduct(rose);
    shop.addProduct(tulip);
    shop.addProduct(carnation);

    shop.addEmployee(employee);
    shop.addEmployee(manager);
    shop.addEmployee(specEmp);

    shop.printShopInfo();

    std::cout << "\nДополнительная информация:\n";
    std::cout << "Роза: Цена - " << rose->getPrice() << ", Название - " << rose->getName() << std::endl;
    std::cout << "Тюльпан: Цена - " << tulip->getPrice() << ", Название - " << tulip->getName() << std::endl;
    std::cout << "Гвоздика: Цена - " << carnation->getPrice() << ", Название - " << carnation->getName() << std::endl;
    std::cout << "Продавец: Зарплата - " << employee->calculateSalary() << std::endl;
    std::cout << "Менеджер: Зарплата - " << manager->calculateSalary() << std::endl;
    std::cout << "Специалист: Зарплата - " << specEmp->calculateSalary() << std::endl;


    delete rose;
    delete tulip;
    delete carnation;
    delete employee;
    delete manager;
    delete specEmp;

    return 0;
}