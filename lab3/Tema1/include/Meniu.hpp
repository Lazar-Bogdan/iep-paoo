#pragma once

#include <string>
#include <iostream>

class Meniu
{
    public:
        Meniu(std::string Meniu, float pret);
        Meniu();
        //copy
        Meniu(const Meniu& p) = delete;
        //move
        Meniu(Meniu&& p);
        //desc
        ~Meniu();
        int returneazaPretTotal();
        std::string returneazaTipMeniu();

    private:
        std::string tipMeniu;
        float pret;
};