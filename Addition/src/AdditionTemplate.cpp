#include <iostream>

template <class T>
class AdditionTemplate
{
public:
    T add(T a, T b) { return a+b; }
    T add(T a, T b, T c) { return a+b+c; }
};