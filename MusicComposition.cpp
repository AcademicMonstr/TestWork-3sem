#include "MusicComposition.h"

Composition::Composition( const char* n, Type t, int y): Music(), type(t), year(y)
{
    name = new char [std::strlen(n) + 1];
    std::strcpy ( name, n);
}

Composition::~Composition()
{
    delete[] name;
}

Composition::Composition(const Composition& other): type(other.type), year(other.year)
{
    name = new char [std::strlen(other.name) + 1];
    std:strcpy(name, other.name);
}

Composition::Composition(Composition&& other): name(other.name), type(other.type), year(other.year)
{
    other.name = nullptr;
}

void Composition::SetName(const char* n)
{
    delete[] name;
    name = new char[std::strlen(n) + 1];
    std::strcpy(name, n);
}

const char* Composition::GetName() const 
{
    return name;
}

void Composition::SetType(Type t)
{
    type = t;
}

Type Composition::GetType() const
{
    return type;
}

int Composition::GetYear() const
{
    return year;
}

bool Composition::operator==(const Composition& other) const
{
    return this->type == other.type;
}

Composition& Composition::operator=(const Composition& other)
{
    if(this != &other)
    {
        delete[] name;
        name = new char[std::strlen(other.name) + 1];
        std::strcpy(name, other.name);

        type = other.type;
    }
    return *this;
}

void Composition::Print() const
{
    std::cout << "ID: " << this -> GetId()
    << ", Name: " << name
    << ", Type: " << static_cast<int>(type)
    << ", Year: " << year;
}

std::ostream& operator<<(std::ostream& os, const Composition& comp)
{
    comp.Print();
    return os;
}