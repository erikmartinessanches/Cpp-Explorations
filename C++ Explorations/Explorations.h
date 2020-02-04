#pragma once
class ExploringBinary
{
public:
	void ShowBinary(int argc, char* argv[]);
};

void PointersToFunctions();

//Inlines should be DEFINED in headers, unlike other functino definitins.

//A member function that is defined inside the class is implicitly treated 
//as an inline function. 

void UseModules();
