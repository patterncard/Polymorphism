#pragma once
#include <string>
#include "Bird.h"

using namespace std;

#ifndef SPARROW_H
#define SPARROW_H

class Sparrow : public Bird
{
private:
    char *song;

public:
    Sparrow();
    void sing();
    ~Sparrow();
};

#endif
