#pragma once

#include "Forma.hpp"

class Triunghi: public Forma
{
    public:
        Triunghi(float per, float arie, int laturi):
            Forma(per,arie), nr_laturi(laturi)
        {
            std::cout << "Triunghi object constructor" << std::endl;
        }

        Triunghi(): Forma(), nr_laturi(0)
        {
            std::cout << "Triunghi default constructor called" << std::endl;
        }

        Triunghi(const Triunghi& p)
        {
            std::cout << "copy constructor called" << std::endl;
            this->nr_laturi = p.nr_laturi;
        }

        ~Triunghi()
        {
            std::cout << "Triunghi destructor" << std::endl;
        }

        int getLaturi();
    private:
        int nr_laturi;
};