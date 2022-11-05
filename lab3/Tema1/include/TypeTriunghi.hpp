#pragma once

#include "triunghi.hpp"

class TypeTriunghi: public Triunghi
{
    public:
        TypeTriunghi(float per, float arie, int lat, std::string type):
            Triunghi(per,arie,lat), type_(type)
        {
            std::cout << "TypeTriunghi object constructor" << std::endl;
        }

        TypeTriunghi(): Triunghi(), type_(" ")
        {
            std::cout << "TypeTriunghi default constructor called" << std::endl;
        }

        TypeTriunghi(const TypeTriunghi& p)
        {
            std::cout << "copy constructor called" << std::endl;
            this->type_ = p.type_;
        }

        std::string getType()
        {
            return type_;
        }

        ~TypeTriunghi()
        {
            std::cout << "TypeTriunghi destructor" << std::endl;
        }
    
    private:
        std::string type_;
};