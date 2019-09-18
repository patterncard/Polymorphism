#include <iostream>
#include "../include/Addition.h"
#include "AdditionTemplate.cpp"

using namespace std;

int main()
{
    Addition addition1;
    cout << addition1.add(10, 5) << endl;
    cout << addition1.add(1, 13, 2) << endl;

    AdditionTemplate<int> addition2;
    cout << addition2.add(9, 3) << endl;
    cout << addition2.add(2, 4, 1) << endl;
    AdditionTemplate<double> addition3;
    cout << addition3.add(1, 2) << endl;
    cout << addition3.add(3, 2, 1) << endl;
    AdditionTemplate<string> addition4;
    cout << addition4.add("Hello ", "world!") << endl;
    cout << addition4.add("one ", "two ", "tree ") << endl;
}