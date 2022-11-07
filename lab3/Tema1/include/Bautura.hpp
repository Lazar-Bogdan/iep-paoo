#pragma once

#include "Meniu.hpp"

class Bautura: public Meniu
{
    public:
        Bautura(std::string tipMancare, float pret, std::string tipBautura);
        Bautura();
        Bautura(const Bautura& p);
        Bautura(Bautura&& p);
        ~Bautura();
        void whatBatura();

    private:
        std::string tipBautura_;
};