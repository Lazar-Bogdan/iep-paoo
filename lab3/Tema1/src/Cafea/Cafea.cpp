#include "../../include/Cafea.hpp"

Cafea::Cafea(std::string tipMancare, float pret, std::string tipBautura, int nrPlicuri):
    Bautura(tipMancare,pret,tipBautura), nrPlicuriZahar(nrPlicuri)
{
    std::cout << "Cafea object constructor" << std::endl;
}

Cafea::Cafea(): Bautura(), nrPlicuriZahar(0)
{
    std::cout << "Cafea default constructor called" << std::endl;
}

Cafea::Cafea(const Cafea& p): Bautura(p)
{
    std::cout << "copy constructor called" << std::endl;
    this->nrPlicuriZahar = p.nrPlicuriZahar;
}

Cafea::Cafea(Cafea&& p): Bautura(p)
{
    std::cout << "move Cafea constructor called" << std::endl;
    this->nrPlicuriZahar = p.nrPlicuriZahar;
}


Cafea::~Cafea()
{
    std::cout << "Cafea destructor" << std::endl;
}