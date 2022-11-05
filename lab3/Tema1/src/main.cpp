#include <iostream>

#include "../include/Forma.hpp"
#include "../include/Hexagon.hpp"
#include "../include/Patrat.hpp"
#include "../include/triunghi.hpp"
#include "../include/TypeTriunghi.hpp"

int main(int argc, char *argv[])
{
    std::cout << "!!! This is main STARTING !!!" << std::endl;
    std::cout << "!!! CALLING ONLY FORMA !!!" <<std::endl;

    Forma forma(1.1,1.2);
    Forma forma2;

    std::cout << "!!! CALLING FORMA DERIVATE !!!" << std::endl;

    Hexagon exa(2.2,3.2,6);
    Hexagon ex;

    Patrat pat(1.1,2.1,4);
    Patrat p;

    Triunghi tr(1.1,2.3,3);
    // std::cout << tr.getArie() << std::endl;
    Triunghi t;
    std::cout << std::endl;
    std::cout << "!!! CALLING TRIUNGHITYPE !!!" << std::endl;
    std::cout << std::endl;

    TypeTriunghi type(1.1,1.1,3,"isoscel");
    TypeTriunghi tt;

    std::cout << std::endl;
    std::cout << "!!! CALLING COPY CONSTRUCTOR !!!" << std::endl;
    std::cout << std::endl;

    Forma copy = forma;
    std::cout << "Printing aria the copy from forma " << copy.getArie() << std::endl;
    copy.modifyArie(2.2);
    std::cout << "Modify copy " << copy.getArie() << " and Modify forma " << forma.getArie() << std::endl;
    forma.modifyArie(3.3);
    std::cout << "Modify copy " << copy.getArie() << " and Modify forma " << forma.getArie() << std::endl;

    TypeTriunghi *tt1 = new TypeTriunghi(1.2,2.2,3,"isoscel");
    TypeTriunghi t2 = *tt1;
    std::cout << "Copy type " << t2.getType() << " original type " << tt1->getType() << std::endl;
    delete tt1;
    std::cout << "DELETED COPY TYPE" << t2.getType() << " original type " << tt1->getType() << std::endl;

    std::cout << std::endl;
    std::cout << "!!! CALLING MOVE CONSTRUCTOR !!!" << std::endl;
    std::cout << std::endl;

    Forma *ff = new Forma(1.1,2.2);
    Forma f2 = std::move(*ff);
    std::cout << "OUT OF MOVE CONSTRUCTOR ARIA " << f2.getArie() << std::endl;
    std::cout << "OUT OF OLD OBJECT ARIA " << ff->getArie() << std::endl;
    delete ff;
    std::cout << "OUT OF MOVE CONSTRUCTOR ARIA AFTER DELETE " << f2.getArie() << std::endl;
    std::cout << "OUT OF OLD OBJECT DELETE ARIA AFTER DELETE" << ff->getArie() << std::endl;

    std::cout << std::endl;
    std::cout << "!!! COPY ON HEXAGON NOT WORK !!!" << std::endl;
    std::cout << std::endl;
    // compilation error
    // Hexagon test;
    // Hexagon test2 = test;
    return 0;
}