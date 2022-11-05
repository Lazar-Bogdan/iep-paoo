#pragma once

#include <string>
#include <iostream>

class Forma
{
    public:
        Forma(float perimetru, float arie): 
            arie(arie), perimetru(perimetru)
        {
            std::cout << "Forma constructor constructor" << std::endl;
        }

        Forma(): arie(0), perimetru(0)
        {
            std::cout << "Forma default constructor called" << std::endl;
        }
        //copy
        Forma(const Forma& p)
        {
            std::cout << "copy constructor called" << std::endl;
            this->perimetru = p.perimetru;
            this->arie = p.arie;
        }
        //move
        Forma(Forma&& p): perimetru(p.perimetru), arie(p.arie)
        {
            std::cout << "move constructor called" << std::endl;
        }
        //desc
        ~Forma()
        {
            std::cout << "Forma destructor" << std::endl;
        }

        float getPerimetru();

        float getArie();

        void modifyArie(float);
    private:
        float perimetru;
        float arie;
};