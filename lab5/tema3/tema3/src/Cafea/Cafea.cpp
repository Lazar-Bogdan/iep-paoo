#include "../../include/Cafea.hpp"

Cafea::Cafea(std::string tipMancare, float pret, std::string tipBautura, int nrPlicuri,float cantitate_):
    Bautura(tipMancare,pret,tipBautura), nrPlicuriZahar(nrPlicuri), cantitate(cantitate_)
{
    std::cout << "Cafea object constructor" << std::endl;
}

Cafea::Cafea(): Bautura(), nrPlicuriZahar(0), cantitate(0)
{
    std::cout << "Cafea default constructor called" << std::endl;
}

Cafea::Cafea(const Cafea& p): Bautura(p)
{
    std::cout << "copy constructor called" << std::endl;
    this->nrPlicuriZahar = p.nrPlicuriZahar;
    this->cantitate = p.cantitate;
}

Cafea::Cafea(Cafea&& p): Bautura(p)
{
    std::cout << "move Cafea constructor called" << std::endl;
    this->nrPlicuriZahar = p.nrPlicuriZahar;
    this->cantitate = p.cantitate;
}


Cafea::~Cafea()
{
    std::cout << "Cafea destructor" << std::endl;
}

// void::Cafea::operator=(const Apa& a)
// {
//     std::cout << "copy ass from Apa to Cafea " << std::endl;
//     this->cantitate = a.cantitate;
// }