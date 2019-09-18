#include <iostream>
#include <string>
#include <cstring>
#include "../include/Cuckoo.h"

using namespace std;

Cuckoo::Cuckoo()
{
    song = new char[10];
    strcpy(song, "KU KU! ");
}

void Cuckoo::sing()
{
    cout << "KU KU! " << endl;
}

Cuckoo::~Cuckoo()
{
    delete[] song;
}