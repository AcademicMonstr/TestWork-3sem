#include "Remake.h"

Remake::Remake(const char* n, Type t, int y, int ry): Composition(n, t, y), remakeYear(ry) {}

Remake& Remake::operator=(const Remake& other)
{
    if( this != &other )
    {
        Composition::operator=(other);
        remakeYear = other.remakeYear;
    }
    return *this;
}

void Remake::Print() const 
{
    Composition::Print();
    std::cout << ", Remake year: " << remakeYear;
}

std::ostream& operator<<(std::ostream& os, const Remake& remake)
{
    remake.Print();
    return os;
}