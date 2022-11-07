#pragma once

#include "Meniu.hpp"

class Mancare: public Meniu
{
    public:
        Mancare(std::string tipMancare, float pret, std::string optiuneAleasa);
        Mancare();
        Mancare(const Mancare& p);
        Mancare(Mancare&& p);
        ~Mancare();
        void setReady();
        void seeIfReady();
    private:
        std::string optiuniAles;
        int isReady;
};