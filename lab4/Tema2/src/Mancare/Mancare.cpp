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

// Mancare::Mancare(const Mancare& p)
// {
//     std::cout << "copy constructor called" << std::endl;
//     this->optiuniAles = p.optiuniAles;
//     this->isReady = p.isReady;
// }

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

Mancare&::Mancare::operator=(Mancare& p)
{
    std::cout << "copy assignment operator of MANCARE" << std::endl;
    // std::swap(optiuniAles, p.optiuniAles);
    // std::swap(isReady, p.isReady);
    optiuniAles = p.optiuniAles;
    isReady = p.isReady;
    // p.seeValuesOfMeniu();
    // std::cout << p.getTipMeniu() << " " << p.getPretMeniu() << std::endl;
    setValues(p.getTipMeniu(), p.getPretMeniu());
    return *this;
}

void::Mancare::setReady()
{
    isReady = 1;
    //std::cout << "test set ready " << getTipMeniu() << " " << getPretMeniu() << std::endl;
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