#pragma once

#include "Bautura.hpp"

class Cafea: public Bautura
{
    public:
        Cafea(std::string tipMancare, float pret, std::string tipBautura, int nrPlicuri, float cantitate);
        Cafea();
        Cafea(const Cafea& p);
        Cafea(Cafea&& p);
        ~Cafea();
        float cantitate;
        void seeInfo()
        {
            std::cout << "Nr plicituri : " << nrPlicuriZahar << ", cantitate : " << cantitate << std::endl;
        }
        //void operator=(const Apa&);
    private:
        int nrPlicuriZahar;
};