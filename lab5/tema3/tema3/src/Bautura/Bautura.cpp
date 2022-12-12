#include "../../include/Bautura.hpp"

Bautura::Bautura(std::string tipMancare, float pret, std::string tipBautura):
    Meniu(tipMancare,pret), tipBautura_(tipBautura)
{
    std::cout << "Bautura object constructor" << std::endl;
}

Bautura::Bautura(): Meniu(), tipBautura_("unknown")
{
    std::cout << "Bautura default constructor called" << std::endl;
}

Bautura::Bautura(const Bautura& p)
{
    std::cout << "copy constructor called" << std::endl;
    this->tipBautura_ = p.tipBautura_;
}

Bautura::Bautura(Bautura&& p)
{
    std::cout << "Move constructor called" << std::endl;
    this->tipBautura_ = std::move(p.tipBautura_);
}

Bautura::~Bautura()
{
    std::cout << "Bautura destructor" << std::endl;
}

void::Bautura::whatBatura()
{
    std::cout << "The drink is " << tipBautura_ << std::endl;
}