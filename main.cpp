// Practical5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(12);
    v.push_back(-10);

    std::cout << "\n\nMapTriple\n";
    MapTriple m1 = MapTriple();
    m1.map(v);

    std::cout << "\n\nMapSquare\n";
    MapSquare m2 = MapSquare();
    m2.map(v);

    std::cout << "\n\nMapAbsoluteValue\n";
    MapAbsoluteValue m3 = MapAbsoluteValue();
    m3.map(v);

    std::cout << "\n\nFilterOdd\n";
    FilterOdd filter1 = FilterOdd();
    filter1.filter(v);


    std::cout << "\n\nFilterNonPositive\n";
    FilterNonPositive filter2 = FilterNonPositive();
    filter2.filter(v);


    std::cout << "\n\nFilterForTwoDigitPositive\n";
    FilterForTwoDigitPositive filter3 = FilterForTwoDigitPositive();
    filter3.filter(v);


    std::cout << "\n\nReduceMinimum\n";
    ReduceMinimum reduce1 = ReduceMinimum();
    reduce1.reduce(v);


    std::cout << "\n\nReduceMinimum\n";
    ReduceGCD reduce2 = ReduceGCD();
    reduce2.reduce(v);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
