#pragma once
#include <iostream>
#include "Meniu.hpp"

class Lock
{
    public:
        Lock(const Lock&) = delete;
        Lock& operator=(const Lock&) = delete;
        Lock(Meniu &meniu);
        ~Lock();
    private:
        Meniu &meniu;
};