#include <iostream>
#include <thread>
#include <memory>

#include "../include/Mancare.hpp"
#include "../include/Cafea.hpp"
#include "../include/Meniu.hpp"
#include "../include/Bautura.hpp"
#include "../include/Apa.hpp"
#include "../include/Lock.hpp"

int main(int argc, char *argv[])
{
    std::shared_ptr<Cafea> Cafea1 = std::make_shared<Cafea>("Mic dejun",2, "calda", 3, 2);

    Cafea1->seeInfo();

    std::shared_ptr<Cafea> Cafea2(Cafea1);
    std::shared_ptr<Cafea> Cafea3(Cafea1);

    std::cout << "Cafea 2 " << std::endl;
    Cafea2->seeInfo();
    std::cout << "Cafea 3 " << std::endl;
    Cafea3->seeInfo();

    std::cout << "nr of object that points to the Cafea1 are: " << Cafea1.use_count() << std::endl;

    std::shared_ptr<Meniu> meniu1 = std::make_shared<Meniu>();

    std::shared_ptr<Lock>meniuLock = std::make_shared<Lock>(*meniu1);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}