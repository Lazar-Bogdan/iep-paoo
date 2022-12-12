#include "../../include/Apa.hpp"

Apa::Apa(std::string tipMancare, float pret, std::string tipBautura,float cantitate_):
    Bautura(tipMancare,pret,tipBautura), cantitate(cantitate_)
{
    std::cout << "Apa object constructor" << std::endl;
}

Apa::Apa(): Bautura(), cantitate(0)
{
    std::cout << "Apa default constructor called" << std::endl;
}

Apa::~Apa()
{
    std::cout << "Apa destructor" << std::endl;
}

Apa&::Apa::operator=(const Cafea& b)
{
    std::cout << "copy ass from Cafea to apa " << std::endl;
    this->cantitate = b.cantitate;
    return *this;
}

void::Apa::seeCantiate()
{
    std::cout << "Cantitatea este : " << cantitate << std::endl;
}

Apa&::Apa::operator=(const Apa& a)
{
    std::cout << "copy ass from apa to apa " << std::endl;
    this->cantitate = a.cantitate;
    //std::swap(cantitate, a.cantitate);
    return *this;
}