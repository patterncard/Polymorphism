#include <iostream>
#include "../include/Bird.h"
#include "../include/Sparrow.h"
#include "../include/Cuckoo.h"

using namespace std;

class Rooster : public Bird
{
public:
    void sing()
    {
        cout << "KUKKURYKU! " << endl;
    }
};
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

    cout << "poinyterr" << endl;

    Bird *bird = &General;
    bird->sing();

    bird = &Small;
    bird->sing();

    return 1;
}