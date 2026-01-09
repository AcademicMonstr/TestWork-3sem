#ifndef MUSICCOMPOSITION_H
#define MUSICCOMPOSITION_H

#include "Music.h"

enum class Type { song, opera, symphony, other };

class Composition: public Music
{
    protected:
    char* name;
    Type type;
    const int year;

    public:
    Composition( const char* n, Type t, int y);
    ~Composition();
    Composition(const Composition& other);
    Composition(Composition&& other);

    bool operator==(const Composition& other) const;
    Composition& operator=(const Composition& other);

    void Print() const override;
    friend std::ostream& operator<<(std::ostream& os, const Composition& comp);

    void SetName(const char* n);
    const char* GetName() const;

    void SetType(Type t);
    Type GetType() const;

    int GetYear() const;




};



#endif