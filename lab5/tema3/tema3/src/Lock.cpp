#include <mutex>
#include "../include/Lock.hpp"

void lock(Meniu &meniu)
{
    meniu.setIsAvailable(false);
    std::cout<<"Meniu is locked."<<std::endl;
}

void unlock(Meniu &meniu)
{
    meniu.setIsAvailable(true);
    std::cout<<"The meniu is now available"<<std::endl;
}

Lock::Lock(Meniu &meniu) : meniu(meniu)
{
    lock(meniu);
}

Lock::~Lock()
{
    unlock(meniu);
}