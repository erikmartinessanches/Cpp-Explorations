// C++ Explorations.cpp : This file contains the 'main' function.
//
#include <iostream>
#include <cstdlib>
#include "Explorations.h"

using namespace std;

int main(int argc, char* argv[])
{
	ExploringBinary foo;
	foo.ShowBinary(argc, argv); //Passing on the arguments.

	PointersToFunctions();
}
