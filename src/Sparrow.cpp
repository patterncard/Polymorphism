#include <iostream>
#include <cstring>
#include "../include/Sparrow.h"

using namespace std;

Sparrow::Sparrow()
{
    song = new char[10];
    strcpy(song, "CWIR CWIR");
}
void Sparrow::sing()
    {
        cout << song << endl;
    }

Sparrow::~Sparrow()
{
    delete[] song;
}