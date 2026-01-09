#include "Music.h"

int Music::idCount = 1;

Music::Music(): id(idCount++) {};


int Music::GetId() const
{
    return id;
}
