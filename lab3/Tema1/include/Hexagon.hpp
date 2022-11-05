#pragma once

#include "Forma.hpp"

class Hexagon: public Forma
{
    public:
        Hexagon(float per, float arie, int laturi):
            Forma(per,arie), nr_laturi(laturi)
        {
            std::cout << "Hexagon object constructor" << std::endl;
        }

        Hexagon(): Forma(), nr_laturi(6)
        {
            std::cout << "Hexagon default constructor called" << std::endl;
        }

        Hexagon(const Hexagon& p) = delete;

        ~Hexagon()
        {
            std::cout << "Hexagon destructor" << std::endl;
        }

        int getLaturi();
    private:
        int nr_laturi;
};