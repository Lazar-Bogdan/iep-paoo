#pragma once

#include <string>
#include <iostream>

class Meniu
{
    public:
        Meniu(std::string Meniu, float pret);
        Meniu();
        //copy
        //Meniu(const Meniu& p) = delete;
        //move
        Meniu(Meniu&& p);
        //desc
        ~Meniu();
        int returneazaPretTotal();
        std::string returneazaTipMeniu();
        Meniu& operator=(const Meniu& mp)
        {
            std::cout << "copy ass from Meniu called" << std::endl;
            tipMeniu = mp.tipMeniu;
            pret = mp.pret;
            return *this;
        }
        Meniu(const Meniu& p){
            std::cout << "copy constr from Meniu called" << std::endl;
            tipMeniu = p.tipMeniu;
            pret = p.pret;
        }
        void seeValuesOfMeniu();
        void setIsAvailable(bool available)
        {
            isAvailable = available;
        }
    protected: 
        void setValues(std::string tpMeniu, float prt);
        std::string getTipMeniu()
        {
            return tipMeniu;
        }
        float getPretMeniu();
    private:
        std::string tipMeniu;
        float pret;
        bool isAvailable;
};