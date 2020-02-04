#include <iostream>
#include <cstdlib>
#include "Explorations.h"
#include "printBinary.h"

using namespace std;

void ExploringBinary::ShowBinary(int argc, char* argv[])
{
    if (argc != 2) {
        cout << "Must provide a number." << endl;
        exit(1);
    }
    //This example from Thinking in C++ v1, p. 189 prints the binary 
    //pattern of the floating point number in the argv[1] parameter.
    double d = atof(argv[1]); //Converts (arguments) from ASCII to float
    /* The next line reinterprets the double as an array of bytes by taking
    the address and casting it to a unsigned char*, passing to printBinary()
    for display. Probably won't use much, but good to know...*/
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
    for (int i = sizeof(double); i > 0; i -= 2)
    {
        printBinary(cp[i - 1]);
        printBinary(cp[i]);
    }
}
