#pragma once

#include "Bautura.hpp"
#include "Cafea.hpp"

class Apa: public Bautura{
    public:
        Apa(std::string tipMancare, float pret, std::string tipBautura, float cantitate);
        Apa();
        ~Apa();
        Apa& operator=(const Cafea& a);
        Apa& operator=(const Apa& a);
        void seeCantiate();
        float cantitate;
    private:
};