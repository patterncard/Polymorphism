#pragma once
#include <string>
#include "Bird.h"

using namespace std;

#ifndef ROOSTER_H
#define ROOSTER_H

class Rooster : public Bird
{
public:
    void sing();
};

#endif