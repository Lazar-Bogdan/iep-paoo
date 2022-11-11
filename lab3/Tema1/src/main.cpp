#include <iostream>

#include "../include/Mancare.hpp"
#include "../include/Cafea.hpp"
#include "../include/Meniu.hpp"
#include "../include/Bautura.hpp"

int main(int argc, char *argv[])
{
    Meniu meniu1("dimineata",10);
    Meniu meniu2;

    Cafea cafea1("dimineata",5,"CALDA",3);
    Cafea cafea2 = cafea1;
    Cafea cafea3 = std::move(cafea2);
    cafea3.whatBatura();
    cafea2.whatBatura();
    Cafea cafea4(std::move(cafea2));
    // std::cout << "Tip Meniu " << cafea3.whatBatura() << std::endl;

    Mancare mancare1("cina",25.99,"Calamar");
    mancare1.seeIfReady();
    mancare1.setReady();
    mancare1.seeIfReady();
    return 0;
}