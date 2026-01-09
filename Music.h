#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>

class Music
{
    protected:
    const int id;
    static int idCount;

    public:
    Music();
    virtual ~Music() = default;

    int GetId() const;
    virtual void Print() const = 0;
};

#endif