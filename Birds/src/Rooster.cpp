#include <iostream>
#include <string>
#include <cstring>
#include "../include/Rooster.h"

Rooster::Rooster()
{
    song = new char[10];
    strcpy(song, "KUKKURYKU! ");
}

void Rooster::sing()
{
    cout << "KUKKURYKU! " << endl;
}

Rooster::~Rooster()
{
    delete[] song;
}
