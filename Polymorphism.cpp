#include <iostream>

class Bird
{
public:
    virtual void sing()
    {
        std::cout << "Bird singing! " << std::endl;
    }
};

class Sparrow : public Bird
{
public:
    void sing()
    {
        std::cout << "CWIR CWIR! " << std::endl;
    }
};

class Cuckoo : public Bird
{
public:
    void sing()
    {
        std::cout << "KU KU! " << std::endl;
    }
};

class Rooster : public Bird
{
public:
    void sing()
    {
        std::cout << "KUKKURYKU! " << std::endl;
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

    std::cout << "poinyterr" << std ::endl;

    Bird *bird = &General;
    bird->sing();

    bird = &Small;
    bird->sing();

    return 1;
}