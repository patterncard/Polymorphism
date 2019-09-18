#pragma once
#include <string>
#include "Bird.h"

using namespace std;

#ifndef CUCKOO_H
#define CUCKOO_H

class Cuckoo : public Bird
{
private:
 char *song;
public:
    Cuckoo();
    void sing();
    ~Cuckoo();
};

#endif