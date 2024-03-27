#include <iostream>
#include "Log.h"
void log(const char* message);

static int Multiply(int a, int b)
{
	log("Multiply");
	return a * b;
}

int main()
{
	std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();
	//the cin.get allows to keep the window open until the user decides to close it
}