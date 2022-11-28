#pragma once

#include "Meniu.hpp"

class Mancare: public Meniu
{
    public:
        Mancare(std::string tipMancare, float pret, std::string optiuneAleasa);
        Mancare();
        //Mancare(const Mancare& p);
        Mancare(Mancare&& p);
        ~Mancare();
        void setReady();
        void seeIfReady();
        Mancare& operator=(Mancare& p);
        Mancare(const Mancare& mc)
        {
            // std::cout << "Copy constr from Mancare" << std::endl;
            // optiuniAles = mc.optiuniAles;
            // isReady = mc.isReady;
        }
    private:
        std::string optiuniAles;
        int isReady;
};