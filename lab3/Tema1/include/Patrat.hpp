#pragma once

#include "Forma.hpp"

class Patrat: public Forma
{
    public:
        Patrat(float per, float arie, int laturi):
            Forma(per,arie), nr_laturi(laturi)
        {
            std::cout << "Patrat object constructor" << std::endl;
        }

        Patrat(): Forma(), nr_laturi(4)
        {
            std::cout << "Patrat default constructor called" << std::endl;
        }

        Patrat(const Patrat& p)
        {
            std::cout << "copy constructor called" << std::endl;
            this->nr_laturi = p.nr_laturi;
        }

        ~Patrat()
        {
            std::cout << "Patrat destructor" << std::endl;
        }

        int getLaturi();
    private:
        int nr_laturi;
};