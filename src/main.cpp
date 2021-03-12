// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "trygonometria.h"

int main()
{
    double sinus = degreemath::sin(30);
    double cosinus = degreemath::cos(60);
    double tangens = degreemath::tg(45);
    double cotangens = degreemath::ctg(45);

    fprintf(stdout, "sin(30) = %g\n", sinus);
    fprintf(stdout, "cos(60) = %g\n", cosinus);
    fprintf(stdout, "tg(45) = %g\n", tangens);
    fprintf(stdout, "ctg(45) = %g\n", cotangens);
    
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
