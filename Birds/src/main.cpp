#include <iostream>
#include "../include/Bird.h"
#include "../include/Sparrow.h"
#include "../include/Cuckoo.h"
#include "../include/Rooster.h"

using namespace std;

    void simulateBirdSong(Bird &song)
{
    song.sing();
}

int main()
{
    Bird General;
    Sparrow Small;
    Cuckoo Round;
    Rooster Big;

    General.sing();
    Small.sing();
    Round.sing();
    Big.sing();

    Bird *bird = &General;
    bird->sing();

    bird = &Small;
    bird->sing();

    bird = &Round;
    bird->sing;

    bird = &Big;
    bird->sing;

    simulateBirdSong(General);
    simulateBirdSong(Small);
    simulateBirdSong(Round);
    simulateBirdSong(Big);

    return 1;
}
