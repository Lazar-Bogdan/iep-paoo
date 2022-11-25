#include "../../include/Meniu.hpp"

Meniu::Meniu(std::string Meniu, float pret): 
    tipMeniu(Meniu), pret(pret)
{
    std::cout << "Meniu constructor constructor" << std::endl;
}

Meniu::Meniu(): tipMeniu(""), pret(0)
{
    std::cout << "Meniu default constructor called" << std::endl;
}
// //copy
// Meniu::Meniu(const Meniu& p)
// {
//     std::cout << "copy constructor called" << std::endl;
//     this->tipMeniu = p.tipMeniu;
//     this-> pret = p.pret;
// }
//move
Meniu::Meniu(Meniu&& p)
{
    std::cout << "move constructor called" << std::endl;
    this->tipMeniu = std::move(p.tipMeniu);
    pret = p.pret;
}
//desc
Meniu::~Meniu()
{
    std::cout << "Meniu destructor" << std::endl;
}

int::Meniu::returneazaPretTotal(){
    return pret;
}

