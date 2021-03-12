// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <LaborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
    #include "trygonometria.h"
#else
    #include <cmath>
#endif


int main()
{
    double result;

    #ifdef USE_TRIGONOMETRY_DEGREE
        result = degreemath::sin(45.0);
    #else
        result=sin(M_PI/4.0);
    #endif

     std::cout << result << std::endl;
	return 0;
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
