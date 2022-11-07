#include "../../include/Mancare.hpp"

Mancare::Mancare(std::string tipMancare, float pret, std::string optiuneAleasa):
    Meniu(tipMancare,pret), optiuniAles(optiuneAleasa), isReady(0)
{
    std::cout << "Mancare object constructor" << std::endl;
}

Mancare::Mancare(): Meniu(), optiuniAles(""), isReady(0)
{
    std::cout << "Mancare default constructor called" << std::endl;
}

Mancare::Mancare(const Mancare& p)
{
    std::cout << "copy constructor called" << std::endl;
    this->optiuniAles = p.optiuniAles;
    this->isReady = p.isReady;
}

Mancare::Mancare(Mancare&& p)
{
    std::cout << "move constructor called" << std::endl;
    this->optiuniAles = std::move(p.optiuniAles);
    this->isReady = p.isReady;
}

Mancare::~Mancare()
{
    std::cout << "Mancare destructor" << std::endl;
}

void::Mancare::setReady()
{
    isReady = 1;
}

void::Mancare::seeIfReady()
{
    if(isReady == 1)
    {
        std::cout << "Food is ready" << std::endl;
    }else
    {
        std::cout << "Food is not ready" << std::endl;
    }
}