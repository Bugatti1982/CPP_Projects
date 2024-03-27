#include <iostream>
#include "Log.h"

void initlog()
{
	log("Initialized Log");
}

void log(const char* message)
{
	std::cout << message << std::endl;
}