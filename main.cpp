#include <iostream>
#include "MusicComposition.h"
#include "Remake.h"

int main()
{
    Composition music1("qwerty", Type::song, 2026);
    Composition music2("zxcvbnm", Type::opera, 2020);
    Remake music3("zxcvbnm", Type::opera, 2020, 2022);
    Remake music4("qwerty", Type::song, 2026, 2030);


    music1.Print();
    std::cout << std::endl;
    music2.Print();
    std::cout << std::endl;
    music3.Print();
    std::cout << std::endl;
    music4.Print();

    if( music1 == music2 )
    {
        std::cout << "\nMusic1 and Music2 have same type\n";
    }
    else
    {
        std::cout << "\nMusic1 and Music2 have different type\n";
    }

    std::cout << "\nMusic1 after = : " << music1;
    music1 = music2;
    std::cout << "\nMusic1 before = : " << music1;

    return 0;
}