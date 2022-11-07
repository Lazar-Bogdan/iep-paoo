#pragma once

#include "Bautura.hpp"

class Cafea: public Bautura
{
    public:
        Cafea(std::string tipMancare, float pret, std::string tipBautura, int nrPlicuri);
        Cafea();
        Cafea(const Cafea& p);
        Cafea(Cafea&& p);
        ~Cafea();
    
    private:
        int nrPlicuriZahar;
};