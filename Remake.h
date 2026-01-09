
#ifndef REMAKE_H
#define REMAKE_H

#include "MusicComposition.h"

class Remake: public Composition
{
    protected:
    int remakeYear;

    public:
    Remake(const char* n, Type t, int y, int ry);
    Remake& operator=(const Remake& other);
    void Print() const override;

    friend std::ostream& operator<<(std::ostream& os, const Remake& remake);


};



#endif